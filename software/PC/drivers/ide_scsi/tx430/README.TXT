                                 Triones

                    Bus Master EIDE/ATAPI Device Driver
                           for Intel PIIX/PIIX3
                              Revision  3.50
                            (November 20, 1996)

#############################################################################
                      T A B L E  O F  C O N T E N T S
#############################################################################
1.  INTRODUCTION
    1.1 Overview
    1.2 Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Driver Files

2.  MS-DOS / WINDOWS
    2.1 Installation
    2.2 De-Installation
    2.3 Restrictions of Disk Driver and Fast Disk Driver
    2.4 Troubleshooting

3.  Windows NT3.5
    3.1 Installation
    3.2 De-Installation
    3.3 Troubleshooting

4.  Windows 95
    4.1 Installation
    4.2 De-Installation

5.  Novell 3.X & 4.X
    5.1 Installation
    5.2 Troubleshooting

6.  SCO UNIX
I.  SCO UNIX 3.2.x / SCO Open Desktop 3.x
    6.1 Installation
    6.2 De-Installation
    6.3 Adding Additional Hard Disk
    6.4 Adding CD-ROM
    6.5 Troubleshooting

II. SCO UNIX 5.0
    6.6 Installation
    6.7 De-Installation

7.  OS/2 2.0 and WARP 3.X
    7.1 Installation
    7.2 De-Installation
    7.3 Troubleshooting

8.  Seever Utility

#############################################################################
                       1.  I N T R O D U C T I O N
#############################################################################
1.1 Overview
    The PIIX/PIIX3 Bus Master EIDE/ATAPI Device Drivers created by
    TRIONES Technologies, Inc. has the following features:

    1.  Takes advantage of the PIIX/PIIX3 chipset bus mastering capability
        and support bus mastering IDE on both IDE hard disks and ATAPI CD-ROM
        drives. This greatly reduces the CPU utilization and increases the
        data transfer rate.
    2.  Supports advanced data transfer timing modes. The PIO mode can be up
        to mode 4, and the DMA mode can be up to multiple word mode 2.
    3.  Supports LBA mode and Multiple-Block (or Multiple-Sector) commands.

    This readme will describe the setup procedures for the PIIX/PIIX3 Bus
    Master Device Driver for each operating system. The PIIX/PIIX3 Bus Master
    Device Drivers can only be used on motherboards with the PIIX/PIIX3
    chipset and the system BIOS must properly initialize the PIIX/PIIX3
    chipset IDE interface for the Bus Master IDE operation. Do not use any
    other add-in IDE (PCI or ISA) card in the system.

1.2 Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Driver Files
    TRIDMA.SYS  --  The Triones PIIX/PIIX3 Bus Master EIDE Disk Driver for
                    MS-DOS.
    TRICD.SYS   --  The Triones PIIX/PIIX3 Bus Master ATAPI CD-ROM Driver for
                    MS-DOS.
    TRIINT13.386
    TRICTR.386  --  The Triones PIIX/PIIX3 Bus Master Fast Disk Driver for
                    Windows 3.1 and Windows for WorkGroup 3.11.
    SETUP.EXE
    SETUP.INF   --  The setup program.
    IDEATAPI.SYS--  The Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Device
                    Driver for Windows NT 3.5.
    OEMSETUP.INF--  The setup information file used by the Windows NT 3.5
                    setup.
    IDEATAPI.MPD--  The Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Device
                    Driver for Windows 95.
    IDEATAPI.INF--  The setup information file used by the Windows 95 setup.
    TRIN4X.DSK  --  The Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Device
                    Driver for NOVELL version 4.10.
    TRIN312.DSK --  The Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Device
                    Driver for NOVELL version 3.12.
    TRISCO.TAR  --  The Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Device
                    Driver for SCO UNIX.
    TRIOS2.ADD  --  The Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Device
                    Driver for OS/2
    SEEVER.EXE  --  A utility to see the driver version information.


#############################################################################
                     2.  M S - D O S  /  W I N D O W S
#############################################################################
2.1 INSTALLATION
    The setup program will copy files to the directory you indicate, and
    make changes to the AUTOEXEC.BAT and CONFIG.SYS to configure the drivers.
    If the fast disk driver is installed, it wiLl also make changes to
    SYSTEM.INI in the Windows directory.

    To run the setup program:
    1.  Change the current directory to a: or b:
    2.  Under DOS command line prompt, run the setup:
            setup <Enter>
    After entering the setup utility, just follow the instructions of the
    setup.

