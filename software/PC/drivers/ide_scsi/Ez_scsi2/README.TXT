           =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

                         Adaptec EZ-SCSI Lite 4.03 
 		     (c) Copyright Adaptec, Inc.  1995-1997

           =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Welcome to Adaptec EZ-SCSI Lite 4.03
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

The following information is available in this README file:

  o  UPGRADE INFORMATION

  o  HOST ADAPTER SUPPORT
         o  DOS / WINDOWS 3.1/3.11 HOST ADAPTER DRIVERS (ASPI MANAGERS)
            - List of Supported Host Adapters
            - Tips on the Drivers (ASPI Managers)

  o  HARD DISK SUPPORT

  o  CD-ROM SUPPORT

=-=-=-=-=-=-=-=-=-=
UPGRADE INFORMATION
=-=-=-=-=-=-=-=-=-=

   You are using a "Lite" version of Adaptec EZ-SCSI.  For information on
   upgrading to the CD-ROM version of Adaptec EZ-SCSI, please call Adaptec
   at one of the following numbers:

      Software Ordering (U.S.A. and Canada)      (800) 442-7274
      M-F: 6:00am to 5:00pm Pacific Standard Time

      International Software Ordering             (408) 957-7274
      M-F: 6:00am to 5:00pm Pacific Standard Time

   You will find the following additional components on the CD-ROM version
   of Adaptec EZ-SCSI:

     o  Adaptec SCSI Backup for Windows 95
     o  Adaptec CD Copier for Windows 95/NT 
     o  Adaptec CD Writer for Windows 95/NT 
     o  Adaptec SCSI Explorer for Windows 95/NT which includes
          - SCSI Interrogator
          - SCSI Power Management
          - SCSI Cache Management
     o  Four Audio CD Players for Windows 95/NT
          - Jukebox
          - Standard
          - Mini
          - Micro (Taskbar attachment)
     o  Adaptec Drive Light for Windows 95/NT
     o  Adaptec SCSITutor for Windows 95/NT
     o  Adaptec SCSIBench for Windows 3.1x and Windows 95/NT
     o  Adaptec QuickScan for Windows 3.1x and Windows 95/NT (for SCSI
        TWAIN enabled scanners)
     o  Photo CD Viewer for Windows 3.1x and Windows 95/NT
     o  Over 80 professional quality photos (Photo CD format)
     o  On-line 3rd party catalog for Windows 3.1x and Windows 95/NT
     o  Additional applications and drivers for Windows 3.1x
     o  ... and more


=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
WINDOWS 95/ NT HOST ADAPTER DRIVERS (SCSI MINIPORTS)
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 
  These are available on a separate diskette that came with 
  your host adapter. Please see the readme on this other
  diskette for information on installing and using these
  drivers.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
DOS / WINDOWS 3.1/3.11 HOST ADAPTER DRIVERS (ASPI MANAGERS)
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

   EZ-SCSI installs drivers (also called ASPI Managers) to support 
   Adaptec SCSI host adapters as specified in the list below. 
   Following this list are troubleshooting
   tips for the drivers.

PCI Bus
-------
   ASPI8U2.SYS   Adaptec AHA-2940U2W

   ASPI8DOS.SYS  Adaptec AHA-2910A/2910B
                 Adaptec AHA-2930A/2930B
                 Adaptec AHA-2940/2940AU/2940W/2940U/2940UW
                 Adaptec AHA-2944W/2944UW
                 Adaptec AHA-3940/3940U/3940W/3940UW
                 Adaptec AVA-2904, AVA-2902E/I
                 Adaptec AIC-7850/7855/7860/7870/7880 based SCSI host adapters

   MCAM18XX.SYS  Adaptec AHA-2920/2920A 

PCMCIA Bus
----------
   ASPI2DOS.SYS  Adaptec SlimSCSI (APA-460 & APA-1425/50/50A/60/60A)

