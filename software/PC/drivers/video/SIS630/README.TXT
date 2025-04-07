******************************************************************************
*                                                                            *
*       SiS630/630E/630S VGA Drivers                                         *
*       Installation and Usage (Oct. 12, 2000)                               *
*                                                                            *
*     * All brand or product names mentioned are trademarks or               *
*       registered trademarks of their respective holders.                   *
*                                                                            *
******************************************************************************
******************************************************************************

******************************************************************************
*       Introduction                                                         *
******************************************************************************
The contain of this document included SiS630/630E/630S VGA Driver installation,
usage and release information.

******************************************************************************
*       Table of Contents                                                    *
******************************************************************************
This document contains the following sections:

1. SiS630/630E/630S VGA Drivers Contents
2. System Requirements
3. SiS630/630E/630S VGA Driver Setup & Usage Procedures
   for Microsoft NT 4.0
4. SiS630/630E/630S VGA Driver Setup & Usage Procedures
   for Microsoft Win2000 
5. SiS630/630E/630S VGA Driver Setup & Usage Procedures
   for Microsoft Windows 95 & Windows 98
6. SiS630/630E/630S VGA Driver Setup & Usage Procedures
   for Microsoft WindowsMe
******************************************************************************
* 1.  SiS630/630E/630S VGA Drivers Contents                                  *
******************************************************************************

SiS630/630E/630S VGA Drivers Package includes one CD-Title and one diskette package. 
(For Rev. 1.07.53,  Date: 10/12/2000)

SiS630/630E/630S VGA Drivers CD-Title Package Contents

*  SiS630/630E/630S VGA Drivers CD-Title Package
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

   WIN9x   <DIR>: Contains Windows 9x driver files.             
   WINNT40 <DIR>: Contains Windows NT 4.0 driver files. 
   WIN2000 <DIR>: Contains Windows Win2000 VGA/AGP driver files. 
   Utility <DIR>: Contains Windows NT 4.0 Utility files. 

SiS630/630E/630S VGA Drivers Diskette Package Contents 
(No International Language Support and no utility support, only English Version
 and INF files for driver update)

   Disk1: Contains Windows NT4.0 driver INF files.
   Disk2: Contains Windows Win2000 driver INF files.
   Disk3: Contains Windows95 driver INF files.
   Disk4: Contains Windows98 driver INF files.
   Disk5: Contains Windows9x & Win2000 AGP driver files.
   Disk6: Contains WindowsME driver INF files.

******************************************************************************
* 2.  System Requirements                                                    *
******************************************************************************

This section describes system requirements for the SiS630/630E/630S VGA Driver
installationn and usage.

1. The hardware system must contain a SiS630/630E/630S chipset.
2. Mouse is optional.

******************************************************************************
* 3.  SiS630/630E/630S VGA/Utility Driver Setup & Usage Procedures           *
*     for Microsoft NT 4.0                                                   *
******************************************************************************

# Windows NT 4.0 display drivers Installation:
1. Click "Start" menu and select Control Panel from Settings group.
2. Select Display icon.
3. Select Settings of Display Properties.
4. Select Display Type.
5. Select Change from the Adapter Type area.
6. Select Have Diskof Change Display.
7. Place the SiS630/630E/630S CD-Title Disk into CDROM Drive.
8. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in CD-Title is at "D:\WINNT40".
   The directory in diskette package is "A:\WINNT40" at Disk#1		
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
* 4.  SiS630/630E/630S VGA/AGP Driver Setup & Usage Procedures               *
*     for Microsoft Win2000                                                  *
******************************************************************************

# Windows2000 (Display Driver Installation by INF)
1. Go to device manager, right-click on "Video Controller(VGA Compatible)" 
    and select "Properties". 
2. Select the "Driver" page and push the "Update Driver" button.
3. In "Upgrade Device Driver Wizard" Dialog , press Next.
4. In what do you want the Wizard to do? Choose "Display a list of the
    Known drivers from this device so that I can choose a specific driver"
5. Press Next.
6. In Hardward types , chooes "Display adapter" and press Next.
7. Then Select "Have Disk" button.
8. Place the SiS630/630E/630S CD-Title Disk into CDROM Drive.
9. When the "Install from Disk" dialog box appears, type the directory
    storing the drivers and click "OK".
    The directory in CD-Title is at "D:\WIN2000".
    The directory in diskette package is "A:\WIN2000" at Disk#2.
