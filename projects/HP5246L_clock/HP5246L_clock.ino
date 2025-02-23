const int outputPin =  4;
const int hourPin = 8;
const int minutePin = 9;

const unsigned long interval = 1000000; // microseconds
const unsigned long debounce_time = 500; // milliseconds
unsigned long pulses;
unsigned int hour, minute, second;
unsigned long previous_micros = 0;
unsigned long last_debounce;

void setup() {
  // set the digital pin as output:
  pinMode(outputPin, OUTPUT);
  pinMode(hourPin, INPUT_PULLUP);
  pinMode(minutePin, INPUT_PULLUP);
  hour = 23;
  minute = 59;
  second = 59;
}

void calculate_time(void) {
  if (second>59) {
    second = 0;
    minute++;
    if (minute>59) {
      minute = 0;
      hour++;
      if (hour>23) {
        hour = 0;
      }
    }
  }
  // now compute the total number of pulses
  pulses = ((long int)hour)*10000 + ((long int)minute)*100 + (long int)second;
}

void process_keys(void) {
  static long int current_millis;
  static bool previousHpin, previousMpin;
  if (digitalRead(hourPin) == 0) {
    current_millis = millis();
    if (current_millis - last_debounce >= debounce_time) {
      hour++;
      if (hour > 23) {
        hour = 0;        
      }
      last_debounce = current_millis;
    }
  } else if (digitalRead(minutePin) == 0) {
    current_millis = millis();
    if (current_millis - last_debounce >= debounce_time) {
      minute++;
      second = 0;
      if (minute > 59) {
        minute = 0;
      }
      last_debounce = current_millis;
    }
  } else {
    last_debounce = millis();
  }
  previousHpin = digitalRead(hourPin);
  previousMpin = digitalRead(minutePin);
}

// Generates pulses
void generate_pulses(void) {
  // Each complete pulse here should be faster than 4.24us (1/235959) otherwise the system won't display time properly
  // On the R4 Minima each pulse is approximately 1.56us
  // It takes approximately 368.1ms to generate the 235959 pulses in the worst case for a 24-hour clock
  for (unsigned long count = 0; count < pulses; count++) {
    digitalWrite(outputPin, 1);
    digitalWrite(outputPin, 0);
  }  
}

void loop() {
  // First we update the clock and the number of pulses
  // Pulses are calculated as 1 for each second, 100 for each minute, 10000 for each hour
  calculate_time();
  // Now generate the pulse sequence
  generate_pulses();
  // Now we wait for the remaining time to complete one second, the waiting time here serves two purposes:
  // 1 - it adds to the correct signal period so that we display time properly
  // 2 - we compute clock time properly and increment the "second" variable every 1000000us
  // Note that this clock is expected to drift over time, the purpose here is not accurate time measurement
  // but to display time on a frequency counter!
  while (1) {
    // Since we are waiting, check the keys for time adjustment (just polling for now)
    process_keys();
    // Check if 1000000us elapsed, if so, exit the while loop and restart the loop
    unsigned long current_micros = micros();
    if (current_micros - previous_micros >= interval) {
      second++;
      previous_micros = current_micros;
      break;
    }    
  }
}