Parallel Port Bus
-----------------
   MA348.SYS     Trantor MiniSCSI Plus (T348)
                 Adaptec MiniSCSI Plus (APA-348)

   MA358.SYS     Trantor MiniSCSI EPP (T358)
                 Adaptec MiniSCSI EPP (APA-358)
                 Adaptec MiniSCSI EPP (APA-358A)

ISA Bus
-------

   ASPI2DOS.SYS  Adaptec AVA-1502P,1502AP   
                 Adaptec AVA-1505
                 Adaptec AVA-1515
                 Adaptec AHA-1510/1520/1522
                 Adaptec AHA-1510A/1520A/1522A
                 Adaptec AHA-1510B/1520B/1522B
                 Adaptec AHA-1530P/1532P
                 Adaptec AVA-1502AE/AI,AVA-1505AE/AI,AVA-1505AES
                 Adaptec AIC-6260/6360/6370 based SCSI host adapters

   ASPI4DOS.SYS  Adaptec AHA-1540B/1542B
                 Adaptec AHA-1540C/1542C
                 Adaptec AHA-1540CF/1542CF
                 Adaptec AHA-1540CP/1542CP

Microchannel
------------
   ASPI4DOS.SYS  Adaptec AHA-1640

EISA
----
   ASPI7DOS.SYS  Adaptec AHA-1740/1742/1744
                 Adaptec AHA-1740A/1742A
                 Adaptec AHA-2740/2742/2740T/2742T
                 Adaptec AHA-2740A/2742A/2740AT/2742AT
                 Adaptec AHA-2740W/2742W
                 Adaptec AIC-7770 based SCSI host adapters

VL Bus
------
   ASPI7DOS.SYS  Adaptec AVA-2825
                 Adaptec AHA-2840VL/2842VL
                 Adaptec AHA-2840A/2842A


====================
Troubleshooting Tips
====================

ASPI2DOS.SYS
------------

   ASPI2DOS.SYS is the Adaptec ASPI manager for AIC-6260/6360/6370 based SCSI
   host adapters.  Adaptec EZ-SCSI automatically detects which 
   host adapter you have installed, which ASPI manager needs to be loaded, 
   and what the correct command line switches are.

   o  If you are using an Adaptec APA-1425/50/50A/60/60A SlimSCSI, make sure you have 
      PCMCIA Card & Socket Services installed BEFORE running Adaptec 
      EZ-SCSI.

   o  If you have an IBM ThinkPad 360Cs or an IBM ThinkPad 755, and are 
      using the Adaptec APA-1425/50/50A/60/60A SlimSCSI, you need to move the following 
      line to the last line inside your CONFIG.SYS file:

        DEVICE=C:\EZPLY\$ICPMDOS.SYS

      Note: If the directory for EZ-Play is different than the default, use
      that directory instead. The above line uses the standard directory as
      an example.

   o  If you have an APA-1425/50/50A/60/60A (SlimSCSI) in your system and are installing 
      ASPI2DOS.SYS manually,  you will need to add the following command
      line switch to ASPI2DOS.SYS in your CONFIG.SYS file:

        DEVICE = C:\SCSI\ASPI2DOS.SYS /D /PCMCIA /Z

   o  If you cannot suspend/resume properly on an AcerNote 735c, with an
      APA-1425/50/50A/60/60A (SlimSCSI), you're probably experiencing an I/O conflict
      between the APA-1425/50/50A/60/60A and your laptop.  The AcerNote uses port 35F for
      video control.  You'll need to manually exclude this I/O port.  With
      SystemSoft Card and Socket Services, you can do this by editing the
      CSALLOC.INI file and adding the line:

        ioexclude=35F
    
   o  If you are using the Gateway 2000 Colorbook laptop with an Adaptec
      APA-1425/50/50A/60/60A (SlimSCSI), ASPI2DOS.SYS may fail during driver installation.
      If you encounter this problem, you will need to run the CMOS setup utility
      and disable the "FastBoot" option.
   
   o  The following note only applies to users with SCAM capable SCSI devices. Please ignore
      it if you do not have such a device. 
      SCAM stands for "SCSI Configured AutoMagically."  With SCAM support, 
      a host adapter can determine which SCSI IDs are not in use, and assign
      a free ID to a SCAM capable SCSI device. 
      Normally SCAM is not enabled, and you need to set switches on the back of all of 
      your SCSI peripherals to assign them unique SCSI IDs.   
      You can enable SCAM support by adding /SCAM+ to your ASPI2DOS.SYS command line.

      For example:

        DEVICE = C:\SCSI\ASPI2DOS.SYS /D /SCAM+

      This will work with any AIC-6260/6360/6370 based SCSI host adapter 
      that does not have a BIOS enabled on the host adapter.  If the host 
      adapter has a BIOS, and it is enabled, the command line switch is 
      ignored.  If you have a SCAM capable BIOS (e.g. AHA-1530P), then you 
      can enable or disable SCAM support by running SCSISelect.

