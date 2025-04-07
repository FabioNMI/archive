
                 SiS IDE Drivers Installation Utility
                 ====================================
---------------------------------------------------------------------
1. Under "IDE DEVICE DRIVER INSTALL UTILITY", user can install
   SiS IDE DOS,
   drivers directly from according "INSTALL DRIVER" menu.

2. Under "IDE DEVICE DRIVER INSTALL UTILITY", user can read
   installation procedures for
   SiS IDE Windows 95,
   SiS IDE Windows NT 3.5x,
   SiS IDE Windows NT 4.x,
   drivers from according "INSTALL DRIVER" menu.
---------------------------------------------------------------------
3. Hard Drives' default wait states are set by using Hard Drive
   internal information automatically. The recommended value table
   for different mode Hard Drives is as follow :

         Hard Disk Mode    4       3       2      1      0
         ==================================================
         Recovery Time     1       3       8      A      0
         Active Time       3       3       6      6      0
         ==================================================
         Note that the range for Recovery Time is 0-F
                         and for  Active  Time is 0-7.

   In config.sys file, users can use /A /R and /M parameters to set
   the wait states and IDE BUS MASTER CONFIGURATION SPACE BASE ADDRESS
   manually. For example:
        "DEVICE=C:\SISIDE\SISDR.SYS /A3456 /R6543 /M:4000"
         means active time for channel 0 master is 3*30ns
                               channel 0 slave  is 4*30ns
                               channel 1 master is 5*30ns
                               channel 1 slave  is 6*30ns

         recovery   time   for channel 0 master is 6*30ns
                               channel 0 slave  is 5*30ns
                               channel 1 master is 4*30ns
                               channel 1 slave  is 3*30ns

         and the CONFIGURATION SPACE BASE ADDRESS is 4000h.
-------------------------------------------------------------------------
Q & A :

1.      When your system can't successfully install Windows 98 with DMA
        mode driver in SiS 5513, or 5571.

Ans:    For compatible issue, please follow SiS IDE utility readme file
        in the 98UTY directory of this disk to install it.

2.      Does SIS IDE driver support for Windows 98 ?
Ans:    Yes, but SiS recommand to use Windows 98 default PIO/ DMA driver
        to get more function supported. 
        But it is suggested to use SiS IDE driver for SiS 5513, 5571, 5600A,
        and 5600B0.

3.      Under Windows 95, system will hang when accessing IDE CD-ROM 
        Driver motion happened, such as open "My Computer", CD-ROM 
        Autoplay ...... etc.

Ans:    When this situation happened, 
        SiS suggest remove IDE CD-ROM DOS Driver provided by device company.

        IDE CD-ROM DOS Driver Removing Procedure:

        Please remark or delete "mscdex.exe"  command in c:\autoexec.bat 
        and remark or delete IDE CD-ROM DOS Driver in c:\config.sys files,
              

4.      DOS Driver adjusts HD speed by parameter :
e.g:    You can write the following line in config.sys
                device=c:\siside\sisdr.sys /Rxxxx /Axxxx
        Where x could be 0 .. 9, A .. F for speed .
                R : Recovery time
                A : Active time    ( ref. above note 5 )

5.      After SiS IDE DOS driver installed. Some mode 4 hard disk will cause
        system hang at the IDE driver loading procedure when we reboot the
        system.

Ans:    Users can avoid this by downing the speed in Manual function as Q&A 4.
