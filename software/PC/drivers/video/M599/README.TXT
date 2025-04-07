******************************************************************************
******************************************************************************
*                                                                            *
*       SiS530 VGA Drivers                                                   *
*       Installation, Usage, and Release Document (June 28,1999)             *
*                                                                            *
*     * All brand or product names mentioned are trademarks or               *
*       registered trademarks of their respective holders.                   *
*                                                                            *
******************************************************************************
******************************************************************************
*** The 530 VGA v1.05 driver are certified by Microsoft now                ***
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
   for Microsoft NT 4.0
4. SiS530 VGA Driver Setup & Usage Procedures
   for Microsoft Windows 2000 (Reserved)
5. SiS530 VGA Driver Setup & Usage Procedures
   for Microsoft Windows 95 & Windows 98

******************************************************************************
* 1.  SiS530 VGA Drivers Contents                                            *
******************************************************************************

SiS530 VGA Drivers Package includes one CD-Title. 
(For Rev. 1.01 and newer,  Date: 03/26/99)

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
   BIOS  <DIR> : contains SiS530 VGA BIOS binary file
   WIN95 <DIR> : Contains Windows 95 driver files as
                 VGA Drivers Package Diskette #3 ~ #5 described.
   WINNT40 <DIR>: Contains Windows NT 4.0 driver files. 
   WIN98 <DIR> : Contains Windows 98 driver files as
                 VGA Drivers Package Diskette #6 ~ #8 described.

******************************************************************************
* 2.  System Requirements                                                    *
******************************************************************************

This section describes system requirements for the SiS530 VGA Driver
installationn and usage.

1. The hardware system must contain a SiS530 chipset.
2. Mouse is optional.



******************************************************************************
* 3.  SiS530 VGA Driver Setup & Usage Procedures                             *
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
* 4.  SiS530 VGA Driver Setup & Usage Procedures                             *
*     for Microsoft Windows 2000                     (Reserved)              *
******************************************************************************


******************************************************************************
* 5.  SiS530 VGA Driver Setup & Usage Procedures                             *
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



