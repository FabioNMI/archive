******************************************************************************
******************************************************************************
*                                                                            *
*       SiS 5597/5598 VGA Drivers                                            *
*       Installation, Usage, and Release Document (Feb, 05, 1998)            *
*                                                                            *
*     * All brand or product names mentioned are trademarks or               *
*       registered trademarks of their respective holders.                   *
*                                                                            *
******************************************************************************
******************************************************************************

******************************************************************************
*       Introduction                                                         *
******************************************************************************
The contain of this document included SiS 5597/5598 VGA Driver installation,
usage and release information.
Both diskette/CD-title versions content are included.

******************************************************************************
*       Table of Contents                                                    *
******************************************************************************
This document contains the following sections:

1. SiS 5597/5598 VGA Drivers Diskette/CD-title Contents
2. System Requirements
3. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for SVGAUTL.EXE DOS Utility
4. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for Autodesk ADI 4.2 -Protected Mode
       AutoCAD R11
       AutoCAD R12
       AutoShade R2.0
       3D Studio Version 3.0
5. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for Microsoft NT 3.5x
6. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for Microsoft NT 4.0
7. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for Microsoft Windows 95
8. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for Microsoft Windows 3.x
9. SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for IBM OS/2 Ver. 2.1
10.SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for IBM OS/2 Warp 3.0 (Double Byte Character)
11.SiS 5597/5598 VGA Driver Setup & Usage Procedures
   for IBM OS/2 Warp 3.0 (Single Byte Character)

******************************************************************************
* 1.  SiS 5597/5598 VGA Drivers Diskette/CD-title Contents                   *
******************************************************************************

SiS 5597/5598 VGA Drivers Package includes nine 1.44MB floppy diskettes or
one CD-Title. (For Rev. 1.07 and newer,  Date: 02/05/97)

1. SiS 5597/5598 VGA Drivers Package Diskette Contents

(1)SiS 5597/5598 VGA Drivers Package Diskette #1
   Readme / Utilities / DOS / Windows NT / VGA BIOS

   Including the following files and sub-directories:
   SISTAG         : Disk Tag File for NT 3.5x
   README.TXT     : This text file
   RELEASE.TXT    : Text file of driver release note
   INSTDRV.EXE    : Unpack & copy program for ADI 4.2
   SVGAUTIL.EXE   : SiS 5597/5598 SVGA Utility Program
   ADI42    <DIR> : Contains AutoCAD, AutoShade, 3D Studio driver files
   ET       <DIR> : Contains ETen Chinese System Display Driver(ETDSPDRV.COM)
                    ver1.19B01 to support SiS SVGA. You may update the driver
                    to your ETen Chinese System if you have the older version
                    or you may neglect it if you have the newer version.
   WINNT35  <DIR> : Contains Windows NT 3.5x driver files
                    OEMSETUP.INF : SiS SVGA setup information file (NT 3.5x)
   WINNT40  <DIR> : Contains Windows NT 4.0  driver files
                    SISV5597.INF : SiS SVGA setup information file (NT 4.0)

   (The following files are not driver files but for your reference only.)
   BIOS     <DIR> : Contains SiS SVGA BIOS binary file

(2)SiS 5597/5598 VGA Drivers Package Diskette #2 : Windows 95 disk #1/4
(3)SiS 5597/5598 VGA Drivers Package Diskette #3 : Windows 95 disk #2/4
(4)SiS 5597/5598 VGA Drivers Package Diskette #4 : Windows 95 disk #3/4
(5)SiS 5597/5598 VGA Drivers Package Diskette #5 : Windows 95 disk #4/4

   These three diskette contain SiS 5597/5598 SVGA Windows 95 Driver,
   Setup Program, SiS MMPlayer, Direct Draw Driver and Utilities.

   Including the following file :
   SETUP.EXE      : SiS 5597/5598 SVGA Windows 95 Setup Program

(6)SiS 5597/5598 VGA Drivers Package Diskette #6 : Windows 3.x disk #1/2
(7)SiS 5597/5598 VGA Drivers Package Diskette #7 : Windows 3.x disk #2/2

   These two diskettes contain SiS Windows 3.x Driver, Setup Program,
   SiS MMPlayer and Utilities.

   Including the following file :
   SETUP.EXE      : SiS 5597/5598 SVGA Windows 3.x Setup Program

