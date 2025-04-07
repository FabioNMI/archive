
              ***************************************
              *                                     *
              *           S3 ViRGE/DX (375)         *
              *                                     *
              *              User Manual            *
              *                                     *
              ***************************************



Notice                                                        Version  1.0

The information in this document is subject to change in order to improve
the reliability, design, or function of this product without prior notice
and does not represent a commitment on the part of this company.
In no event will the manufacturer be liable for direct, indirect, special,
or consequential damages arising out of the use the product or
documentation, even if advised of the possibility of such damages.
No part of this reference manual may be reproduced or transmitted in any
form or by any means without the prior written permission of this company.



Table of Contents
=================

1.0  Introduction
     1.1  S3 64-bit 3D/2D Acceleration Technology
     1.2  Streams Processor
     1.3  Features
     1.4  Software Drivers Supported
2.0  Installation
     Installation Procedures

3.0  Driver Installation
     3.1  AutoCAD R12, R13
          3.1.1  Select Graphic Board/Resolution.
          3.1.2  Basic Configuration
          3.1.3  User Interface Configuration
          3.1.4  Expert Configuration
     3.2  3D Studio
     3.4  Microsoft Windows 3.1
          3.4.1  DCI Support
          3.4.2  Installation Instructions
     3.5  Windows 95 Driver
     3.6  Windows NT Driver
          3.6.1  Resolutions and Color Depths Supported
          3.6.2  Features
          3.6.3  Installations Instructions
     
--------------------------------------------------------------------------
              
1.0  Introduction

The S3 ViRGE/DX integrated 3D graphics/video accelerator hereinafter
referred to as S3 ViRGE/DX or ViRGE/DX brings the world of compelling
interactive entertainment, education, and presentations to the mainstream
of the personal computing world. It does this by combining the S3 Streams
Processor and S3 Engine technologies on a single 208-pin PQFP chip with
an integrated 170 MHz RAMDAC and dual clock synthesizer.

The 64-bit S3 Engine technology delivers the 2D performance required for
graphics-intensive Microsoft Windows 3.1 and Windows 95 applications.
In addition, the S3 Engine technology provides advanced 3D texture mapping
features for interactive 3D applications such as gaming and presentations,
as well as high performance shading features for CAD applications.
The inclusion of S3's advanced Streams Processor for video and
entertainment acceleration as well as S3's Scenic Highway for multimedia
connectivity rounds out S3 ViRGE/DX as the complete interactive graphics
multimedia solution.

1.1  S3 64-bit 3D/2D Acceleration Technology

The core of the S3 ViRGE is the S3 Engine technology. The general 3D
features of the engine include flat and Gouraud shading, texture mapping
with perspective correction, and 16-bit hardware Z-buffering Advanced
texture mapping features include several lighting models and
filtering/sampling modes to render realistic high quality interactive
scenes.

1.2  Streams Processor

Today's multimedia applications blend graphics and video to provide the
user with the most compelling interactive experience. The Streams
Processor facilitates this by permitting stretching, filtering, and color
space conversion (YUV to RGB) of two independent pixel streams. Arithmetic
blending of a primary graphics stream and secondary graphics/video stream
is also possible for fade-in and fade-out effects for these applications.
The stretching capabilities of the Streams Processor also allow the end
user to enjoy high quality full screen video instead of a small grainy
video window. Hardware double buffering of both primary and secondary data
streams is also supported to enable high-quality "tear-free" playback.

The Streams Processor allows simultaneous display of graphics and video
of different color depths. For example, it is possible to display 24
bp-pequivalent video on top of an 8-bit graphics background. This saves
memory bandwidth and storage capacity while permitting higher frame rates.

The Streams Processor supports color keying, where a secondary stream
video image pixel is displayed when the color of the primary graphics
image pixel is the same as the color key. The color key can be any color
value or a 1-bit mask in 15 bpp mode. Chroma keying, the overlaying of
irregularly-shaped and transparent video object on a graphics background
is also supported. This technique is often used in games and interactive
applications.

1.3  Features

High-Performance Integrated DRAM-based 3D/2D Graphics and
Video Accelerator
  @ High-performance 64-bit 3D/2D graphics engine utilizing S3's advanced
    S3 technology.
  @ Integrated 170 MHz True-color RAMDAC and dual-clock synthesizer.
  @ S3 Streams Processor for hardware-as-sisted video playback and games
    acceleration.

S3 64-bit 3D/2D Engine Technology
  @ Best of class 2D performance for windows 95.
  @ High quality/performance 3D texture mapping for interactive
    entertainment and presentations.
  @ Texture perspective correction, lighting, and advanced filtering modes
    for enhanced realism and image quality in all 3D texturing
    applications.
  @ Full 16-bit Z-buffer support in all rendering modes for enhanced image
    quality, realism, and performance.
  @ High performance flat and Gouraud shading support for traditional CAD
    applications.