2.2 DE-INSTALLATION
    1.  To de-install the disk driver:
        Edit CONFIG.SYS to remark "DEVICE=C:\BMIDE\TRIDMA.SYS".
    2.  To de-install the CD-ROM driver:
        Edit CONFIG.SYS to remark "DEVICE=C:\BMIDE\TRICD.SYS ..." and also
        Edit AUTOEXEC.BAT to remark "C:\DOS\MSCDEX  /D:MSCD000".
    3.  To de-install the Fast Disk driver:
        Edit SYSTEM.INI and remark "DEVICE=C:\BMIDE\TRIINT13.386" and
        "DEVICE=C:\BMIDE\TRICTR.386",  and also set the values of
        "OverlappedIO" and "32BitDiskAccess" to OFF.  All these entries
        are under the "[386Enh]" section.
    Where the BMIDE is the directory you copied the files to.

2.3 RESTRICTIONS OF DISK DRIVER and FAST DISK DRIVER
    1.  If you want to install both of the DOS disk driver and the CD-ROM
        driver, you should setup the disk driver before the CD-ROM driver
        in the CONFIG.SYS.
    2.  The Fast Disk driver for Windows can only function if the DOS disk
        driver is loaded.

2.4 TROUBLESHOOTING
2.4.1 Overriding Drive Capabilities for the DOS Disk Driver
    If the driver does not work properly after the installation,  it could
    be that the device drives report wrong capabilities.  The driver provides
    parameters for the user to override the capabilities reported by the
    connected device drives.

    The user can append parameters with the following format
        [/V] [/drive [dma=dmamode|pio=piomode] [!lba] [!ms]]
    to the "device=..." statement in the CONFIG.SYS file.
    Where
    V       indicates to display verbose information, including device
            scanning progress and the chip set timing register values,
            and etc.
    drive   specifies which drive to override on.  It can be:
                PM  primary/master
                PS  primary/slave
                SM  secondary/master
                SS  secondary/slave
    dmamode specifies the overriding DMA mode. It can be:
                SW2 single word DMA mode 2
                MW1 multi-word DMA mode 1
                MW2 multi-word DMA mode 2
                NO  not use DMA operation. The PIO will be used.
    piomode specifies the overriding PIO mode. It can be:
                0   PIO mode 0
                1   PIO mode 1
                2   PIO mode 2
                3   PIO mode 3
                4   PIO mode 4
            If the pio_mode is specified, the driver will only use PIO
            operation on the corresponding drive.
    !lba    indicates not to use LBA mode.
    !ms     indicates not to use multi-sectors commands.

    For example:
        device=c:\bmide\tridma.sys /PS dma=SW2 !lba
    indicates that we will use single word DMA mode 2 and not use LBA mode
    on the slave drive of the primary IDE channel.

2.4.2 Overriding Drive Capabilities for the CD-ROM Driver
    If the driver does not work properly after the installation, it could
    be that the CD-ROM drives report wrong capabilities. The driver provides
    parameters for the user to override the capabilities reported by the
    connected drives.

    The user can append parameters with the following format
        [/drive dma=dmamode|pio=piomode]
    to the "device=..." statement in the CONFIG.SYS file.
    Where
    drive   specifies which drive to override on.  It can be:
                PM  primary/master
                PS  primary/slave
                SM  secondary/master
                SS  secondary/slave
    dmamode specifies the overriding DMA mode. It can be:
                SW2 single word DMA mode 2
                MW1 multi-word DMA mode 1
                MW2 multi-word DMA mode 2
                NO  not use DMA operation. The driver will use PIO on the
                corresponding CD-ROM drive.
    piomode specifies the overriding PIO mode. It can be:
                0   PIO mode 0
                1   PIO mode 1
                2   PIO mode 2
                3   PIO mode 3
                4   PIO mode 4
            If the pio_mode is specified, the driver will only use PIO
            operation on the corresponding drive.

    For example:
        device=c:\bmide\tricd.sys /SM dma=no
    indicates that we will not use DMA and only use PIO operation on the
    master drive of the secondary IDE channel.


#############################################################################
                      3.  W I N D O W S  N T 3 . 5
