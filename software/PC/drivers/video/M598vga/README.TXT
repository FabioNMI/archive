******************************************************************************
******************************************************************************
*                                                                            *
*       SiS530 VGA Drivers                                                   *
*       Installation, Usage, and Release Document (December, 11, 1998)       *
*                                                                            *
*     * All brand or product names mentioned are trademarks or               *
*       registered trademarks of their respective holders.                   *
*                                                                            *
******************************************************************************
******************************************************************************

******************************************************************************
*       Introduction                                                         *
******************************************************************************
The contain of this document included SiS530 VGA Driver installation,
usage and release information.

******************************************************************************
*       Table of Contents                                                    *
******************************************************************************
This document contains the following sections:

1. SiS530 VGA Drivers Contents
2. System Requirements
3. SiS530 VGA Driver Setup & Usage Procedures
   for SVGAUTL.EXE DOS Utility
4. SiS530 VGA Driver Setup & Usage Procedures
   for Microsoft NT 4.0
5. SiS530 VGA Driver Setup & Usage Procedures
   for Microsoft NT 5.0 (Reserved)
6. SiS530 VGA Driver Setup & Usage Procedures
   for Microsoft Windows 95 & Windows 98

******************************************************************************
* 1.  SiS530 VGA Drivers Contents                                            *
******************************************************************************

SiS530 VGA Drivers Package includes one CD-Title. 
(For Rev. 1.01 and newer,  Date: 12/11/98)

SiS530 VGA Drivers Package CD-Title Contents

*  SiS530 VGA Drivers Package CD-Title
    CD-ROM Version includes 30 languages setup utilities :
    1. Simple Chinese
    2. Traditional Chinese
    3. Danish
    4. Dutch
    5. English
    6. French
    7. German
    8. Italian
    9. Japanese
   10. Korean
   11. Norwegian
   12. Portuguese
   13. Russian
   14. Spanish
   15. Swedish
   ...and so on. 

   Including the following file and sub-directories:
   README.TXT  : ASCII text file. This text file.
   SISTAG      : Disk Tag File for NT 4.0
   BIOS  <DIR> : contains SiS530 SVGA BIOS binary file
   SVGAUTIL.EXE: SiS530 DOS SVGA Utility Program
   WIN9x <DIR> : Contains Windows 9x driver files as
                 VGA Drivers Package Diskette #3 ~ #5 described.
   WINNT40 <DIR>: Contains Windows NT 4.0 driver files. 

******************************************************************************
* 2.  System Requirements                                                    *
******************************************************************************

This section describes system requirements for the SiS530 VGA Driver
installationn and usage.

1. The hardware system must contain a SiS530 chipset.
2. Mouse is optional.

******************************************************************************
* 3.  SiS530 VGA Driver Setup & Usage Procedures                             *
*     for SVGAUTL.EXE DOS Utility                                            *
******************************************************************************

1. General Description
   SVGAUTL.EXE is one of the utilities of SiS530.
   It supports three functions:
      (1) Video Mode Setting
      (2) Frame Rate Setting
      (3) Power Saving Setting
   Since SiS530 supports many enhanced Text Mode and Graphic Mode, you
   can use SVGAUTL.EXE to select the desired video mode.
   For 640x480, 800x600, 1024x768, and 1280x1024 resolutions, SiS530
   SVGA supports multiple frame rates.
   If your monitor could synchronize with these frame rates, you can use
   SVGAUTL.EXE to get advantage.
   SiS530 also supports VESA DPMS Power Saving Modes.
   SVGAUTL.EXE can help you to set the capability.
2. How to Use?
   To use SVGAUTL.EXE,
   (1) Type "SVGAUTL" in the directory where it resides.
       For example,
       D:\>SVGAUTL <Enter> (suppose SVGAUTL.EXE resides in CD-ROM "D")

   (2) The Main Menu would appear and direct you to configure SiS 530.
   (3) When you complete configuration, you may save your preferences to
       "AUTOEXEC.BAT file and use it as your power-on (or hardware reset)
       default  environment.                                                                                     .