S3 Streams Processor Features
  @ Filtered full screen display of two independent pixel streams of video
    and graphics with blending and color space conversion (YUV to RGB).
  @ Simultaneous display of graphics and video of different color depths.
  @ Arithmetic blending of two pixel streams for fade-in/fade-out effects.

1.4  Software Drivers Supported

  @ Windows 3.1
  @ Windows 95
  @ Windows NT 3.51
  @ Windows NT 4.0
  @ AutoCAD
  @ 3D Studio
  

               
--------------------------------------------------------------------------

2.0  Installation

Installation Procedures

To install the adapter into your system, follow these steps:

1. Turn OFF all power to your system, including any peripherals (printer,
   external drives, modem, etc.).
2. Unfasten the cover mounting screws on your system. Reference your
   system user manual to determine the location of the mounting screws.
3. Remove the system cover. Reference your system user manual for
   instructions on how to remove the system cover.
4. Select an open expansion slot. Select an appropriate PCI Bus expansion
   slot for the adapter. Please refer to your computer system manual for
   the location of the PCI Bus expansion slot. Remove the retaining screw
   that holds the slot cover in place. Slide the slot cover out and put
   the screw aside (you will need it to secure the adapter).
5. Install the adapter. To install the adapter in the selected PCI Bus
   expansion slot, place the gold-fingered edge-connector of the adapter
   directly above an expansion slot on the motherboard.
6. Attach the adapter. Use the screw you removed from the expansion slot
   in Step 4 to secure the adapter in place.
7. Replace the computer cover. Secure the cover with the mounting screws
   you removed in Step 2.

You have now completed the installation of your new graphics adapter on
your system.



--------------------------------------------------------------------------


--------------------------------------------------------------------------

3.0  Driver Installation

The Software Support Resolution/Colors and Memory

Resolution   Colors   Memory              Support Software
----------   ------   ------   ---------------------------------------
640x480      256        2M       Win 3.1, Win95, AutoCAD, MicroStation
640x480      32K        2M       Win 3.1, AutoCAD, MicroStation
640x480      64K        2M       Win 3.1, Win95, AutoCAD, MicroStation
640x480      16.7M      2M       Win 3.1, Win95, AutoCAD, MicroStation
800x600      256        2M       Win 3.1, Win95, AutoCAD, MicroStation
800x600      32K        2M       Win 3.1, AutoCAD, MicroStation
800x600      64K        2M       Win 3.1, Win95, AutoCAD, MicroStation
800x600      16.7M      2M       Win 3.1, Win95, AutoCAD, MicroStation
1024x768     256        2M       Win 3.1, Win95, AutoCAD, MicroStation
1024x768     32K        2M       Win 3.1, AutoCAD, MicroStation
1024x768     64K        2M       Win 3.1, Win95, AutoCAD, MicroStation
1152x864     256        2M       Win 3.1, Win95
1280x1024    256        2M       Win 3.1, Win95, AutoCAD, MicroStation
1600x1200    256        2M       Win 3.1, AutoCAD, MicroStation
1024x768     16.7M      4M       Win 3.1, Win95, AutoCAD, MicroStation
1280x1024    32K        4M       Win 3.1, AutoCAD, MicroStation
1280x1024    64K        4M       Win 3.1, Win95, AutoCAD, MicroStation

3.1  AutoCAD R12, R13

1. Insert HTCD V1.9 Title into CD-ROM drive. 
   Run \vga\s3-375\adi42\install [enter], follow the installation steps on the screen.
2. You will be ask for the name of the directory you wish to install into
   the drivers. In the space provided, enter a complete subdirectory path
   name (Example: C:\ACAD\DRV). The TurboDLD Classic Driver and the other
   files will be copied to the proper AutoCAD working subdirectory.
3. Change to AutoCAD working subdirectory(C:\ACAD). Begin AutoCAD with the
   reconfigure switch by typing:     ACAD -R  [Enter]
4. Choose option 3, Configure video display from the AutoCAD configuration
   menu. AutoCAD will then show the current video display.
5. Type Y at the Do you want to select a different one? message to display
   the available video options for AutoCAD.
6. Select TurboDLD Classic v2.20.02 by Panacea Inc. from the list of
   Available video display options.
7. Next, as you continue past the welcome screen, the TurboDLD Classic
   Drivers  Configuration Menu will appear, select display graphics board
   and display resolution. (Refer 4.1.1~4.1.4 section introduction)
8. After answering AutoCAD's standard driver configuration questions,
   you will return back to the AutoCAD configuration menu. To begin you
   accelerated AutoCAD, for AutoCAD R12/R13, select option 0, Exit to
   Drawing Editor.

3.1.1  Select Graphic Board/Resolution.

Select Display Graphics Board
Use the up and down arrow key to select " S3 ViRGE/DX " then press Enter.