#############################################################################
3.1 INSTALLATION
    1.  From the Program Manager, double click on "Windows NT Setup" in the
        Main group.
    2.  Select "Options/Add/Remove SCSI Adapters..."
    3.  Click on Add.
    4.  The "Select SCSI Adapter Option" dialog will appear;
        select "Other (Requires a disk from a hardware manufacturer)"
        from the "Adapter:" list box.
    5.  Next, the "Insert Diskette" dialog box will appear; insert the
        Triones PIIX/PIIX3 Bus Master EIDE/ATAPI Driver disk into Drive A:
        and type in "a:\winnt35" and <Return>.
    6.  Next, the "Select OEM Option" dialog box will appear;  select
        "PIIX/PIIX3 Bus Master EIDE/ATAPI" and click "OK."
    7.  Next, the "Select SCSI Adapter Option" dialogbox will appear;
        click on the "Install" button in the dialog box. If installation
        is successful, the "SCSI Adapter Setup" dialog box will reappear,
        and "PIIX/PIIX3 Bus Master EIDE/ATAPI" will be listed. That means the
        driver is installed.
    8.  Reboot your system to load the driver.

3.2 DE-INSTALLATION
    If you want to de-install the Triones PIIX/PIIX3 Bus Master EIDE/ATAPI
    Driver, you should keep the EIDE/ATAPI environment the same as when you
    installed the driver. Otherwise, you may meet some problems.

    1.  From the Program Manager, double click on "Windows NT Setup" in the
        Main group.
    2.  Select "Options/Add/Remove SCSI Adapters...".
    3.  Select "PIIX/PIIX3 Bus Master EIDE/ATAPI" and then click on Remove.
    4.  Exit "Windows NT Setup" and reboot the system.

3.3 TROUBLESHOOTING
3.3.1. Overriding drive capabilities
    If the Windows NT 3.5 does not work properly after the installation,
    it could be that the device drives report wrong capabilities.  The
    driver provides 6 parameters for the user to override the capabilities
    reported by the connected device drives.

    1.  UseLbaMode:
    This is a double word parameter specifying if we want to use LBA mode on
    a particular disk drive. We only use the low word. We split the 16-bit
    low word into 4 4-bit fields,  each corresponding to one possible
    connected disk drive:
    15              12 11               8 7             4 3              0
    +-----------------+------------------+---------------+----------------+
    | Secondary/Slave | Secondary/Master | Primary/Slave | Primary/Master |
    +-----------------+------------------+---------------+----------------+
    If a field is set to non-zero, then we are going to use LBA mode on the
    corresponding disk drive. The default value is 0xF.

    2.  UseMultiBlock:
    This is a double word parameter specifying if we want to use multiple
    block commands on a particular disk drive. We only use the low word.
    We split the 16-bit low word into 4 4-bit fields, each corresponding
    to one possible connected disk drive:
    15             12 11               8 7             4 3              0
    +-----------------+------------------+---------------+----------------+
    | Secondary/Slave | Secondary/Master | Primary/Slave | Primary/Master |
    +-----------------+------------------+---------------+----------------+
    If a field is set to non-zero, then we are going to use multiple block
    command on the corresponding disk drive. The default value is 0xF.

    3.  PrimaryMasterMode:
    4.  PrimarySlaveMode:
    5.  SecondaryMasterMode:
    6.  SecondarySlaveMode:
    These are double word parameters. We can use them to override DMA/PIO
    timing modes for the connected drives. Some drives may have firmware
    bugs causing them to report the wrong ATA DMA/PIO timing mode to the
    driver. Most notable are the multitude of drives on the market which
    claim to support PIO Mode 2 when in fact, they really are Mode 0 or
    Mode 1 drives.  Incorrect ATA DMA/PIO timing modes may cause system
    boot failure or data corruption. Therefore, the driver includes a
    facility whereby the user may override the vendor-specified ATA timing
    mode.

    The possible parameter values are:
        0x00    Use DMA with Single-Word DMA mode 0
        0x01    Use DMA with Single-Word DMA mode 1
        0x02    Use DMA with Single-Word DMA mode 2
        0x03    Use DMA with Multi-Word DMA mode 1
        0x04    Use DMA with Multi-Word DMA mode 2
        0xf0    Use PIO with PIO mode 0
        0xf1    Use PIO with PIO mode 1
        0xf2    Use PIO with PIO mode 2
        0xf3    Use PIO with PIO mode 3
        0xf4    Use PIO with PIO mode 4
        0xf5    Use PIO with PIO mode 5
        0xff    Use PIO with driver-decided default PIO mode
        0xffffffff
                Default value, the driver will decide what operation
                (DMA/PIO) and what mode to use by itself.

    To set the parameters:
    1)  From the Program Manager, select File/Run and type in "REGEDT32".
    2)  In the HKEY_LOCAL_MACHINE subwindow, open the
        SYSTEM/CurrentControlSet/Services/IDEAtapi/Parameters then
    3)  Double click on the parameter name you want to change,  and make
        your change. Be sure to click on the Radix/Hexdecimal button before
        clicking OK.
    4)  Reboot your system.


