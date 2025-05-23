  旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커
  �              Copyright (c) 1995-1999 VIA Technologies Inc.             �
  �                                                                        �
  �          VIA Bus Master(Ultra DMA) PCI IDE Driver ReadMe.Txt           �
  �                                  for                                   �
  �                              Win9x/WinNT                               �
  �                                                                        �
  � * This readme file is used to provide the information for installation,�
  �   Enable/Disable DMA and Uninstall "VIA Bus Master PCI IDE Driver".    �
  읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸

    The VIA Bus Master IDE controller is a high performance Bus  Master  PCI
  IDE controller. This "VIA Bus Master PCI IDE Driver"  distribution  floppy
  is used to utilize the DMA operation of your Hard disk/CD-ROMs  drives  in
  order to release the I/O loading from the  CPU. You  could  refer  to  the
  related section to install the driver individually.

                                CONTENTS
                        ***********************
1)  System Requirements
2)  Distribution Package Contents
3)  Windows 9x Driver
4)  Windows NT Driver
5)  Package Version Identify
6)  Silent Install Driver
7)  Verifying Installation of the Driver
8)  Notes


1) System Requirements

   * This package should be installed on the VIA Bus Master IDE chipset,
     VT82C580VP or later, and others' chipset will not be supported.

   * The "VIA Bus Master PCI IDE Driver" supports the following Operation
     System.

        Operation System                Version
     컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�
        Windows 95                      4.00.950 or above
        Windows 98                      4.10.1998
        Windows NT                      3.51 or above


2) Distribution Package Contents
     This distribution floppy is compress by auto uncompressing format. You
   could uncompress it by execute it.

   The floppy by uncompressing includes these files are listed below.

FLOPPY :
�       _INST32I.EX_
�       _ISDEL.EXE
�       _SETUP.DLL
�       _SYS1.CAB
�       _sys1.hdr
�       _USER1.CAB
�       _user1.hdr
�       DATA.TAG
�       DATA1.CAB
�       data1.hdr
�       LANG.DAT
�       LAYOUT.BIN
�       OS.DAT
�       README.TXT                 This file.
�       RELEASE.TXT                Released Note
�       SETUP.EXE                  "Win9X/WinNT" Setup Program
�       SETUP.INI
�       SETUP.INS
�       SETUP.ISS
�       SETUP.LID
�       SETUP.BMP
�
쳐컴WIN9X
�       VIADSK.MPD              Windows 9x DMA/PIO device driver file
�       VIAIDE.INF              Windows 9x ".INF" file
�       VIAIDE.VXD              Windows 9x VIA .VSD device driver file
�
쳐컴WINNT
�       VIADSK.SYS              Windows NT 3.51 or above DMA/PIO device driver file
�       VIAIDE.INF              Windows NT 3.51 or above ".INF" file
�
읕컴DMATool
        SETDMA.EXE              DMA utility for Windows 9x/NT.

3)  Windows 9x Driver

    *************************
    ** Driver Installation **
    *************************
      Click the SETUP.EXE program and select "Install"  button  then it will
    install the "VIA IDE Bus Master Driver" automatically on your Windows 9x
    system. It will copy the driver to the \WINDOWS\SYSTEM\IOSUBSYS and  set
    the related registry tree.

    ************************
    ** Enable/Disable DMA **
    ************************
      The default setting is the DMA mode. You could turn off the DMA setting
    by running the VIADMATool.

    ***************************
    ** Driver Uninstallation **
    ***************************
      You  could remove the "VIA Bus Master PCI IDE Driver" by selecting the
    "Uninstall" button. It will completely remove the driver from the sytsem.

4)  Windows NT Driver

    *************************
    ** Driver Installation **
    *************************
      Click the SETUP.EXE program and select "Install"  button  then it will
    install the "VIA IDE Bus Master Driver" automatically on your Windows NT
    system. It will copy the driver to the \WINNT\SYSTEM32\DRIVERS  and  set
    the related registry tree.

    ************************
    ** Enable/Disable DMA **
    ************************
      The default setting is the DMA mode. You could turn off the DMA setting
    by running the VIADMATool.

    ***************************
    ** Driver Uninstallation **
    ***************************
      You  could remove the "VIA Bus Master PCI IDE Driver" by selecting the
    "Uninstall" button. It will completely remove the driver from the sytsem.


5)  Package Version Identify

      You could check this distribuation version and release date by using
    the DATE\TIME displayed by using dir/p command, e.g :

      SETUP    EXE        59,392  mm-dd-yy  hh:mi a SETUP.EXE

    The version number reads as 2.hh.mi, which was released on the date of mm/dd/yy.


6)  Silent Install Driver

    Available parameters: -b, -u, -s

       Parameter       Description

       -b              Causes Setup.exe automatically to reboot after
                       the silent mode install successfully.

       -u              Uninstall driver. This parameter must works with
                       the '-s' parameter.

       -s              Silent install driver.

     Note:
       - A dash(-) must precede the command line parameters.
       - The parameters '-b' and '-u' must be specified before the '-s'
         parameter.

     Examples:
       setup.exe -b -s      Silent install driver and reboot the computer.
       setup.exe -u -b -s   Silent uninstall driver and reboot the computer.
       setup.exe -s         Silent install driver but not reboot the computer.
       setup.exe -u -s      Silent uninstall driver but not reboot the computer.


7)  Verifying Installation of the Driver

    For Windows 9x:
        1. Open "Control Panel" from "Start Menu -> Settings".
        2. Open "System" in "Control Panel" and select the "Device Manager".
        3. Select "Hard disk controllers" and check if the "VIA Bus Master
           PCI IDE Controller(Ultra DMA)" controller is existing or not.
        4  If it is then your installation is successful.

    For Windows NT:
        1. Open "Control Panel" from "Start Menu -> Settings"
        2. Select "SCSI Adapters" from "Control Panel".
        3. Check the "Devices" is "VIA bus master IDE drivers" or not.
        4  If it is then your installation is successful.

8) Notes
   *   It is recommended to install the CD-ROM which is not on the same
     channel with the hard drive for the performance issue.

       If you play VCD or DVD abnormally on some CD-ROM or DVD-ROM which
     is on the same channel with hard drive, we recommand you to setup
     the CD-ROM or DVD-ROM on the separatly channel.

   *   You should run the ATAPI ZIP 100MB setup program first for the
     WinNT 3.51/4.0 in order to use ZIP ATAPI 100MB normally on your
     system.

       If you run the VIA Bus Master setup program first and then the ATAPI
     ZIP 100MB setup program. After the ATAPI ZIP 100MB setup program, it
     will disable the VIA Bus Master driver after the installation. You
     could use the following steps to disable the ATAPI ZIP 100MB driver and
     enable the VIA Bus Master driver again.

       1. Double click the "Devices" icon from Control Panel.

       2. Select the service for IDE/ATAPI ZIP drive. (ex. imgatapi)

       3. Press the "Startup" button and select "Disabled".

       4. Press "OK" and reboot computer.