Select Display Resolution
Use the up and down arrow key to select the resolution and color you wish
to use.

3.1.2  Basic Configuration

Number of AutoCAD command lines:
The number of text lines you wish to use for the AutoCAD command line.
The default is 3 lines, but values from 1 to 10 can be specify. It will be
useful that you use this driver with a value larger than 3 in a high
resolution mode with small fonts to eliminate frequent swapping back and
forth between the text and graphics screen.

Screen Configuration:
Select Dual to run in dual screen mode, one monitor for graphics and
another for text. Choose single, to run AutoCAD in the standard single
screen mode, using a video mode switch to standard VGA text mode
during a flip screen. To eliminate the video mode switch to text mode and
back into high resolution graphics, choose Text Window on Single to
configure the single screen to use a graphics mode text window. Using
graphics mode to display text allows an instantaneous return from a flip
screen.

Select Font from List
For resolution over 800x600, we recommend the 12x20 or 12x24 Provided
by Panacea are 6x8, 8x8, 8x14, 8x16, 12x20 and 12x24 fonts options.

Select Font Filter
Choose a .BDF font type from those listed to limit the available font
choices. If there are no .BDF font selections in the Basic Configuration
menu, you are require to add the following line to your AutoCAD start-up
batch file:
           SET DLDFONT=C:\ACAD\DRV

3.1.3  User Interface Configuration

Double Click Interval Time
Allows you to set time delays for TurboDLD Classic features. These times
are measure in hundredths of a second. The time represents the largest
amount of time that can elapse between the release of digitizer button and
the subsequent pressing of the same button in order to detect a double
click.
Values between 10 and 30 recommended.

BP Button
Double click the button on your digitizer to call up the Big Picture.

BP Highlight
Controls how the current viewport reference in the Big Picture appears on
the screen.Patt line displays the viewport reference using dotted line.
XOR Rect uses a contrasting rectangle to display the viewport reference.
The Both option will use a combination of patt line and XOR rect to display
the viewport reference.

BP Refresh Depending on a Drawing Complexity
If BP refresh is disable, the Big picture would become confusing, display
vectors that are actually erased and no longer part of the drawing to
configure the big picture to be updated as objects are drawn and erased.
Enable the BP refresh if speed is a major concern in disabling it.

3.1.4  Expert Configuration

Display List
Enables or disables the display list feature of TurboDLD  Classic, the
core of the driver's AutoCAD performance boost. This option should always
set to ENABLE, as disabling the Display List will cause TurboDLD Classic
to run as an ordinary non-display list driver.

Use AutoCAD 31-bit Space
Configures TurboDLD Classic for use with AutoCAD R12/13's 31-bit
logical drawing space. When set to Yes, the driver will use AutoCAD's
extended 31 bit drawing space. Selecting No, will use a 15-bit drawing
space.

Internal Command Echo
If you would like to see TurboDLD Classic's internal commands display at
the AutoCAD command line as they are execute, enable this option.

BP Zoom Mode
Sets the Big Picture (BP) zoom definition area display options. In a
zoomed view of the static BP, as the current viewport is zoomed or panned,
Float mode causes the image in the BP to move around within the bird's-eye
window, keeping the zoomed viewport area fixed in the center of the
bird's-eye. Freeze mode will lock the current BP contents into place to
provide a better overall frame of reference.

Disable DL in PSpace
Allows you to turn off the Display List while in PaperSpace only. This
function is useful for PSpace users who find the display list size grows
exceedingly for their drawings.

Once all of the TurboDLD Deluxe parameters have been confine, select SAVE,
EXIT to save the configuration information.

3.2  3D Studio

1. Insert HTCD V1.9 Title into CD-ROM drive. change to subdirectory D:\VGA\S3_375\ADI42.
2. Type INSTALL [Enter] install Drivers for R12/13 into your 3D Studio
   working subdirectory of C:\3DS\DRIVERS, follow the installation steps
   on the screen.
3. Run the PANA3DS.BAT files that was copied into your 3DS\DRIVERS
   subdirectory to set the environment variable for 3D studio.
4. Edit the 3DS.SET file located in your 3DS directory and change the
   following three lines as:
                               RENDER-DISPLAY=RCPADI
                               MAIN-DISPLAY=RCPADI
                               MATERIAL-DISPLAY=RCPADI
5. Save the 3DS.SET file and exit the editor.
6. From you 3D Studio directory, delete or rename the file 3DADI.CFG by
   typing:
                 DEL   3DADI.CFG [Enter]
7. Start the 3D Studio reconfiguration by typing:  3DS [Enter].
8. From the Display Configuration Menu, select a display graphics board
   and display resolution as you would for AutoCAD use.
9. To configure 3D studio for the Rendering and/or Materials screens,
   select a rendering graphics board and a rendering resolution.