#############################################################################
                          4.  W I N D O W S  9 5
#############################################################################
NOTE: 
    This Windows 95 driver dose not support CD-ROM Changers. If you have a
    ATAPI CD-ROM Changer installed in your system, please do not install
    this driver!

4.1 INSTALLATION
4.1.1   INSTALLATION BY SETUP
    1.  Insert the floppy disk into drive A:.
    2.  Open "My Computer", double click "Drive A:".
    3.  Double click "Win95".
    4.  Double click the Setup program.
    5.  Then just follow the instruction.
    
4.1.2   MANUAL INSTALLATION
    1.  Close any running applications.

    2.  Remove references to installed real-mode, IDE device drivers in the
        AUTOEXEC.BAT and CONFIG.SYS files, especially any drivers that
        control ATAPI CD-ROM and special IDE features.

    3.  Remove references to the default installed IDE device drivers.
        That is the user should remove all the instances under the hard disk
        controllers record in the device manager. The following indicates
        how to do that on a PIIX/PIIX3 motherboard.

        A.  Open the Control Panel folder.

        B.  Invoke the System applet.

        C.  Click on the Device Manager option.

        D.  Click on the View Devices by Type button.
            A list of the system devices connected to the system
            will be displayed.

        E.  Click on the Hard disk controllers record. There could be three
            cases or more:
            For case 1, there should be three instances listed:
            * Intel PIIX PCI IDE Controller (Bus Mastering not supported)
            * Primary IDE controller (dual FIFO)
            * Secondary IDE controller (dual FIFO)
            Goto step F for case 1.

            For case 2, there should be two instances listed:
            * Standard ESDI/IDE Controller
            * Standard ESDI/IDE Controller
            Goto G for case 2.

            For case 3, there should be two instances listed:
            * Primary IDE controller (single FIFO)
            * Standard Dual PCI IDE controller 
            Goto step H for case 3.
            (case 3 only happens on 82430HX motherboards)

            For any other cases, try to remove all the instances under the 
            "hard disk controllers" record by clicking an instance first and
            then clicking Remove button to remove it. After you get rid of 
            every instance, goto I.

        F.  Remove the Intel PIIX PCI IDE Controller's listing (case 1).
            1.  Select the Intel PIIX PCI IDE Controller.
            2.  Click on the Remove option.
            3.  Select OK when prompted to remove this controller.
            4.  Goto step I.

        G.  Remove the Standard ESDI/IDE Controller listings (case 2).
            1.  Remove the Secondary Controller's listing.
            a.  Select the Second instance of the Standard ESDI/IDE
                Controller.
            b.  Click on the Remove option.
            c.  Select Yes when prompted to remove this controller.

            2.  Remove the Primary Controller's listing.
            a.  Select the remaining instance of the Standard ESDI/IDE
                Controller.
            b.  Click on the Remove option.
            c.  Select Yes when prompted to remove this controller.

            3.  Goto I.

        H.  Remove the Standard Dual PCI IDE controller listing (case 3).
            1.  Select the Standard Dual PCI IDE controller
            2.  Click on the Remove option.
            3.  Select OK when prompted to remove this controller.

        I.  Select Yes when prompted to re-start Windows 95*.
        J.  Windows 95* will re-start.

    4.  Install the Bus Master EIDE/ATAPI driver when prompted to do so.
        A.  Windows 95* will report that an Intel PIIX PCI IDE Controller
            or a Standard ESDI/IDE Controller has been detected in the
            system. Select Driver from disk provided by hardware manufacturer.

        B.  Insert the floppy disk containing the driver file (IDEATAPI.MPD)
            and installation file (IDEATAPI.INF) into the system.

        C.  Type in \WIN95 and choose OK to load the driver from the A:\WIN95

        D.  Windows 95* will display a Select Device window. Choose OK.
            Note:
            *  If Windows 95* reported that an Intel PIIX PCI IDE Controller
            has been detected, the selected device type should be the
            Intel PIIX/PIIX3 Bus Master IDE Controllers.
            *  If Windows 95* reported that a Standard ESDI/IDE Controller
            has been detected, the selected device type should be the
            Intel PIIX/PIIX3 Bus Master IDE Controller.

        E.  When prompted to re-insert the floppy containing the
            IDEATAPI.MPD file, choose OK again.
            Note:
            *  Windows 95* may not be able to process the .INF file and .MPD
            file the first time, choose OK again if this happens.

        F.  Select Yes when prompted to re-start Windows 95*.

        G.  Windows 95* will report that the system settings have changed.
            Select Yes when prompted to re-start Windows 95*.

    The IDEATAPI.MPD driver will be installed and used as long as the
    PIIX/PIIX3 IDE interface is enabled. After installation, the IDEATAPI.MPD
    file is stored in the c:\<Windows 95* directory>\System\IOSubSys
    directory.

    The IDEATAPI.INF information on the install floppy is integrated into
    the Windows 95* device database for automatic support of the Intel
    PIIX/PIIX3 Bus Master IDE Controller and is stored in the
    c:\<Windows 95* directory>\INF directory as one of the files named
    OEM<x>.INF (name varies depending on system.)