(8)SiS 5597/5598 VGA Drivers Package Diskette #8 : IBM OS/2 Ver. 2.1

   This diskette contains IBM OS/2 Ver. 2.1 driver files.

   Including the following file and sub-directory:
   OS2\SBCS.21 <DIR> : SISINST.CMD : SiS 5597/5598 VGA OS/2 2.1 Setup Program

(9)SiS 5597/5598 VGA Drivers Package Diskette #9 : IBM OS/2 3.0 (Double Byte)

   This diskette contains IBM OS/2 WARP 3.0 (Double Byte : Chinese, Japanese,
   Korean, ......etc.) driver files.

   Including the following file and sub-directory:
   OS2\DBCS.30 <DIR> : SETUP.CMD : SiS 5597/5598 SVGA OS/2 3.0 Setup Program

(10)SiS 5597/5598 VGA Drivers Package Diskette #10 : IBM OS/2 3.0 (Single Byte)

   This diskette contains IBM OS/2 WARP 3.0 (Single Byte) driver files.

   Including the following file and sub-directory:
   OS2\SBCS.30 <DIR> : SISINST.CMD : SiS 5597/5598 VGA OS/2 3.0 Setup Program

2. SiS 5597/5598 VGA Drivers Package CD-Title Contents

*  SiS 5597/5598 VGA Drivers Package CD-Title
    CD-ROM Version includes 15 languages setup utilities :
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

   Including the following file and sub-directories:
   README.TXT : ASCII text file. This text file.
   RELEASE.TXT: Text file of driver release note
   IDE  <DIR> : SiS IDE Drivers and Readme files for
                SiS Chipset 5513, 5571, 5581, 5582, 5597, 5598, 5591, 5592
   MM   <DIR> : SISTAG      : Disk Tag File for NT 3.5x
                RELEASE.TXT : Text file of driver release note
                BIOS  <DIR> : contains SiS SVGA BIOS binary file
                DOS   <DIR> : INSTDRV.EXE  : Unpack & copy program of ADI 4.2
                              SVGAUTIL.EXE : SiS 5597/5598 SVGA Util. Program
                              ADI42  <DIR> : Contains AutoCAD, AutoShade,
                                             3D Studio driver files
                              ET     <DIR> : Contains ETen Chinese System
                                             Display Driver (ETDSPDRV.COM)
                                             ver1.19B01 to support SiS SVGA.
                                             You may update this driver to
                                             your ETen Chinese System if you
                                             have the old version or you may
                                             neglect it if you have the newer
                                             version.
                OS2   <DIR> : Contains IBM OS/2 Ver 2.1,
                              IBM OS/2 Warp 3.0 (Double Byte) and
                              IBM OS/2 Warp 3.0 (Single Byte) driver files as
                              VGA Drivers Package Diskette #8 ~ #10 described.
 				WIN31 <DIR> : Contains Windows 3.X  driver files as
                              VGA Drivers Package Diskette #6 ~ #7 described.
                WIN95 <DIR> : Contains Windows 95  driver files as
                              VGA Drivers Package Diskette #2 ~ #5 described.
                WINNT <DIR> : Contains Windows 3.5x, 4.0 driver files as
                              VGA Drivers Package Diskette #1 described.

******************************************************************************
* 2.  System Requirements                                                    *
******************************************************************************

This section describes system requirements for the SiS 5597/5598 VGA Driver
installationn and usage.

1. The hardware system must contain a SiS 5597 or SiS 5598 chipset.
2. Mouse is optional.
3. The SiS 5597/5598 VGA BIOS must newer than Version 1.01.

******************************************************************************
* 3.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for SVGAUTL.EXE DOS Utility                                            *
******************************************************************************

1. General Description
   SVGAUTL.EXE is one of the utilities of SiS 5597/5598.
   It supports three functions:
      (1) Video Mode Setting
      (2) Frame Rate Setting
      (3) Power Saving Setting
   Since SiS 5597/5598 supports many enhanced Text Mode and Graphic Mode, you
   can use SVGAUTL.EXE to select the desired video mode.
   For 640x480, 800x600, 1024x768, and 1280x1024 resolutions, SiS 5597/5598
   SVGA supports multiple frame rates.
   If your monitor could synchronize with these frame rates, you can use
   SVGAUTL.EXE to get advantage.
   SiS 5597/5598 also supports VESA DPMS Power Saving Modes.
   SVGAUTL.EXE can help you to set the capability.