ASPI8DOS.SYS
------------

   ASPI8DOS.SYS is Adaptec's ASPI manager for AIC-7850/7855/7870 based 
   PCI SCSI host adapters.  Running Adaptec EZ-SCSI will automatically 
   detect which host adapter you have installed, which ASPI manager needs 
   to be loaded, and what the correct command line switches are.

   o  If you have an Adaptec PCI SCSI host adapter installed in your system,
      and you have EMM386.EXE loaded from MS-DOS versions up to 6.2, your
      system might hang if loading the ASPI manager after EMM386.EXE.  This 
      has been fixed in the EMM386.EXE that ships with MS-DOS 6.22 and 
      later.  If you experience this problem, you will either need to load 
      ASPI8DOS.SYS before EMM386.EXE, or upgrade to MS-DOS 6.22 or later.  
      If the ASPI manager detects a conflict, a message will be shown 
      explaining how to work around the problem.  Other ASPI modules 
      (e.g. ASPICD.SYS) can continue to be loaded high.

   o  There are several techniques for a driver to determine if its PCI SCSI
      host adapter is installed in your system.  ASPI8DOS.SYS will determine
      which is the best method, and has been written to work around the
      EMM386.EXE problems discussed above.  There are three command line
      switches you can use to force the ASPI manager to use a specific
      method.  These are:

        /MB - This command line switch will force the driver to use the
              PCI BIOS calls (INT 1Ah) to scan for PCI SCSI host 
              adapters.
        /M1 - This command line switch will force the driver to use the
              "Mechanism 1" method for scanning for PCI SCSI host 
              adapters.
        /M2 - This command line switch will force the driver to use the
              "Mechanism 2" method for scanning for PCI SCSI host 
              adapters.
              
      For example, if you want to force the ASPI manager to find your PCI 
      SCSI host adapter using PCI motherboard BIOS calls, your CONFIG.SYS 
      would be:

        DEVICE=C:\SCSI\ASPI8DOS.SYS /D /MB

      NOTE:  Most PCI systems do not support all three methods for scanning
             for PCI cards.  It is recommended that you let the ASPI manager 
             determine which method is suitable.

   o  If you would like ASPI8DOS.SYS NOT to reset the SCSI bus, during 
      driver initialization, you can use the /NORST command line switch.  
      For example:

        DEVICE=C:\SCSI\ASPI8DOS.SYS /D /NORST

      If you would like ASPI8DOS.SYS to always reset the SCSI bus, during
      driver initialization, you can use the /RESET command line switch.
      For example:

        DEVICE=C:\SCSI\ASPI8DOS.SYS /D /RESET

   o If there are more host adapters that ASPI8DOS can support, ASPI8DOS will display "Not enough 
     memory for all host adapters". In this case, the user should manually add more lines of 
     "DEVICE=ASPI8DOS.SYS" to CONFIG.SYS to support the extra host adapters. EZ-SCSI only installs  one entry in config.sys for ASPI8DOS.SYS.