4.2 DE-INSTALLATION
4.2.1   DE-INSTALLATION BY SETUP
    1.  Insert the floppy disk into drive A:.
    2.  Open "My Computer", double click "Drive A:".
    3.  Double click "Win95".
    4.  Double click the Setup program.
    5.  Then just follow the instruction.

4.2.2   MANUAL DE-INSTALLATION (1)
    This procedure allows one to de-install the use of the Intel
    PIIX/PIIX3 Bus Master EIDE/ATAPI device driver and restore the default
    Windows 95* device driver for IDE support.

    1.  Close any running applications.

    2.  Un-install the Bus Master IDE driver.
        A.  Delete the associated .INF file.
            1)  Go to the INF directory.
                a.  Invoke the MS-DOS* Prompt applet.
                b.  Type "cd C:\<Windows 95 directory>\INF."
            2)  Determine which .INF file to delete. The .INF file for
                the Bus Master IDE driver is located in one of the files
                named OEM<x>.INF. There may be one or more of these
                OEM<x>.INF files loaded on the system. To determine the
                correct one to delete, perform a file compare between each
                of the OEM<x>.INF files and the IDEATAPI.INF file located on
                the install floppy. Other devices may have an OEM<x>.INF file
                associated with them, so it is important to select the
                correct one.
            3)  Delete the correct OEM<x>.INF file.

        B.  Delete the associated driver file.
            1)  Go to the IOSUBSYS directory.
                a.  Invoke the MS-DOS Prompt applet.
                b.  Type "cd C:\<Windows 95 directory>\SYSTEM\IOSUBSYS
            2)  Delete the driver binary file IDEATAPI.MPD.

        C.  Open the Control Panel folder.

        D.  Invoke the System applet.

        E.  Click on the Device Manager tab.

        F.  Select the View Devices by Type option. A list of the devices
            connected to the system will be displayed.

        G.  Click on the Hard Disk Controllers record. There could be two
            cases.
            For case 1, there should be three instances listed.
            *  Intel PIIX/PIIX3 Bus Master IDE Controllers
            *  Primary IDE controller
            *  Secondary IDE controller
            Go to step H for case 1.

            For case 2, there should be two instances listed:
            * Intel PIIX/PIIX3 Bus Master IDE Controller
            * Intel PIIX/PIIX3 Bus Master IDE Controller
            Go to step I for case 2.

        H.  Remove the Intel PIIX/PIIX3 Bus Master IDE Controllers listing
            (case 1).
            1)  Select the Intel PIIX/PIIX3 Bus Master IDE Controllers
                listing.
            2)  Click on the Remove button.
            3)  Select OK when prompted to remove this controller.
            4)  Go to step J.

        I.  Remove the Intel PIIX/PIIX3 Bus Master IDE Controller listings
            (case 2).
            1)  Remove the Secondary Controller's listing.
                a.  Select the second instance of Intel PIIX/PIIX3 Bus
                    Master IDE Controller from the listing.
                b.  Click on the Remove button.
                c.  Select OK when prompted to remove this controller.

            2)  Remove the Primary Controller's listing.
                a.  Select the remaining instance from the listing.
                b.  Click on the Remove button.
                c.  Select OK when prompted to remove this controller.

        J.  Select Yes when prompted to re-start Windows 95; Windows 95 will
            re-start.

    3.  Install the default Windows 95 drivers when prompted to do so.
        A.  Windows 95 will report that the Intel PIIX PCI IDE Controller
            (Bus mastering not supported) or Standard Dual PCI IDE Controller
            or Standard ESDI/IDE Controller has been deteced. Select the
            Windows default driver for installation.

        B.  Select Yes when prompted to re-start Windows 95.


