  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
  ³              Copyright (c) 1995-1998 VIA Technolgies Inc.              ³
  ³                                                                        ³
  ³          VIA Bus Master(Ultra DMA) PCI IDE Driver ReadMe.Txt           ³     
  ³                                  for                                   ³
  ³                              Win95/WinNT                               ³
  ³                                                                        ³
  ³ * This readme file is used to provide the information for installation,³
  ³   Enable/Disable DMA and Uninstall "VIA Bus Master PCI IDE Driver".    ³
  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ

    The VIA Bus Master IDE controller is a high performance Bus  Master  PCI 
  IDE controller. This "VIA Bus Master PCI IDE Driver"  distribution  floppy
  is used to utilize the DMA operation of your Hard disk/CD-ROMs  drives  in 
  order to release the I/O loading from the  CPU. You  could  refer  to  the
  related section to install the driver individually.

                                CONTENTS
                        ***********************
1)  System Requirements
2)  Distribution Package Contents
3)  Windows 95 Driver
4)  Windows NT Driver
5)  Package Version Identify
6)  Notes


1) System Requirements

   * This package should be installed on the VIA Bus Master IDE chipset,
     VT82C580VP or later, and others' chipset will not be supported.

   * The "VIA Bus Master PCI IDE Driver" supports the following Operation
     System.

        Operation System                Version             
     ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
        Windows 95                      4.00.950 or above
        Windows NT                      3.51 or above
                                        

2) Distribution Package Contents  
     This distribution floppy is compress by auto uncompressing format. You 
   could uncompress it by execute it.
 
   The floppy by uncompressing includes these files are listed below. 

FLOPPY :
³   SETUP.EXE                   "WIN95/WINNT" Setup Program
³   DATA.TAG                    InstallShield5 related files below
³   SETUP.INI   
³   _INST32I.EX_
³   _ISDEL.EXE  
³   _SETUP.DLL  
³   _SYS1.CAB   
³   _USER1.CAB  
³   DATA1.CAB   
³   LANG.DAT    
³   LAYOUT.BIN  
³   OS.DAT      
³   SETUP.BMP   
³   SETUP.INS   
³   SETUP.LID   
³
ÃÄÄÄWIN95
³       VIADSK.MPD              Windows 95 DMA/PIO device driver file
³       VIAIDE.INF              Windows 95 ".INF" file
³       VIAIDE.VXD              Windows 95 VIA .VSD device driver file
³
ÀÄÄÄWINNT 
        VIADSK.SYS              Windows NT 3.51 or above DMA/PIO device driver file 
        VIAIDE.INF              Windows NT 3.51 or above ".INF" file


3)  Windows 95 Driver
    
    *************************
    ** Driver Installation **
    *************************
      Click the SETUP.EXE program and select "Install"  button  then it will 
    install the "VIA IDE Bus Master Driver" automatically on your Windows 95
    system. It will copy the driver to the \WINDOWS\SYSTEM\IOSUBSYS and  set 
    the related registry tree.    

    ************************
    ** Enable/Disable DMA **       
    ************************
      The default setting is the DMA mode. You could turn off the DMA setting
    by running "SETUP.EXE"  again  and select the "Enable/Disable DMA" button 
    to disable the DMA mode.

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
     
      You should follow the procedure listed below to complete the  install-  
    ation. 
 
      a) Select the "SCSI Adapters" icon on the "Control Pannel"
      b) Select the "Add.." button on the "Drivers" sheet.
      c) Select the "VIA Bus Master PCI IDE Driver" and click "OK" button.
      d) Reboot the sytem.

    ************************
    ** Enable/Disable DMA **       
    ************************
      The default setting is the DMA mode. You could turn off the DMA setting
    by running "SETUP.EXE"  again  and select the "Enable/Disable DMA" button 
    to disable the DMA mode.

    ***************************
    ** Driver Uninstallation **    
    ***************************
      You could remove the "VIA Bus Master PCI IDE Device Driver" by  running
    the "SETUP.EXE" again to uninstall the driver. "VIA Bus  Master  PCI  IDE 
    Device Driver" will not be started by this operation. You  could  restart
    it latter if it is necessary. After the reboot, the default "IDE CD-ROM (
    ATAPI) Dual-channel PCI IDE Controller" driver will be started.

     If you want to totally remove the "VIA Bus Master PCI IDE Device Driver"
    then you could follow the steps listed below.

      a) Select the "SCSI Adapters" icon on the "Control Pannel"
      c) Select the "VIA Bus Master PCI IDE Driver".
      b) Select the "Remove" button on the "Drivers" sheet.
      d) Reboot the sytem.


5) Package Version Identify
     You could check this distribuation version and release date by using 
   the DATE\TIME displayed by using dir/p command, e.g :
    
        SETUP    EXE        59,392  09-06-97  2:12a SETUP.EXE

     The time column is 2:30a which means the package distribution version
   is 2.1.1 and is released on the Sep. 06 '97.

6) Notes
     It is recommended to install the CD-ROM which is not on the same
   channel with the hard drive for the performance issue.
     If you play VCD or DVD abnormally on some CD-ROM or DVD-ROM which
   is on the same channel with hard drive, we recommand you to setup
   the CD-ROM or DVD-ROM on the separatly channel.
   