2. How to Use?
   To use SVGAUTL.EXE,
   (1) Type "SVGAUTL" in the directory where it resides.
       For example,
       A:\>SVGAUTL        <Enter> (suppose SVGAUTL.EXE resides in Diskette#1)
    OR D:\>MM\DOS\SVGAUTL <Enter> (suppose SVGAUTL.EXE resides in CD-ROM "D")

   (2) The Main Menu would appear and direct you to configure SiS 5597/5598.
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
* 4.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for Autodesk ADI 4.2 -Protected Mode                                   *
*         AutoCAD R11                                                        *
*         AutoCAD R12                                                        *
*         AutoShade R2.0                                                     *
*         3D Studio Version 3.0                                              *
******************************************************************************

1.  General Description
1.1 Driver Files
    (1) The enclosed SiS 5597/5598 ADI driver contains the following file:
        RCPSIS.EXP : SiS ADI Driver (for all resolutions & colors)
        Note: This version of ADI driver does not support 16-color operation.
    (2) This driver fits for a series of Autodesk Inc. products, including:
           1 - AutoCAD/386 R11
           2 - AutoCAD/386 R12
           3 - AutoShade/386 V2.0
           4 - 3D Studio V3.0
    (3) Their installtion procedures are different from one program to the
        others. But the first step of installation is the same for all these
        programs, that is "To unpack and copy drivers to where you would like
        them to reside." Therefore, we will state this step below.
    (4) As to the real installation procedures for each program, we will give
        a detail description in section 2 to 5.
1.2 Unpack & Copy
    To unpack and copy drivers to where they should resides,
    please follow the following procedures:
    (1) Run "INSTDRV.EXE" where it resides.
        For example,
        A:\>INSTDRV        <Enter>(suppose INSTDRV.EXE resides in Diskette#1)
     OR D:\>MM\DOS\INSTDRV <Enter>(suppose INSTDRV.EXE resides in CD-ROM "D")
    (2) In "SiS Super VGA Drivers Installation" menu,
        select "A. ADI 4.2" to unpack and copy drivers.
        (To select, type "A".)
    (3) In "Unpack & Copy ADI 4.2 Drivers" screen,
        keyin the "drive:\directory" where these drivers would reside
        (default C:\ADI42).
        Program would unpack & copy all related files to where you assign.
    (4) After "unpack and copy" completed, exit the INSTDRV.EXE program.
    (5) Refer to section 2 to 5 for the real installation procedures for
        each program.

2. AutoCAD R11 Setup
    (1) The following procedures assume that
        1 - You have complete "unpack & copy" procedure.
        2 - Your ADI 4.2 drivers are located in C:\ADI42.
    (2) Add the following setting to your own batch file for AutoCAD R11
        (say ACADR11.BAT) or to your "AUTOEXEC.BAT" file:
        SET DSPADI=\ADI42\RCPSIS.EXP  <Enter>
    (3) Delete the configure file ACAD.CFG resides in \ACAD directory.
    (4) Type
             ACADR11         <Enter>
        to configure your AutoCAD R11 system.
    (5) In "Select Display Device:" item, choose "ADI P386 V4.0/4.1 display".
    (6) In "Select Display Resolution" screen, choose which display driver
        you want to use.
    (7) Go through the whole instrutions, and the system would start with the
        desired display   setting.

3. AutoCAD R12 Setup
    (1) The following procedures assume that
        1 - You have complete "unpack & copy" procedure.
        2 - Your SiS ADI 4.2 drivers are located in C:\ADI42.
        3 - Your AutoCAD R12 program is located in C:\ACADR12.
        4 - Your AutoCAD R12 default drivers are located in C:\ACADR12\DRV.
        5 - Your AutoCAD R12 configure file ACAD.CFG is located in C:\ACADR12
    (2) Copy the following driver file to C:\ACADR12\DRV:
             RCPSIS.EXP
        You may complete this step by
             COPY C:\ADI42\RCPSIS.EXP C:\ACADR12\DRV
    (3) Delete your original ACAD.CFG file.
        You may complete this step by
             DEL C:\ACADR12\ACAD.CFG
    (4) Restart your AutoCAD R12 program as usual.
    (5) AutoCAD R12 will ask you to complete the configuration procedures
        since it can't find the configure file ACAD.CFG.
    (6) Follow the instructions of AutoCAD R12 to proceed configuration.
    (7) In "Available Video Displays:" item,
        choose the "SiS Super VGA ADI v4.2 Display and Rendering driver" item
    (8) In "Select Display Resolution" screen,
        choose which display driver you want to use.
    (9) Go through the whole instructions, and the system would start with
        the selected display setting.

4. AutoShade R2.0 Setup
    (1) The following procedures assume that
        1 - You have complete "unpack & copy" procedure.
        2 - Your ADI 4.2 drivers are located in C:\ADI42.
    (2) Add the following settings to your batch file for AutoShade R2.0
        (say SHADE2.BAT) or to your "AUTOEXEC.BAT" file.
        1 - For display driver setting,
            SET DSPADI=\ADI42\RCPSIS.EXP
        2 - For rendering driver setting,
            SET RDPADI=\ADI42\RCPSIS.EXP
    (3) Delete the configure file SHADE.CFG.
    (4) Type
            SHADE2  <Enter>  to re-configure the AutoShade.
    (5) While prompting "Select display device:",
        choose "P386 AutoDesk Device Interface display driver.".
    (6) While prompting "Select rendering display driver:",
        choose "P386 AutoDesk Device Interface rendering driver.".
    (7) Go through all the instructions,
        the system would start with the desired display setting.

5. 3D Studio Version 3.0 Setup
    (1) The following procedures assume that
        1 - You have complete "unpack & copy" procedure.
        2 - Your ADI 4.2 drivers are located in C:\ADI42.
    (2) Create your own 3D Studio V3.0 batch file (say 3DS3.BAT) and add the
        following settings to it, or add the following settings to your
        "AUTOEXEC.BAT" file.
        1 - SET RCPADI=C:\ADI42\RCPSIS.EXP
        2 - SET RDPADI=C:\ADI42\RCPSIS.EXP
    (3) Execute the new 3DS batch file or reboot the computer using the new
        "AUTOEXEC.BAT" as to make the new settings effective.
    (4) Change your current working directory to \3DS3
        (where your 3D Studio V3.0 usually resides).
    (5) Delete original configuration file "3DADI.CFG".
    (6) Type
            3DS VIBCFG   <Enter>   to configure your display environment.
    (7) After the "Company Register Screen" appears,
        press  <Enter>
        to continue.
    (8) The "Video Environment Configuration Screen" will appear.
        Please follow the following procedures to configure video display
        environment.
        1 - In "Main-Display" item,
            (a) Press           <Enter>
                The selection menu will appear.
            (b) In selection menu,
                move cursor to "RCPADI".
                Press           <Enter> to select.
        2 - In "Material-Display" item,
            (a) Press           <Enter>
                The selection menu will appear.
            (b) In selection menu,
                move cursor to "RCPADI".
                Press           <Enter>
                to select.
        3 - In "Render-Display" item,
            (a) Press           <Enter>
                The selection menu will appear.
            (b) In selection menu,
                move cursor to "RCPADI" or "RDPADI".
                Press           <Enter>
                to select.
        4 - Complete the other selections and exit configuration.
    (9) After exit configure, 3DS will boot automatically using the
        environment you just select.
   (10) If your previous configuration is OK, 3DS will ask you to make detail
        configuration for SiS 5597/5598 drivers.
        If this didn't happen, please check your previous procedures or
        contact the technical support people.
   (11) In the detail configuration for SiS 5597/5598 drivers, just follow
        the instructions appear on the screen and make your own choice.
        If you are confused in anything, contact the technical support people
        for solution.
   (12) After detail configuration, you can enter the 3DS main display screen
        and you may begin your 3D Studio work in the environment you make
        before.
   (13) Once completing the detail configuration,
        you may enter 3D Studio in the same configuration simply by
        Typing
              \3DS3\3DS       <Enter>
        next time.
   (14) If you want to change your video configuration,
        just follow the procedures mentioned before to re-configure

******************************************************************************
* 5.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for Microsoft NT 3.5x                                                  *
******************************************************************************

# Windows NT 3.5x display drivers Installation:
1. Select Control Panel from Main group.
2. Select Display icon.
3. Select Change Display Type from Display Settings.
4. Select Change from Display Type.
5. Select Other from Select Device.
6. Place the Windows NT 3.5x Installation Disk (Diskette#2)into Floppy Drive
   or Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
7. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in Diskette#1 is at "A:\WINNT35".
   The directory in CD-Title   is at "D:\MM\WINNT\WINNT35".
8. Select Install and click "Yes" when the "Installing Driver"
   dialog box appears.
9. Select New when the "Windows NT Setup" dialog box appears.
10.Click "Continue".

   A message will appear stating that the drivers were successfully
   installed. Click "OK".  You must now restart Windows NT 3.51.

# Selecting resolution and color depth:
1. Select Control Panel from Main group.
2. Select Display icon.
3. Select Color Palette to change between 16 colors, 256 colors, 32768
   colors, 65536 colors, and 16777216 colors.
4. To select desktop resolution size, go to the Desktop area and use the
   slide bar to change resolution from 640x480, 800x600, 1024x768, and
   1280x1024.
5. Select Test to test the resolution.
   If the display test screen was good then select "Yes" when the
   "Testing Mode" dialog box appears. If the display test screen was bad
   then select "No". Windows NT will give you an error message.
6. If the display test screen was good and you select "Yes", Windows
   NT 3.5x will prompt you to restart Windows NT 3.5x.

******************************************************************************
* 6.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for Microsoft NT 4.0                                                   *
******************************************************************************

# Windows NT 4.0 display drivers Installation:
1. Click "Start" menu and select Control Panel from Settings group.
2. Select Display icon.
3. Select Settings of Display Properties.
4. Select Display Type.
5. Select Change from the Adapter Type area.
6. Select Have Diskof Change Display.
7. Place the Windows NT 4.0 Installation Disk (Diskette#1) into Floppy Drive
   or Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
8. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in Diskette#1 is at "A:\WINNT40".
   The directory in CD-Title   is at "D:\MM\WINNT\WINNT40".
9. When the "Change Display" dialog box appears, click "OK".
10.When the "Third-party Drivers" dialog box appears, click "Yes".

  A message will appear stating that the drivers weresuccessfully installed.
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
* 7.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for Microsoft Windows 95                                               *
******************************************************************************

# Windows 95 (Display Driver Installation)
1. Click "Start" menu and select Control Panel from Settings group.
2. Select "Display" icon.
3. Select "Settings" index in the display properties sheet.
4. Select "Change Display Type" button.
5. Select "Change..." button in "Adapter Type" group.
6. Select "Have Disk" button.
7. Place the Windows 95 Installation Disk (Diskette#2) into Floppy Drive or
   Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
8. When the "Install from Disk" dialog box appears, type the directory
   storing the drivers and click "OK".
   The directory in Diskette#2 is at "A:\".
   The directory in CD-Title   is at "D:\MM\WIN95".
9. When the "Change Display" dialog box appears, click "Close".
10.Select "Close" or "Apply" button from display properties sheet.
11.A message will appear stating you must restart the windows 95 system,
   select "yes" to restart.
12.After restarting, windows 95 will run on 640x480x256 color, 75NI.

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

# Windows 95 (Utility Installation)
1. Place the Windows 95 Installation Disk into Floppy Drive or
   Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
2. Click "Start" menu and select "Run..." menu item.
3. In "Run" dialog, typing the source execution file then press "OK".
   The execution file in Diskette#2 is at "A:\SETUP.EXE".
   The execution file in CD-Title   is at "D:\MM\WIN95\SETUP.EXE".
4. Setup procedure will create a "SiS Multimedia Vx.xx" program group,
   there would be contained 3 items:
   -- Multimedia Manager
   -- SiS MMPlayer
   -- Center Screen
5. A setup successful dialog will appear when setup complete, user can
   choose restart system now or restart later.

#  Windows 95 OSR2 Q&A

   In Windows 95 OSR2, it provids a default MCI driver -- "Active Movie"
   to replace the "Xing" or "Compcord" or "MediaMedics" MCI driver. But
   using Active Movie has some problems because the Active Movie MCI
   command sets are not very compelete.

   Q: Why SiSMMPlayer seems not support "config" function?
   A: Because the Active Movie MCI command not provide this function. If
      users using Xing to replace the Active Movie MCI driver,  then the
      config dialog provided by Xing can be seen. i.e. The config dialog
      is created and designed by MCI driver not by Utility (SiSMMplayer).


   Q: Why SiSMMPlayer cannot open VCD 2.0 fomat VCD in Windows 95 OSR2?
   A: Because the Active Movie cannot read some VCD 2.0 format file correctly
      ,it makes our SiSMMPlayer VCD 2.0 function not able to work.
      Users can try to use the player provided by Active Movie, it also
      cannot open above files. If users installed Xing, then use SiSMMplayer,
      all VCD 2.0 function will work fine.


   Q: Why the "Full Screen" selection item seems not work correctly in
      Windows 95 OSR2??
   A: If user installed Xing's MCI driver, then use SiSMMplayer to open a
      FullScreen Video window, it will work fine. But under OSR2  (Active
      movie), when SiS require the MCI driver to open a full screen video
      window, it give us a maximized window.

******************************************************************************
* 8.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for Microsoft Windows 3.x                                              *
******************************************************************************

# Windows 3.x (Display Driver and Utility Installation)
1. Installation
   (1)Click "File" menu and select "Run..." menu item.
   (2)In "Run" dialog, typing the source execution file then press "OK".
      The execution file in Diskette#6 is at "A:\SETUP.EXE".
      The execution file in CD-Title   is at "D:\MM\WIN31\SETUP.EXE".
   (3)Follow the setup program's on-screen instructions.
   (4)Setup procedure will create a "SiS Multimedia Vx.xx" program group,
      there would be contained 5 items:
      -- Multimedia Mannager
      -- SiS MMPlayer
      -- SVGA Setup
      -- Center Screen
      -- Uninstall
   (5)A setup successful dialog will apear when setup complete, user can
      choose restart system now or restart later.

2. Graphics Setup
   (1)In "SiS Multimedia Vx.xx" program group,
      choose "SVGA Setup" icon to enter "SiS VGA Configuration System" screen.
   (2)In "SiS VGA Configuration System" Screen,
      choose which options you would like to use.
   (3)After completing your selections,
      choose "OK" to make all your selections effective.
   (4)Choose "Restart Windows" to re-boot Windows using new settings. Or,
      choose "Continue" your current Windows processes.
      (But when you re-boot Windows, the new settings would take effect.)

3. Power Saving Setup in Windows
   (1)In "SiS VGA Configuration System" screen,
      choose "power saver" item to enter "Power Saver" screen.
   (2)In "Power Saver" Screen,
      choose which options you would like to use.
   (3)After completing the selections,
      choose "OK" to make all your selections effective.
   (4)After complete setup, the power_saver would take effect as you request
      when time up and you may continue your normal process.

4. Zoom_Key Setup
   (0)In "SiS VGA Configuration System" screen, choose "zooming" item to
      define "hot keys" for zoom-in or zoom-out screen without entering
      setup program.
      The operation principles of zoom-in and zoom-out are as follow:
      1- The resolution change sequence for zoom-in is
         1024x768   ===>   800x600   ===>   640x480   .
      2- The resolution change sequence for zoom-out is
         640x480   ===>   800x600   ===>   1024x768   .
      3- But you must first be able to zoom-in before you may zoom-out,
         that means you can not get a resolution larger than that you setup.
   To use this feature, please follow the following procedures.
   (1)In "SiS VGA Configuration System" screen,
      choose "zooming" item to enter "Zooming Hotkey" screen.
   (2)In "Zooming Hotkey" Screen,
      choose which "hot key" you would like to use and enable it.
   (3)After completing the selections,
      choose "OK" to make all your selections effective.
   (4)After complete setup, you may use your own defined hot key to zoom-in
      or zoom-out screen.
5. Notes
   (1)The power saver's timer settings would be effective even exit Windows
   back to DOS.

#  Video Operations
1. DCI Function
   SiS 5597/5598 supports DCI driver for software MPEG playback and other
   media player programs which could take advantage of DCI.
   The SiS 5597/5598 DCI driver is automatically loaded during "Windows
   Driver Unpack & Copy" process.  Therefore it should be transparent to
   the end-user and any media players could take advantage of it.
2. SiS MMPlay (SW MPEG)
   To make SW MPEG playback more friendly than original SW MPEG player
   supplier provided, SiS provide an MMPlayer application program to provide
   an VCP-like (Video Cassette Player) interface.
   To take advantage of the SiS MMPlayer, you must first install "SW MPEG
   Player".  All the SiS provided is just an interface but not a SW MPEG
   Player at present.  If the SW MPEG Player does not exist, the SiS MMPlayer
   will not work. (Xing or Mediamatics)

   To use the SiS MMPlayer, you just follow the procedures below:
   (1) In "SiS Multimedia Vx.xx" program group,
       choose "SiS MMPlayer" icon and SiS MMPlayer VCP-like icon would appear.
   (2) Enjoy the SW MPEG playback as you like.

******************************************************************************
* 9.  SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for IBM OS/2 Ver. 2.1                                                  *
******************************************************************************

# OS2 V2.1 Display Driver Installation
1. Before installing SiS OS/2 V2.1 display driver, start up OS/2 system in
   standard VGA mode.
2. Select "Command Prompt" folder.
3. Select "OS/2 window" or "OS/2 full screen" icon.
4. Place the SiS OS/2 V2.1 display driver installation Disk (Diskette#8) into
   Floppy Drive or Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
5. Change directory to A:\OS2\SBCS.21 or D:\MM\OS2\SBCS.21 in CD-Title.
6. Type SISINST then press "Enter".
7. When the "Select Screen Parameters for SiS SVGA" dialog appears, select
   the resolution, color depth and frame rate you would like, then click "OK"
8. The installation program will create a "SiS Setup" icon at the desktop.
9. Shutdown and re-boot OS/2 V2.1.

******************************************************************************
* 10. SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for IBM OS/2 Warp 3.0 (Double Byte Character)                          *
******************************************************************************

# OS2 Warp Display Driver Installation (For DBCS version)
1. Before installing SiS OS/2 Warp display driver, start up OS/2 system in
   standard VGA mode.
2. Select "Command Prompt" folder.
3. Select "OS/2 window" or "OS/2 full screen" icon.
4. Place the SiS OS/2 Warp display driver installation Disk (Diskette#9) into
   Floppy Drive or Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
5. Change directory to A:\OS2\DBCS.30 or D:\MM\OS2\DBCS.30 in CD-Title.
6. Type SETUP then press "Enter".
7. Setup procedure will create a "SiS Install" icon on the desktop.
8. Shutdown and reboot the OS/2 Warp system.
9. When system reboot, double click the "SiS Install" icon.
   It will perform the further installation.
10.When the "Select Screen Parameters for SiS SVGA" dialog appears, select
   the resolution, color depth and frame rate you would like, then click "OK"
11.The installation program will create a "SiS Setup" icon at the desktop.
12.Shutdown and re-boot OS/2 Warp.

******************************************************************************
* 11. SiS 5597/5598 VGA Driver Setup & Usage Procedures                      *
*     for IBM OS/2 Warp 3.0 (Single Byte Character)                          *
******************************************************************************

# OS2 Warp Display Driver Installation (For SBCS version)
1. Before installing SiS OS/2 Warp display driver, start up OS/2 system in
   standard VGA mode.
2. Select "Command Prompts" folder.
3. Select "OS/2 window" or "OS/2 full screen" icon.
4. Place the SiS OS/2 Warp display driver installation Disk (diskette#10) into
   Floppy Drive or Place the SiS 5597/5598 CD-Title Disk into CDROM Drive.
5. Change directory to A:\OS2\SBCS.30 or D:\MM\OS2\SBCS.30 in CD-Title.
6. Type SISINST then press "Enter".
7. When the "Select Screen Parameters for SiS SVGA" dialog appears, select
 the resolution, color depth and frame rate you would like, then click "OK".
8. The installation program will create a "SiS Setup" icon at the desktop.
9. Shutdown and re-boot OS/2 Warp.