10. Press Next.
11. Select a Device Driver "SiS 630" than press Next.
12. Start Device Drviers Installation, press Next.
13. A "Warning" Dialog show, press "Yes" to continue the installation.
14. Press "finish".
15. SiS630 Properties , press "Close"
16. Restart the computer.

# Windows2000 (Utility & Driver Installation by setup utility)
1. Place the SiS630/630E/630S CD-Title Disk into CDROM Drive.
2. Click "Start" menu and select "Run..." menu item.
3. In "Run" dialog, typing the source execution file then press "OK".
   The execution file in CD-Title is at "D:\WIN2000\SETUP.EXE".
   Or, setup.exe -s for silent installation.
   Or, setup.exe DM=16,1024,768 -s for silent installation and set default 
	resolution as 1024x768@16bbp
4. A setup successful dialog will appear when setup complete, user can
   choose restart system now or restart later.


# Windows 2000 AGP Driver Installation (manually by INF file update)
1. Go to device manager, right-click on the PCI-PCI bridge 
   which represents your AGP bridge and select "Properties". 
2. Select the "Driver" page and push the "Update Driver" 
   button. Go through the update driver wizard and on the 
   "Locate Driver Files" page select "Specify a location"
3. Enter the location of your new INF and driver.

# Windows 2000 AGP Driver Installation (automatically by setup utility)
1.run "setup" in the directory of \cd\Win2000\agp

Note: You MUST install Win2000 VGA driver before you install AGP driver.

******************************************************************************
* 5.  SiS630/630E/630S VGA/AGP/Utility Driver Setup & Usage Procedures       *
*     for Microsoft Windows 95 & Windows 98                                  *
******************************************************************************

# Windows 95 & Windows 98 (Display Driver Installation)
1. Click "Start" menu and select Control Panel from Settings group.
2. Select "Display" icon.
3. Select "Settings" index in the display properties sheet.
4. Select "Change Display Type" button.
5. Select "Change..." button in "Adapter Type" group.
6. Select "Have Disk" button.
7. Place the SiS630 CD-Title Disk into CDROM Drive.
8. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in CD-Title is at "D:\WIN9x\Win95\SiS630m.INF" for Win95, or 
   "D:\WIN9x\Win98\SiS630m.INF" for Win98.
9. When the "Change Display" dialog box appears, click "Close".
10.Select "Close" or "Apply" button from display properties sheet.
11.A message will appear stating you must restart the windows 95 system,
   select "yes" to restart.
12.After restarting, windows 95 or Windows 98 will run on 800x600x16bbp color.

Note: AGP Gart driver will be installed automatically if VGA driver is installed by
      setup utility.

# Selecting resolution, color depth, and refresh rate:
1. Click "Start" menu and select Control Panel from Settings group.
2. Select Display icon.
3. Select Settings.
4. Select Color Palette to change between 16 color, 256 color, Hi color,
   and True color.
5. To select desktop resolution size, go to the Desktop area and use the
   slide bar to change resolution from 640x480, 800x600, 1024x768, 1280x1024.
   .....up to 1920x1200, depends on what max. resolution monitor can support.
6. Select Refresh rate list box to change the screen refresh rate.
7. Click "OK" or "Apply".

# Windows 95 & Windows 98 (Utility & AGP Driver Installation)
1. Place the SiS630 CD-Title Disk into CDROM Drive.
2. Click "Start" menu and select "Run..." menu item.
3. In "Run" dialog, typing the source execution file then press "OK".
   The execution file in CD-Title is at "D:\WIN9x\SETUP.EXE".
4. A setup successful dialog will appear when setup complete, user can
   choose restart system now or restart later.

# Install Win98 AGP driver manually:
1. Go to device manager, expand system device, right-click
   on the PCI standard PCI-to-PCI bridge.
2. Select the "Driver" page and press the "Update Driver"
   button. Go through the "Display a list of all the drivers
   in a specific location" page select "Have Disk"
3. Enter the location of your new INF and driver.

Note: You MUST install Win2000 VGA driver before you install AGP driver manually.

#  Windows 95 OSR2 Q&A

   In Windows 95 OSR2, it provids a default MCI driver -- "Active Movie"
   to replace the "Xing" or "Compcord" or "MediaMedics" MCI driver. But
   using Active Movie has some problems because the Active Movie MCI
   command sets are not very compelete.

                                (End of Document)