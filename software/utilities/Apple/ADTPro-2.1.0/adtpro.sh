#!/bin/sh
#
# ADTPro - *nix startup shell script
#
# Note:
#   Invoke with the name of the communications button to push
#   in order to start with that mode active (i.e. './adtpro.sh ethernet')
#
# You can set two variables here:
#   1. $MY_JAVA_HOME - to pick a particular java to run under
#   2. $ADTPRO_HOME - to say where you installed ADTPro
#
# Set default ADTPRO_HOME to be the fully qualified
# current working directory.
export ADTPRO_HOME="`dirname \"$0\"`"
cd "$ADTPRO_HOME"
export ADTPRO_HOME="`pwd`/"

# Uncomment and modify one or both of the lines below if you
# want to specify a particular location for Java or ADTPro.
# Note: They must have a trailing backslash as in the examples!
#
# export MY_JAVA_HOME=/usr/local/java/bin/
# export ADTPRO_HOME=~/myuser/adtpro/

OS=`uname`
OS_ARCH=`uname -p`

if [ "$1x" = "headlessx" ]; then
  shift
  if [ "$1x" = "x" ] || [ ! -f /usr/bin/xvfb-run ]; then
    if [ ! -f /usr/bin/xvfb-run ]; then
      echo "Headless operation requires xvfb."
    else
      echo "usage: adtpro.sh [ headless ] [ serial | ethernet | audio | localhost ]"
    fi
    exit 1
  else
    HEADLESS="xvfb-run --auto-servernum "
  fi
fi

$HEADLESS"$MY_JAVA_HOME"java -Xms256m -Xmx512m -cp "$ADTPRO_HOME"lib/ADTPro-2.1.0.jar:"$ADTPRO_HOME"lib/AppleCommander/AppleCommander-1.3.5.13-ac.jar:"$ADTPRO_HOME"lib/jssc/jssc-2.9.2.jar:"$ADTPRO_HOME"lib/jssc/slf4j-nop-1.7.9.jar org.adtpro.ADTPro $*