4.2.3   MANUAL DE-INSTALLATION (2)
    You can also try another way to change back to the Windows 95* default
    driver for only the case 2 above:

    1.  Open the Control Panel folder.

    2.  Invoke the System applet.

    3.  Click on the Device Manager option.

    4.  Click on the View Devices by Type option.
        A list of the system devices connected to the system
        will be displayed.

    5.  Click on the Hard disk controllers record.
        There should be two instances listed:
        * Intel PIIX/PIIX3 Bus Master IDE Controller
        * Intel PIIX/PIIX3 Bus Master IDE Controller

    6.  For each instance:
        o   Double click on the Intel PIIX/PIIX3 Bus Master IDE Controller.
        o   Click on the Driver.
        o   Click on the Change Driver.
        o   Select the default driver to change back to.

    7.  Restart Windows 95* when prompted to do so.

    NOTE: for case 1, you cannot use this method to do the de-installation!


#############################################################################
                         5.  N O V E L L  3.X & 4.X
#############################################################################
5.1 INSTALLATION
    1.  Copy the driver TRIN4X.DSK or TRIN312.DSK to the subdirectory which
        holds the file SERVER.EXE.
    2.  Boot up the file server.
    3.  On the system console and on the command prompt state,  type in:
        load TRIN4X.DSK  <Enter>
        or
        load TRIN312.DSK <Enter>

    You can also include the above command line into the start up file
    STARTUP.NCF to load the driver automatically.

    For disk operation or CD-ROM operation, please refer to the corresponding
    NOVELL system user manual.  NOVELL has a command "cd help" which describe
    all features for CD-ROM.

5.2 TROUBLESHOOTING
5.2.1 Overriding Drive Capabilities
    If the NOVELL does not work properly after the installation, it could be
    that the device drives report wrong capabilities. The user can use
    parameters to override the capabilities reported by the connected device
    drives.

    The user can append parameters with the following format
        [/V] [/drive [dma=dmamode|pio=piomode] [!lba] [!ms]]
    to "load  TRINxxx".
    Where
    V       indicates to display verbose information.
    drive   specifies which drive to override on. It can be:
                PM  primary/master
                PS  primary/slave
                SM  secondary/master
                SS  secondary/slave
    dmamode specifies the overriding DMA mode. It can be:
                SW2 single word DMA mode 2
                MW1 multi-word DMA mode 1
                MW2 multi-word DMA mode 2
                NO  not use DMA operation. The PIO will be used.
    piomode specifies the overriding PIO mode. It can be:
                0   PIO mode 0
                1   PIO mode 1
                2   PIO mode 2
                3   PIO mode 3
                4   PIO mode 4
            If the pio_mode is specified, the driver will only use PIO
            operation on the corresponding drive.
    !lba    indicates not to use LBA mode.
    !ms     indicates not to use multi-sectors commands.


#############################################################################
                            6.  S C O  U N I X
#############################################################################
I.  SCO UNIX 3.2.x / SCO Open Desktop 3.x

