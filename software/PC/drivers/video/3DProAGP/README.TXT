-------------------------------------------------------------
SiS 6326 Driver Installation Guide   Rev. 1.24c (12/15/1998)
-------------------------------------------------------------

SiS 6326 AGP/PCI Graphics & Video Accelerator has five sets of drivers 
for different operation systems as Windows 95/98, Windows NT, Windows 3.1,
OS/2 and DOS. The location of these drivers were listed up below.

(1). Windows 95 DirectX and utilities: \WIN95\SETUP.EXE
     Windows 98 DirectX and utilities: \WIN98\SETUP.EXE

(2). Windows NT drivers:
     (a). Windows NT 3.5: \WINNT\WINNT35\OEMSETUP.INF
     (b). Windows NT 4.0: \WINNT\WINNT40\SISV6326.INF
     (c). Windows NT 5.0: \WINNT\WINNT50\SISV6326.INF

(3). OS/2:
     (a). SBCS.21 drivers and utilities: \OS2\SBCS.21\SISINST.CMD
     (b). SBCS.30 drivers and utilities: \OS2\SBCS.30\SISINST.CMD
     (c). DBCS.30 drivers and utilities: \OS2\DBCS.30\SETUP.CMD and
                                         \OS2\DBCS.30\SISINST.CMD

(4). Windows 31 drivers and utilities: \WIN31\SETUP.EXE

(5). DOS:
     (a). ADI42 drivers: \DOS\INSTDRV.EXE

For each OS, Users may refer to the respective procedure below to 
proceed the driver installation.


***  Driver Installation Procedure for Windows 95/98  ***
1. Find the file "Setup" under the directory win95/98.
2. Run the program "Setup" by double clicking on it.
3. Follow up indication to proceed the installation procedure.
4. The driver installation will be completed after system restarts.


***  Driver Installation Procedure for Windows NT 3.5  ***
1. Select "Main" icon.
2. Select "Control Panel" under "Main".
3. Select "Display" under "Control Panel".
4. Select "Change Display Type" under "Display Settings".
5. Select "Change .." under "Adapter Type".
6. Select "other .." under "Select Device".
7. Give the path where the driver was stored under "Install From Disk" 
   then click "OK". For example: C:\vgadrv\winnt\Winnt35
8. Select desired mode such as "SiS 800x600, 256 colors, 85Hz" under 
   "Select Device" then click "Install".
9. Follow up the coming up indication.
10. The driver installation will be completed after system restarts.


***  Driver Installation Procedure for Windows NT 4.0  ***
1. Select "My Computer" icon.
2. Select "Control Panel" under "My Computer".
3. Select "Display" under "Control Panel".
4. Select "Settings" under "Display Properties".
5. Select "Display Type" under "Settings".
6. Select "Change.." under "Adapter Type".
7. Select "Have Disk.." under "Change Display".
8. Select "Browse" under "Install From Disk".
9. Give the path where the driver was stored under "Locate File" then 
   click "Open". For example: C:\vgadrv\winnt\Winnt40
10. Back to "Install From Disk" screen then click "OK".
11. The message "SiS 6326" will appear under "Change Display". Click "OK".
12. Confirm "Yes" under "Third-party Drivers". WinNT 4.0 will perform 
    driver installation and ask the user to close windows to restart system.
13. Close "Display Type" window.
14. Close "Display Properties" window.
15. Reboot the system then the driver installation is completed.


***  Driver Installation Procedure for OS/2  ***
1. Select "OS/2 System" icon.
2. Select "Command Prompts" under "OS/2 System".
3. Select "OS/2 Window" under "Command Prompts".
4. Run the file "sisinst.cmd" under the OS/2 prompt.
   For example: C:\vgadrv\os2\Sbcs.30\sisinst.cmd  <Enter>
5. Select desired resolution and frame rate under "Select screen 
   parameters for SiS SVGA" then click "OK".
6. Reboot the system then the driver installation is completed.


***  Driver Installation Procedure for Windows 3.1  ***
1. Find the file "Setup" under the directory win31.
2. Run the program "Setup" by double clicking on it under file manager screen.
3. The "Setup" program will add a window "SiS Multimedia VX.XX" on desktop. 
   Select the icon "SVGA Setup" in this window.
4. Select desired resolution, frame rate, font, colors ¡K then press "OK" 
   under "SiS VGA System Configuration".
5. Restart Windows 3.1 then the driver installation is completed.


***  Driver Installation Procedure for AutoCad R12  ***
1. Find the file "instdrv.exe" under the directory DOS.
2. Run the program "instdrv.exe" and follow up the direction to build up a
   directory named "ADI42" that contains the driver for AutoCad R12.
3. Run the executable file "ADIENV.BAT" under the directory ADI42. It will 
   install the driver of AutoCad R12 automatically.
