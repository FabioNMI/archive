       ALi AGP Driver Version 1.40
------------
INTRODUCTION
------------
This file contains a variety of information you should read before 
installing ALi AGP drivers. This setup program contains two drivers, 
AgartD.VXD and ALiPCIMP.PCI. AgartD.VXD is the graphics address 
remapping table(GART) management for ALi M1541/M1621 chipsets at 
Windows 95. ALiPCIMP.PCI is the PCI miniport driver providing seven 
services to PCI for ALi M1541 and M1621 at Windows 98.

-------------------------
CONTENTS OF THIS DOCUMENT
-------------------------
This document contains the following sections:
1. System Requirements
2. Installation Instructions
3. Uninstallation Instructions
4. Manual Installation
5. Verifying Installation of the Driver
6. Verifying Validation of the AGP Functionality
7. Identifying the Drivers Version Number
8. Change List

----------------------
1. System requirements
----------------------
Windows 95:
  1. Microsoft Windows 95 OSR2.1 or later version
  2. ALi AGP Driver (AgartD.VXD)
  3. AGP VGA Card with Driver
  4. Direct X5 or above

Windows 98:
  1. Microsoft Windows 98 
  2. ALi AGP Driver (ALiPCIMP.PCI)
  3. AGP VGA Card with Driver

----------------------------
2. Installation Instructions
----------------------------
Windows 95:
  1. Install Windows 95 OSR2 or later version.
  2. Upgrade Windows 95 to version OSR2.1 by running USBSUPP.EXE.
     We can get this file from Microsoft (www.microsoft.com).
  3. Install Microsoft DirectX 5.0 or later version.
     We can get this driver from Microsoft too.
  4. Install ALi AGP Driver
   - run this install program.
   - this program will detect the Windows version automatically
     and modify the registry to load the proper driver.
  5. Install VGA driver for Windows 95.

Windows 98:
  1. Install Windows 98. 
  2. Install ALi AGP Driver
   - run this install program.
   - this program will detect the Windows version automatically
     and modify the registry to load the proper driver.
  3. Install VGA driver.

------------------------------
3. Uninstallation Instructions
------------------------------
Windows 95 and Windows 98:
  1. Open "Control Panel" folder
  2. Invoke "Add\Remove Programs" icon
  3. Choose "ALi AGP Driver 1.20" item 
  4. Click on "Add/Remove" button to remove drivers.

----------------------
4. Manual Installation
----------------------
  After installation, the following drivers are stored as listed.
      <Windows 95 directory>\System\AgartD.VXD
      <Windows 95 directory>\System\ALiPCIMP.PCI
  
  We can backup those files and install drivers manually in the future.
           
Windows 95:
  1. Copy AgartD.VXD to "<Windows 95 directory>\System\" directory.
  2. Add a key "AGARTD" in the registry:
     KEY:"HKEY_LOCAL_MACHINE\System\CurrentControlSet\Services\VxD\AGARTD" 
     with: 
     NAME:StaticVxD
     DATA:"AgartD.VXD"
 
Windows 98 (M1541 chipset):
  1. Copy ALiPCIMP.PCI to "<Windows 95 directory>\System\" directory.
  2. Add a key "154110b9" in the registry:
     KEY:"HKEY_LOCAL_MACHINE\System\CurrentControlSet\Services\VxD\PCI\GARTMINIPORT\154110B9"
     with:
     NAME       DATA
     --------------- 
     Instance   00 00 00 00
     Name       "ALi M1541"
     Path       "ALiPCIMP.PCI"

Windows 98 (M1621 chipset):
  1. Copy ALiPCIMP.PCI to "<Windows 95 directory>\System\" directory.
  2. Add a key "162110b9" in the registry:
     KEY:"HKEY_LOCAL_MACHINE\System\CurrentControlSet\Services\VxD\PCI\GARTMINIPORT\162110B9"
     with:
     NAME       DATA
     --------------- 
     Instance   00 00 00 00
     Name       "ALi M1621"
     Path       "ALiPCIMP.PCI"    

-----------------------------------------
5. Verifying Installation of the Driver
-----------------------------------------
  To make sure if the ALI AGP driver is properly installed,
  We need run "Regedit" and check whether the key AGARTD exists in 
  the following path
      "HKEY_LOCAL_MACHINE\System\CurrentControlSet\Services\VxD"
  for Windows 95 or the NAME/DATA pair 'Path  "ALiPCIMP.PCI" ' exists in
  the following path
      "HKEY_LOCAL_MACHINE\System\CurrentControlSet\Services\VxD\PCI\GARTMINIPORT\154110B9"
      "HKEY_LOCAL_MACHINE\System\CurrentControlSet\Services\VxD\PCI\GARTMINIPORT\162110B9"
  for Windows 98.

------------------------------------------------
6. Verifying Validation of the AGP Functionality
------------------------------------------------
  To check whether the AGP mechanism is able to activate, we can try the
  anyone of the following:
  1. a. Open the "Control Panel" folder
     b. Invoke "Direct X" icon
     c. Click on "Direct Draw" tab 
     d. Check if the video memory is more than the VGA card's memory.
        If it is, that means the AGP can be activated properly.
     If the "Direct X" icon doesn't exist, please get DirectX 5.0 SDK from 
     http://www.microsoft.com/msdownload/directx/dxf/sdk5.0/default.htm (
     idx5sdk.exe or idx5sdkm.exe). After unpacking, run setup.exe in the 
     root directory to start the SDK setup. Select "DirectX runtime only" 
     from the Setup Type selection dialog box.
  
  2. run ddtest.exe in the previous DirectX 5.0 SDK unpacking_dir\sdk\bin 
     directory. Click the "Connect" button. Check if the "Total Vmem" is
     more than the VGA card's memory. 
  
  3. get the debug or retail versions of the DirectX 5 runtime from previous
     WWW site (idx5dbg.exe or idx5rdst.exe). Run dxtool.exe in the 
     unpacking_dir\debug\directx or unpacking_dir\redist\directx. Check the 
     value of "DirectDraw\Primary Display Driver\Total Video Memory".
     
-----------------------------------------
7. Identifying the Drivers Version Number
-----------------------------------------
  The version of the drivers can be obtained by querying the driver file's
  properties under File Manager.

  After installation, the following driver are stored as listed.
    <Windows directory>\System\AgartD.VXD
    <Windows directory>\System\ALiPCIMP.PCI
  
  1. Invoke the "Explorer" application.
  2. Select the driver file.
  3. Open the "File" menu.
  4. Click on the "Properties" item.
  5. Click on the "Version" tab.
  6. The driver's version should be listed in the "File version" or "Product 
     Version".

--------------
8. Change List
--------------
  1. Solve the compatibility problem of MGA G200 AGP driver version 4.21 with 
     M1541 chipset on Windows98.
  2. Remove the uninstall option of previous ALi chipset AGP driver in
     "Control Panel\Add Remove Programs".
  3. Support multiple language.