3. What the Parameters Stand for?
   The meaning of parameters used by SVGAUTL.EXE are explained below:
   Syntax:
  >SVGAUTL [/D:mode_no] [/F0:n0] [/F1:n1] [/F2:n2] [/F3:n3] [/PA:ta] [/PB:tb]
    where
    /D: Set the Video Mode to be mode_no which is a hex number.
        For example : Set 1024x768 256 color graphic mode.
                      >SVGAUTL /D:38 <Enter>
   /F0: For 640x480, set frame rate to be n0 Hz.
        Three availabe frame rates are 60, 72, and 75 Hz.
        For example : Set 640x480 graphic mode with 60Hz frame rate
                      >SVGAUTL /F0:60 <Enter>
   /F1: For 800x600, set frame rate to be n1 Hz.
        Four availabe frame rates are 56, 60, 72, and 75 Hz.
        For example : Set 800x600 graphic mode with 72Hz frame rate.
                      >SVGAUTL /F1:72 <Enter>
   /F2: For 1024x768, set frame rate to be n2 Hz.
        Four availabe frame rates are 87 (Interlace), 60, 70, and 75 Hz.
        For example : Set 1024x768 graphic mode with 60Hz frame rate.
                      >SVGAUTL /F2:60 <Enter>
   /F3: For 1280x1024, set frame rate to be n3 Hz.
        Two availabe frame rates are 87 (Interlace) and 60 Hz.
        For example : Set 1280x1024 graphic mode with 60Hz frame rate.
                      >SVGAUTL /F3:60 <Enter>
   /PA: Set Standby Timer to be ta minutes. (0 < ta < 15 min.)
        For example : Set Standby Timer be 5 minutes.
                      >SVGAUTL /PA:5 <Enter>
   /PB: Set Suspend Timer to be tb minutes. (0 < tb < 15 min.)
        For example : Set Suspend Timer be 5 minutes.
                      >SVGAUTL /PB:5 <Enter>
   Note:
   (1) Suspend Time would be "ta + tb". (i.e. standby time + suspend time)
   (2) The timers will not be very accurate and would just be around the time

******************************************************************************
* 4.  SiS530 VGA Driver Setup & Usage Procedures                             *
*     for Microsoft NT 4.0                                                   *
******************************************************************************

# Windows NT 4.0 display drivers Installation:
1. Click "Start" menu and select Control Panel from Settings group.
2. Select Display icon.
3. Select Settings of Display Properties.
4. Select Display Type.
5. Select Change from the Adapter Type area.
6. Select Have Diskof Change Display.
7. Place the SiS530 CD-Title Disk into CDROM Drive.
8. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in CD-Title is at "D:\WINNT40".
9. When the "Change Display" dialog box appears, click "OK".
10.When the "Third-party Drivers" dialog box appears, click "Yes".

  A message will appear stating that the drivers were successfully installed.
  Click "OK".  You must now restart Windows NT 4.0.

# Selecting resolution and color depth:
1. Click "Start" menu and select Control Panel from Settings group.
2. Select Display icon.
3. Select Settings.
4. Select Color Palette to change between 16 colors,256 colors,32768 colors,
   65536 colors, and 16777216 colors.
5. To select desktop resolution size, go to the Desktop area and use the
   slide bar to change resolution from 640x480,800x600,1024x768 to 1280x1024.
6. Select Test to test the resolution. If the display test screen was good
   then select "Yes" when the "Testing Mode" dialog box appears. If the
   display test screen was bad then select "No".  Windows NT will give you an
   error message.
7. Click "OK".  If the display test screen was good and you select "Yes",
   Windows NT 4.0 will change the mode without restarting Windows NT 4.0.


******************************************************************************
* 5.  SiS530 VGA Driver Setup & Usage Procedures                             *
*     for Microsoft NT 5.0                           (Reserved)              *
******************************************************************************


******************************************************************************
* 6.  SiS530 VGA Driver Setup & Usage Procedures                             *
*     for Microsoft Windows 95 & Windows 98                                  *
******************************************************************************

# Windows 95 & Windows 98 (Display Driver Installation)
1. Click "Start" menu and select Control Panel from Settings group.
2. Select "Display" icon.
3. Select "Settings" index in the display properties sheet.
4. Select "Change Display Type" button.
5. Select "Change..." button in "Adapter Type" group.
6. Select "Have Disk" button.
7. Place the SiS530 CD-Title Disk into CDROM Drive.
8. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in CD-Title is at "D:\WIN9x".
9. When the "Change Display" dialog box appears, click "Close".
10.Select "Close" or "Apply" button from display properties sheet.
11.A message will appear stating you must restart the windows 95 system,
   select "yes" to restart.
12.After restarting, windows 95 or Windows 98 will run on 640x480x256 color,
   75NI.

# Selecting resolution, color depth, and refresh rate:
1. Click "Start" menu and select Control Panel from Settings group.
2. Select Display icon.
3. Select Settings.
4. Select Color Palette to change between 16 color, 256 color, Hi color,
   and True color.
5. To select desktop resolution size, go to the Desktop area and use the
   slide bar to change resolution from 640x480, 800x600, 1024x768, and
   1280x1024.
6. Select Refresh rate list box to change the screen refresh rate.
7. Click "OK" or "Apply".

# Windows 95 & Windows 98 (Utility Installation)
1. Place the Windows 95 & Windows 98 Installation Disk into Floppy Drive or
   Place the SiS530 CD-Title Disk into CDROM Drive.
2. Click "Start" menu and select "Run..." menu item.
3. In "Run" dialog, typing the source execution file then press "OK".
   The execution file in CD-Title is at "D:\WIN9x\SETUP.EXE".
4. A setup successful dialog will appear when setup complete, user can
   choose restart system now or restart later.

#  Windows 95 OSR2 Q&A

   In Windows 95 OSR2, it provids a default MCI driver -- "Active Movie"
   to replace the "Xing" or "Compcord" or "MediaMedics" MCI driver. But
   using Active Movie has some problems because the Active Movie MCI
   command sets are not very compelete.



