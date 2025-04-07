
                 SiS IDE Drivers Installation Utility
                 ====================================
---------------------------------------------------------------------
1. Uninstall SiS IDE DOS driver if you want to install SiS IDE
   Netware driver.

---------------------------------------------------------------------
2. Under "IDE DEVICE DRIVER INSTALL UTILITY", user can install
   SiS IDE DOS,
   SiS IDE Windows 3.x,
   SiS IDE Windows for Workgroup 3.11,
   SiS IDE Netware 4.1
   drivers directly from according "INSTALL DRIVER" menu.

3. Under "IDE DEVICE DRIVER INSTALL UTILITY", user can read
   installation procedures for
   SiS IDE Windows 95,
   SiS IDE Windows NT 3.5x,
   SiS IDE Windows NT 4.x,
   SiS IDE OS2 Warp 3,
   SiS IDE Netware 3.x,
   drivers from according "INSTALL DRIVER" menu.
---------------------------------------------------------------------
4. Hard Drives' default wait states are set by using Hard Drive
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

1.      Under Windows 95, system will hang when accessing IDE CD-ROM 
        Driver motion happened, such as open "My Computer", CD-ROM 
        Autoplay ...... etc.

Ans:    When this situation happened, 
        SiS suggest remove IDE CD-ROM DOS Driver provided by device company.

        IDE CD-ROM DOS Driver Removing Procedure:

        Please remark or delete "mscdex.exe"  command in c:\autoexec.bat 
        and remark or delete IDE CD-ROM DOS Driver in c:\config.sys files,
              

2.      Novell Netware Server will hang when client is trying to login.
Ans:    Please remember to use Uninstall function to remove SiS IDE DOS Driver
        after SiS IDE Netware Driver installed.

3.      How to use 32-bit file access for Hard Disk and CD-ROM working at the
        same channel in WFW 3.11 environment ?
Ans:    It is a limitation of the system. You should either put the devices in
        different channel or turn the 32-bit file access off.

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