NOTE: Because RCPADI device drivers, by definition, are combined
display and rendering devices during 3D studio reconfiguration, it may
bring you to the TurboDLD Classic Configuration, it may bring you to the
TurboDLD Classic the other one for Rendering. It is not necessary to
select display and/or rendering resolutions a second time.




3.4  Microsoft Windows 3.1  

3.4.1  DCI Support

With S3 ViRGE/DX (375) hardware, DCI-compatible applications can use the
DCI Provider and by-pass GDI. The DCI Provider uses the off-screen video
memory as a cache form color space conversion, hardware stretching, and
filtering of video data. The S3 ViRGE/DX (375) DCI driver enhances
performance. Performance is enhanced by improving direct screen access,
color-space conversion, and filtering.

3.4.2  Installation Instructions

The Windows setup program installs and modifies all of the necessary
files. Follow these steps to install the S3 ViRGE/DX (375) Windows 3.1
driver.


1. Insure that Windows 3.1 is already installed on your computer.
2. Insert HTCD V1.9 Title into CD-ROM drive. 
3. Form your Windows directory, at the DOS prompt, type SETUP [Enter] to
   run the Windows SETUP.EXE program. The current Windows configuration is
   displayed.
                C:\WINDOWS\SETUP  [Enter]
4. Use the arrow keys to highlight the Display entry and press ENTER. A
   list of available display adapters is displayed.
5. Use the arrow keys to highlight other (Requires disk provided by a
   hardware manufacturer) and press ENTER.
6. Enter your CD-ROM drive name(EXAMPLE: D:\VGA\S3_375\WIN31), and press ENTER.
7. You will see the list of available drivers and their associated
   resolutions, highlight by moving the cursor to select the screen
   resolution and press ENTER.
8. Continue with the remainder of the setup procedure.

The Windows 3.1 S3 ViRGE/DX (375) driver installation is now complete.

3.5  Windows 95 Driver

The section provides instructions to use the installation CD Title.
Following the following installation procedure loads drivers and related
files onto your PC.

Installation Instructions

The windows setup program installs and modifies all of the necessary
files. Follow these steps to install the Windows 95 driver.


1. Insert HTCD V1.9 Title into CD-ROM drive.
2. Ensure that MS Windows 95 is up and running properly using the Standard
   VGA mode.
3. Click the Start button.
4. Double click on the Display icon in the "Setting & Control Panel"
   folder.
   You can also click the right mouse button anywhere on the desktop and
   select the Properties options from the pop-out menu
5. Click the Setting tab.
6. Click the Change Display Type... button.
7. Under Adapter Type click the Change button.
8. Click the Have Disk button.
9. Change directory to Windows 95 drivers subdirectory in CD-ROM(e.g.
   D:\VGA\S3_375\WIN95), and click the OK button.
10. Select 3d-virge.inf and click the OK button.
11. Select S3 ViRGE/DX (375) Driver from the list and click the OK button.
    If a message stating that one or more driver files is older than the
    files on the system respond NO to overwrite the files.
12. Click the Close button.
13. Select the appropriate resolution using the Desktop Area and Color
    Palette options.
14. Click the Apply button.
15. Click Yes to restart your PC.

The Windows 95 S3 ViRGE/DX (375) driver installation is now complete.

3.6  Windows NT Driver

3.6.1 Resolutions and Color Depths Supported

Resolution     Colors     Memory Required
----------    --------    ----------------
640x480        256             1MB
640x480        32,768          1MB
640x480        16.7M           2MB
800x600        256             1MB
800x600        32,768          1MB
800x600        16.7M           2MB
1024x768       256             1MB
1024x768       32,768          2MB
1024x768       16.7M           4MB
1152x864       256             1MB
1280x1024      256             2MB
1280x1024      32,768          4MB
1600x1200      256             2MB

3.6.2 Features

Initial support for S3 ViRGE-accelerated 3D support. The display driver
has been enhanced to provide for glyph expansion text drawing. Each
character is color expanded to the screen using the hardware acceleration
features of ViRGE/DX. The display driver has been enhanced to provide for
hardware acceleration of the most common bitblt calls.

3.6.3 Installations Instructions

To install the S3 ViRGE/DX (375) device driver from CD Title, do the
following:



1. From Program Manager enter the "Main" program group, and select
   Control Panel.
2. Select "Display", then "Change Display Type", this will call the
   Display Type Window.
3. Select "Change" next to the field Adapter Type.
4. Select "Other".
5. Enter the PATHNAME where the Windows drivers is in , and select "OK".
6. This will call the Driver Select screen, and S3 Video will be
   highlighted. Select "Install".
7. After the files have been copied over Windows NT will prompt you to
   restart your system. After system has restarted, you can change
   resolution by selecting the "Display" icon from your "Control Panel".


APRIL 1 . 1998 .