6.1 INSTALLATION
    1.  Install SCO UNIX 3.2.x or SCO Open Desktop 3.x using the default
        SCO IDE driver.
    2.  Reboot your SCO UNIX system.
    3.  Insert Triones supplied diskette into the 3.5inch floppy drive of
        your system. Use doscp command to copy the file TRISCO.TAR to your
        /tmp directory.
        For example, if you are using floppy drive A, type:
            doscp  a:/scounix/trisco.tar /tmp/trisco.tar
    4.  From root directory, type the following commands:
            mkdir  /inst
            cd  /inst
            tar  xvf  /tmp/trisco.tar  .
        (NOTE: there is a period at the end of the last command.)
    5.  Now, insert a blank diskette into the floppy drive A and type:
            tar  cvf  /dev/<your floppy drive A device name>  .
        (NOTE: there is a period at the end of the last command.)
        Your floppy drive A device name could be:
            rfd096ds15      5.25    DSHD
            rfd0135ds18     3.5     DSHD
            rfd048ds9       5.25    DSDD
            rfd0135ds9      3.5     DSDD
        Now you have already made an installation diskette for the device
        driver. Start the installation by typing:
            custom
    6.  Select the "Install" operation and then follow the guided steps.
        When prompted "Do you want to set the device configuration (y/n)",
        answer "n".
    7.  Reboot your SCO UNIX system.

6.2 DE-INSTALLATION
    1.  Start the de-installation by typing:
            custom
    2.  Select the "remove" operation to start the de-installation.
    3.  Then select the All EIDE Bus Master Device Driver Package. The
        driver will be removed from the SCO UNIX System disk and the
        original IDE driver will be restored.
    4.  Reboot your SCO UNIX system and now the TRISCO Device Driver has
        been removed.

6.3 ADDING ADDITIONAL HARD DISK
    1.  First type command:
            mkdev  hd  unit  SCSI-adapter  0  trisco
        where, the "unit" can be 0 (indicates the master drive) or 1 (
        indicates the slave drive); The "adapter" can be 0 (indicates the
        primary channel) or 1 (indicates the secondary channel). For example,
        to configure the master driver on the secondary IDE channel type:
            mkdev hd 0 SCSI-1  0  trisco
    2.  Then just follow the instructions of this command to update SCSI
        configuration and build a new kernel. Reboot your SCO UNIX system.

6.4 ADDING CD-ROM
    1.  First type command:
            mkdev  cdrom
        Then follow the instructions of this command. Answer the prefix name
        by eide, the Adapter by 0 (primary channel) or 1 (secondary channel).
        The unit by 0 (master derive) or 1 (slave drive). The lun by 0.
        If you have not installed the high-sierra file system, answer "y" to
        install it. At last, answer "y" to build a new kernel.

    2.  Reboot your SCO UNIX system.
    3.  To mount a CD-ROM, type:
            mount  -r -f  HS, lower  /dev/cdnumber /<install node>
        where "number" is the CD-ROM device number which can be 0, 1,...,
        depending on the order of the CD-ROM installation, and <install node>
        is a NULL directory name which you can create by command "mkdir".
    4.  Now, you can operate the CD-ROM through the "install node" directory.

6.5 TROUBLESHOOTING
6.5.1 Overriding Drive Capabilities
    If the SCO UNIX system does not work properly after the installation,
    it could be that the device drives report wrong capabilities. The user
    can chose parameters to override the capabilities reported by the
    connected device drives.

    1.  Insert the installation diskette in the floppy drive A,  and type
            custom
    2.  Select the "install" operation and EIDE Device Driver For Intel
        PIIX/PIIX3 to start the process. When prompted "Do you want to set
        the device configuration (y/n)",  answer "y",  then you can set the
        parameters for the driver.
    3.  After you finish, reboot your SCO UNIX system.


II. SCO UNIX 5.0

6.6 INSTALLATION
    1)  Install SCO UNIX 5.0 using the default SCO IDE driver.
    2)  Reboot your SCO UNIX system.
    3)  Insert Triones supplied diskette into the 3.5inch floppy drive of
        your system. Use doscp command to copy the file TRISCO5.TAR to your
        /tmp directory.
        For example, if you are using floppy drive A, type:
            doscp  a:/scounix/trisco5.tar /tmp/trisco5.tar
    4)  From root directory, type the following commands:
            mkdir  /inst
            cd  /inst
            tar  xvf  /tmp/trisco5.tar  .
        (NOTE: there is a period at the end of the last command.)
    5)  Install the driver by typing:
            ./install
    6)  Follow the steps and procedures (for control parameter configuration)
    7)  Reboot your SCO UNIX system.