MCAM18XX.SYS
------------

   MCAM18XX.SYS is Adaptec's ASPI manager for its AHA-2920/2920A PCI SCSI Host
   Adapters.  Running Adaptec EZ-SCSI will automatically detect which host
   adapter you have installed, which ASPI manager needs to be loaded, and
   what the correct command line switches are.

   o  The command line switches for MCAM18XX.SYS are currently not documented
      in our on-line "Device Driver Reference" Windows help file.  The
      following command line switches are supported:

        /u-     - Force Asynchronous Data Transfers on a Host Adapter.
        /norst  - Disables Hard Reset during initialization.
        /y      - Disables parity checking.
        /m1     - Force PCI bus scanning using the "Mechanism 1" method.
        /m2     - Force PCI bus scanning using the "Mechanism 2" method.
        /mb     - Force PCI bus scanning using INT 1A.
        /l      - Enable multiple LUN support

   o  If installing the AHA-2920/2920A under Windows 3.1/3.11, Adaptec EZ-SCSI
      will automatically install the AHA2920.386 and AXPT.386 device drivers.

      The following options are supported by AHA2920.386.  To enable an
      option, add the following to the [386Enh] section of your SYSTEM.INI
      file:

        AHA2920 = [/l-] [/u-] [/y]

        /l-      - Disables multiple LUN support.
        /u-      - Force Asynchronous Data Transfers on a Host Adapter.
        /y       - Disables parity checking.

      The following options are supported by AXPT.386.  To enable an option,
      add the following to the [386Enh] section of your SYSTEM.INI file:

        EZSCSI_OPTIONS = [/d]

        /d       - Displays version, adapter, and device information.


