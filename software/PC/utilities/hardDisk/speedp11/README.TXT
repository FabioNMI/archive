                               HighPoint
                        Xstore Pro WINDOWS 95/98

                             Revision 1.10
                             (Oct 7, 1998)

#############################################################################

NOTE: 
    This Windows 95/98 driver dose not support CD-ROM Changers. If you have a
    ATAPI CD-ROM Changer installed in your system, please do not install
    this driver!. This driver supports several PCI Bus Master Controllers
    such as Intel, Sis, Ali, Via and others. 

1   INSTALLATION
    1.  Insert the floppy disk into drive A:.
    2.  Open "My Computer", double click "Drive A:".
    3.  Double click "Win95" or "Win98".
    4.  Double click the Setup program.
    5.  Then just follow the instructions to install the driver.

    IMPORTANT NOTE:
   
    We have found that the Windows 95 OSR2/Windows 98 version would fail to load the
    driver on some systems using Bus Master chipset after you install and
    restart the system. The following step could solve this problem if it
    happens:
    1.  Go to <MyComputer and double click Control Panel>
    2.  Double click System then go to Device Manger and View Devices by Type
    3.  Go to hard disk controllers
    4.  Double click  PCI Bus Master IDE Controller (Ultra DMA supported)
        (there should be a yellow mark besides this instance)
    5.  Click Resources and you should see a box near the bottom of the screen
        that says Set Configuration manaully.
    6.  Click on the Set Configuration manually and you will see a check next
        to Use automatic setting
    7.  Uncheck the box and when the system asks you to reboot click yes
    8.  After the system restarts the yellow mark should be gone 
    
2   DE-INSTALLATION
    1.  Insert the floppy disk into drive A:.
    2.  Open "My Computer", double click "Drive A:".
    3.  Double click "Win95" or "Win98".
    4.  Double click the Setup program.
    5.  Then just follow the instruction to de-install the driver.

3.  The ATAPI LS-120 deivce will be recognized as a removable device
    in retail Windows 95(4.00.95) and OSR1 Windows 95(4.00.95 A) after
    XStore Pro driver is installed.

4.  This driver might lock on certain motherboards. Please check with
    motherboard vendors first if you encounter problems. 