6.7 DE-INSTALLATION
    1)  Change the directory to /inst.
    2)  Remove the driver by typing:
            ./remove


#############################################################################
                      7.  O S / 2  2.0  and  W A R P  3.X
#############################################################################
7.1 INSTALLATION
    1.  Copy TRIOS2.ADD from the floppy diskette to your hard disk under
        the OS2 directory (i.e., C:\OS2).
    2.  Edit C:\CONFIG.SYS  to  replace
            BASEDEV=IBM1S506.ADD
            with
            BASEDEV=TRIOS2.ADD
    3.  Reboot the system.

7.2 DE-INSTALLATION
    1.  Edit C:\CONFIG.SYS  and change
            BASEDEV=TRIOS2.ADD
            back to
            BASEDEV=IBM1S506.ADD
    2.  Reboot the system.

7.3 TROUBLESHOOTING
7.3.1 Overriding Drive Capabilities
    If the OS/2 system does not work properly after the installation,
    it could be that the device drives report wrong capabilities. The user
    can use parameters to override the capabilities reported by the
    connected device drives.

    The user can append parameters with the following format
        [/V] [/drive [dma=dmamode|pio=piomode] [!lba] [!ms]]
    to "BASEDEV=TRIOS2.ADD"
    Where
    V       indicates to display verbose information.
    drive   specifies which drive to override on.  It can be:
                PM  primary/master
                PS  primary/slave
                SM  secondary/master
                SS  secondary/slave
    dmamode specifies the overriding DMA mode. It can be:
                SW2 single word DMA mode 2
                MW1 multi-word DMA mode 1
                MW2 multi-word DMA mode 2
                NO  not use DMA operation. The PIO will be used.
    piomode specifies the overriding PIO mode. It can be:
                0   PIO mode 0
                1   PIO mode 1
                2   PIO mode 2
                3   PIO mode 3
                4   PIO mode 4
            If the pio_mode is specified, the driver will only use PIO
            operation on the corresponding drive.
    !lba    indicates not to use LBA mode.
    !ms     indicates not to use multi-sectors commands.


#############################################################################
                       8.  S E E V E R  U T I L I T Y
#############################################################################
    SEEVER.EXE is a utility that will display the build information for all
    PIIX/PIIX3 device drivers. To use this utility type SEEVER and the file
    name.  You will see information about the device driver and when it was
    created.  The purpose for this utility is to keep track of the different
    versions  of the device drivers that might be released in the future.


#############################################################################
#############################################################################
COPYRIGHT:
    Copyright (c) Triones Technologies, Inc.  1994-1996, All rights reserved.
    No part of this publication may be reproduced, stored in a retrieval
    system, or transmitted in any form or by any means, electronic,
    mechanical, photocopying, recording or otherwise, without the prior
    written consent of Triones Technologies, Inc. Fremont, CA. 94539

LIMITATION OF LIABILITY:
    IN NO EVENT WILL TRIONES BE LIABLE FOR DIRECT, INDIRECT, SPECIAL,
    INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY
    TO USE THIS PRODUCT OR DOCUMENTATION, EVEN IF ADVISED OF THE POSSIBILITY
    OF SUCH DAMAGES. IN PARTICULAR, TRIONES SHALL NOT HAVE LIABILITY FOR ANY
    HARDWARE, SOFTWARE, OR DATA STORED USED WITH THE PRODUCT, INCLUDING THE
    COSTS OF REPAIRING, REPLACING, OR RECOVERING SUCH HARDWARE, OR DATA.

TRADEMARKS:
    OS/2 is a registered trademark of International Business Machines
    Corporation.
    MS-DOS, Windows, MS, Windows NT3.5, Windows 95, Windows for WorkGroups
    311 are registered trademarks of Microsoft Corporation.
    NOVELL 3.x, NOVELL 4.x are registered trademarks of NOVELL, Inc.
    SCO UNIX is a registered trademark of UNIX systems Laboratory, Inc.

CHANGES:
    The material in this manual is for information only and is subject to
    change without notice. TRIONES reserves the right to make changes in
    the product design without reservation and without notification to its
    users.