MA358.SYS
---------

   MA358.SYS is Adaptec's ASPI manager for its APA-358/358A parallel port 
   SCSI host adapters.  Running Adaptec EZ-SCSI will automatically detect 
   which host adapter you have installed, which ASPI manager needs to be 
   loaded, and what the correct command line switches are.

   o  MA358.SYS, by default, will automatically detect the type of parallel
      port you are using.  You can use the /Mnm switch to force a specific 
      mode, and to set the amount of time that the MiniSCSI "Fast" read and 
      write cycles are delayed (parallel ports on some computers require 
      delays).  You must specify values for both 'n' and 'm'.

      The 'n' specifies the amount of delay.  Allowable values for 'n' are 0
      through 7, with each number representing a 125-nanosecond (ns) 
      increment. A value of 7, for example, adds an 875 ns (7x125) delay to 
      the cycles.  The default of 0 specifies no delays.

      The 'm' parameter determines the mode.  The allowable values are shown 
      in the following table:

      Value of 'm'    Meaning
      ------------    ------------------------------------------------------
       0              Auto-detect mode (the default).  Automatically detects
                      the type of port and configures the APA-358/358A for
                      EPP if that port is detected to support EPP mode,
                      otherwise the port is set up as a standard parallel
                      port.
       2              Forces unidirectional mode.
       4              Forces bidirectional mode.
       8              Assumes EPP 8-bit bidirectional mode.  For this to
                      work, the parallel port must be set for EPP mode in
                      the CMOS setup program or by configuring jumper
                      settings on your EPP I/O card.  For instructions on
                      using the CMOS setup program, see your motherboard
                      documentation.  For instructions on configuring
                      jumpers on your EPP I/O card, see your EPP I/O card
                      documentation.

      For example, if your parallel port is configured for EPP mode, and you
      would like the default read/write delay, your CONFIG.SYS would contain 
      the following:
    
        DEVICE=C:\SCSI\MA358.SYS /m08
       
      If you change the MA358.SYS options in the config.sys file, turn the
      computer OFF and then ON again to have the changes take effect. (Do 
      not simply reboot the computer using Ctrl-Alt-Del.)

   o  If you have an original NEC Ultralite Versa laptop, and MA358.SYS is 
      unable to detect the APA-358/358A SCSI host adapter, you should use 
      the /m20 command line switch.  For example:

        DEVICE=C:\SCSI\MA358.SYS /m20

   o  If you are using the APA-358 with an NEC Versa E or Versa V system, 
      which uses the Western Digital Super I/O chip for FPP Parallel Ports 
      (Chip #WD76C30), you should use the MA358NEC.SYS ASPI Manager in your 
      CONFIG.SYS file instead of the standard MA358.SYS ASPI Manager.

   o  If you are using an IBM ThinkPad 720 series computer, you should use 
      the MA358IBM.SYS ASPI manager in your CONFIG.SYS file instead of the 
      standard MA358.SYS ASPI manager.

   o  When using the APA-358/358A, you should not configure your parallel 
      port for ECP mode.  Instead, you should configure the port for EPP 
      mode.

   o  MA358.SYS only supports one APA-358/358A in a system.

   o  If you are using the APA-358/358A, and you are backing up from a SCSI 
      disk drive to a SCSI tape drive, and you are using SMARTDRV, we 
      recommend that you disable SMARTDRV write caching.  Leaving write 
      caching enabled can cause the backup to fail.



=-=-=-=-=-=-=-=-=
HARD DISK SUPPORT
=-=-=-=-=-=-=-=-=

Windows 3.1/3.11 and DOS
------------------------

   DOS and Windows 3.1x include built-in support for SCSI hard drives if your
   new drive is under BIOS control (e.g. you booted from it).  Please refer
   to your host adapter documentation to learn more about whether or not
   your SCSI host adapter includes an on-board ROM BIOS.  In this case, you
   can follow these steps:

   1.)  Boot to DOS.
   2.)  Run FDISK to partition your new drive as you desire.
   3.)  Reboot your operating system.
   4.)  Run FORMAT on your newly created drive letter(s)

   If your new SCSI hard drive is not under BIOS control, you can follow
   these steps:

   1.)  Install Adaptec EZ-SCSI for DOS
          - Insert the Adaptec EZ-SCSI Lite Disk
          - Run DOSINST.BAT
   2.)  Reboot your system.
   3.)  From DOS, run AFDISK.EXE which is located in your
        Adaptec EZ-SCSI subdirectory (e.g. C:\SCSI).  
   4.)  Partition your new media as you desire.
   5.)  Reboot your operating system.
   6.)  At this point, your new drive is under ASPIDISK.SYS control
        (Adaptec's disk driver for DOS).
   7.)  Although optional, we recommend that you run DOS FORMAT on your
        new drive letter(s) so that the drive can be scanned for defects.


=-=-=-=-=-=-=-=-=-=-=-=
REMOVABLE MEDIA SUPPORT
=-=-=-=-=-=-=-=-=-=-=-=

Windows 3.1/3.11 and DOS
------------------------

   To prepare your removable media for use under Windows 3.1/3.11 and DOS,
   you can follow these steps.

   1.)  Install Adaptec EZ-SCSI for DOS
          - Insert the Adaptec EZ-SCSI Lite Disk
          - Run DOSINST.BAT
   2.)  Reboot your system.
   3.)  From DOS, run AFDISK.EXE which is located in your
        Adaptec EZ-SCSI subdirectory (e.g. C:\SCSI).  
   4.)  Partition your new media as you desire.
   5.)  Reboot your operating system.
   6.)  At this point, your new drive is under ASPIDISK.SYS control
        (Adaptec's disk driver for DOS).
   7.)  Although optional, we recommend that you run DOS FORMAT on your
        new drive letter(s) so that the drive can be scanned for defects.

   Below is additional information you may find useful:
 
   o  Adaptec EZ-SCSI supports both 512 byte/sector media and 1024 byte/
      sector media.

   o  If you would like to reserve multiple drive letters for your removable
      media, you can use the /r command line switch.  For example, if you
      would like ASPIDISK.SYS to reserve two drive letters for your removable
      media, you would have the following in your CONFIG.SYS:

         device=c:\scsi\aspidisk.sys /d /r2

   o  Support for the Panasonic PD drive is also included.  Note that you
      should leave this device jumpered in its default two LUN mode.


=-=-=-=-=-=-=-=
CD-ROM SUPPORT
=-=-=-=-=-=-=-=

Windows 95
----------

   Windows 95 includes built-in support for SCSI-2 CD-ROM drives and some
   SCSI-1 devices.  If your host adapter already has its miniport loaded,
   Windows 95 will automatically detect and support your SCSI CD-ROM drive.

   o  We recommend that you boot Windows 95 without a DOS CD-ROM device
      driver (e.g. ASPICD.SYS).  You can comment out such entries from your
      CONFIG.SYS and then reboot.  We have seen Windows 95 incorrectly create
      two drive letters for the same device when a DOS CD-ROM driver is
      resident.

Windows 3.1/3.11 and DOS
------------------------

   Adaptec's CD-ROM driver for DOS/Windows, ASPICD.SYS, has been written to
   support any SCSI-2 CD-ROM drive and most SCSI-1 CD-ROM drives.  Simply
   run Adaptec EZ-SCSI and the correct additions will be made to your
   CONFIG.SYS and AUTOEXEC.BAT.

   Adaptec EZ-SCSI has been tested with CD-ROM drives from the following
   vendors:

         AIWA
         Compaq
         Chinon
         Denon
         Goldstar
         Hitachi
         IBM
         LMS
         Matsushita
         NEC
         Panasonic
         Nakamichi
         Philips
         Pioneer
         Plasmon Data
         Plextor
         Ricoh
         Sanyo
         Sony
         TEAC
         Texel
         Toshiba
         Yamaha

   Below is additional information you may find useful:

   o  The following drives do not directly support Photo CD:

        Chinon         CDS 431
        Denon          DRD 253
        LMS (Philips)  CM 214
        NEC            CDR 72
        NEC            CDR 74   (NOTE: 74-1 and 84-1 do support single-
        NEC            CDR 84          session Photo CD)

      By adding /XAEMUL to the ASPICD.SYS command line, in your CONFIG.SYS,
      we will emulate support for single-session Photo CD on these drives.

   o  The following drives do not support parity:

        NEC CDR 38
        NEC CDR 55
        NEC CDR 72
        NEC CDR 73
        NEC CDR 74 (NOTE: 74-1 and 84-1 do support SCSI parity)
        NEC CDR 84
        NEC CDR 210 (NOTE: 210P does support parity)

      Please consult your host adapter documentation on how to disable parity
      support on your SCSI host adapter.

   o  The following jukebox CD-ROM drives are fully supported:

        Nakamichi MBR-7
        Pioneer   DRM 600
        Pioneer   DRM 604X
	Pioneer   DRM 624X

      A drive letter will be assigned for each CD.  

   o  Some older SCSI CD-ROM drives do not support synchronous negotiation
      properly.  If you encounter problems using your CD-ROM drive, try
      disabling synchronous negotiation.  Please refer to your host adapter
      documentation on how to do this.

o  In rare circumstances, you may encounter problems with Windows 3.x and 
      DOS reading your CD-ROM drive.
      For example, you change the contents of the CD-ROM drive, but when you run 
      DIR, the contents of the previous CD is displayed instead of the new CD's.
      Or you may see multiple drive letters assigned to your single CD-ROM drive. 
      One solution is to add the /NOLUN switch to the aspicd.sys line in config.sys.
      We have seen the former problem with the Sony 55s - an older double speed
      CD-ROM drive, and the latter problem with an older SCSI1 Panasonic drive.
      By adding the /NOLUN switch, you will however loose support
      for any CD Changers or PD drives that you also have connected to your PC.
      
      
