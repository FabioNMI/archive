*****************************************************************************
*                                                                           *
*                DAVICOM PCI Fast Ethernet Adapter (DM9102)                 *
*                                                                           *
*                   Readme file for Drivers/Utilities                       *
*                                                                           *
*                       Release 1.09,    04/28/1999                         *
*                                                                           *
*****************************************************************************

********************************************
*    Diskette Version update history       *
********************************************
     Version    Release Date    Change Description
    ---------  --------------  --------------------
     V1.00      07/15/1998      First Release
     V1.01		08/07/1998      
     							1. NDIS2 
     								. Version change to V1.04.
     								. Add install directories:
     									. Lantasti
     									. Mslanman.os2
     									. Pcnfs
     							2. NDIS4 & NDIS3 version change to V2.25.
     								. Redefine force media type on the NWAY enable,
     								  in order to show Full_Duplex with the switch HUB.
     								. Change the WIN98 of installation file, 
     								  from NETDM.INF to NETDM9.INF.
     								  
     							3. New Drivers:
     								. WINNT50	- NDIS5 driver
     								. CLIENT32	- for DOS & WIN95 Client
     											  and NetWare 4.11 server.
     											  
	V1.02		08/26/1998		1. New Drivers:
									. SCO	- SCO UNIX 5.
									                
						        2. RPL Boot ROM Code  & DOS ODI version change to V1.01.
						        	. Fix NDIR, LISTDIR bug.
						        	
						        3. NETWARE directory expands to three directories:
						        	. Dosodi
						        	. Nw312
						        	. Nw410

								4. Change INF file to NETDM.INF in OSR2 directory.
									. Modify the parameter of driver to speed up.

	V1.03		10/14/1998		1. Update Drivers:
									. NDIS2 update to V1.05
										- Change the definition of forcing media type,
										  in order to detect full-duplex with switch hub.
									. Packet Driver update to V1.17
										- Change the definition of forcing media type,
										  in order to detect full-duplex with switch hub.
									. Update NDIS5 for WIN98 & NT5.0
										- Change driver name from DM9PCI.SYS to DM9PCI5.SYS.
										- Change NETDM9.INF to NET5DM.INF.
										- Change version to V0.01.
									. Update NDIS4 for OSR2 & NT4.0
										- Change version to V2.31.
										- Add ACPI option in netdm.inf(OSR2).
									. Update DOS ODI driver
										- Change version to V1.04.
										- Modified threshold size.
								2. Add Driver:
									. Nw50
										- ODI driver spec. 3.31.
										- V1.03.

	V1.04		12/04/1998		1. Update Drivers:
									. NDIS3 update to V2.26
										- Fix upload to Novell Server speed.
										- Add DM9PCI.DOS to WIN95.
									
									. NDIS4 update to V2.32
										- Fix upload to Novell server speed.
										- Add DM9PCI.DOS to OSR2.
									
									. NDIS5 update to V0.02
										- Fix upload to Novell server speed.
										- Add DM9PCI.DOS to WIN98.
								    . DOS ODI update to V1.05
								    	- Fix EMM386 bug.
								    . Client32 update to V2.00
								    	- Rename to DM9PCI.
								2. New Driver:
									. LINUX	- V0.9a.
									
								3. All Novell server drivers update to the spec.3.31 of 
								   ODI driver.

	V1.05		12/18/1998		1. Update Drivers:
									. PGSROM.EXE update to V1.05
										- Remove DM9102 Vendor/Device ID (1282/9102) checking.
                                    . Client32 update to V2.01
										- Remove the Custom Keyword "MEDIA_TYPE".
                               			- Added to support the Custom Keywords
                                 			"AUTOFULL", "AUTOHALF", "SPEED".
                               			- Modify to get the selected Media Type.
                                    
								2. New:
									. DM91X.EXE V2.00
										- Read/Modify/Save 
											- DM9102's Configuration Registers (CR).
											- PHY's registers.
											- Searial ROM.										
								
								3. OSR2 driectory move to \NDIS4\OSR2.
								
								4. C32DOS, C32W31& C32W95 directories move to Client32 directory.
								
								5. Added NET9102.INF to install WIN95 in root directory.

	V1.06	03/05/1999		
						1. Update Drivers:
							. NDIS5 update to V0.09 (WINNT50 & WIN98)
								- Add ACPI power manager command.
								- Default enable Link_Change & Magic_Packet wakeup events.
							. NDIS4 update to V2.36
								- Default enable Link_Change & Magic_Packet wakeup events.
							. NDIS3 update to V2.29
								- Default enable Link_Change & Magic_Packet wakeup events.
							. Client32 update to V2.03
							
							. DIAG9102 update to V1.12
							
							. PGSROM update to V1.06
								- Node address range limitation.
								- SROM.DAT on the server.
							. REG91X update to V2.02.

	V1.07	3/12/1999
				1. Update Drivers:
					. NDIS5 update to V0.12 (WINNT50 & WIN98)
					. NDIS4 update to V2.37
					. NDIS3 update to V2.30
						- Fix Wake up bug. 
						- Verify as follow, wakeup function are all pass.
							(1) WIN98 shutdown.
							(2) NT5.0 disable ACPI - Hibernate & Shutdown.
							(3) NT5.0 enable ACPI -  Standby, Hibernate & Shutdown.
					. PGSROM update to V1.07
						1.Added to compare the Programmed EEPROM
                       	  Content with the SROM.DAT File Content.
                          (If write SROM failure, try to program
                          EEPROM again; if failure again, Quit
                          the program and return the Write SROM
                          Error Code.)
                        2.Added to return the Write SROM Error Code.
                          5 : Write SROM Error Code
                       	3.Modify DM9102 SROM SubVendorID (0291h),
                          SubDeviceID (8212h) fields default values.
                          
					. RPL Boot ROM update to V1.02
                        1.Added PCI Data Structure into PCI
                          Expansion ROM Header to check DM9102
                          Vendor ID (1282h)/ Device ID (9102h).
                        2. Adding remote boot file & readme for WIndows & Netware.
                    . NDIS2 update to V1.06     
					
	V1.08	3/23/1999
				1. Update Drivers:
					. NDIS5 update to V0.13 (WINNT50 & WIN98)
					. NDIS4 update to V2.38
					. NDIS3 update to V2.31
						- Fix can't wakeup when shutdown after link fail.
						- Fix can't shutdown when no cable connection.
					. DOSODI update to V1.06
						- Add HW version detection.
					. Client32 update to V2.04
						- Add HW version detection.
					. NDIS2 update to V1.07
					
				2. Add Drivers:
					. Display LED on screen in the WIN98.
					. Directory: WIN98LED.
						- Display LAN LED on screen.
					
	V1.09	4/28/1999
				1. Update Drivers:
					. NDIS5 update to V0.14 (WINNT50 & WIN98)
						- Fix can't wakeup when received the boardcast of magic packet.
					. NDIS4 update to V2.39
						- Fix can't wakeup when received the boardcast of magic packet.
					. NDIS3 update to V2.32
						- Fix upload to server by NetBEUI.
					. LINUX update to V1.20.
					. Diagnostic update to V1.14
				2. Add utility:
					. Inslite - Display LED on the screen. Only use in the WIN9X.
											
********************************************
*    Driver Version and description       *
********************************************

	Driver Description                          Ver.      File Name
---------------------------------------------- --------  ---------------
 	Diagnostic Program                          V1.14     DIAG9102.EXE
 * 	Program 9346 Serial ROM                     V1.09     PGSROM.EXE
  	Read/Modify/Save Registers					V2.02	  REG91X.EXE
 * 	RPL Boot ROM Code                           V1.02     RBOOT.ROM
  	DOS ODI driver                              V1.06     DM9PCI.COM
   	ODI server driver                           V1.01     DM9PCI.LAN (Nw410)
 * 	NDIS 2 driver for DOS                       V1.07     DM9PCI.DOS
 * 	NDIS 2 driver for OS/2                      V1.06     DM9PCI.OS2
 * 	NDIS 3.0 driver for WIN95/NT 3.51           V2.32     DM9PCI.SYS
 *	NDIS 4.0 driver for OSR2/NT 4.0				V2.39     DM9PCI.SYS
   	Packet Driver for TCP/IP                    V1.17     DM9PCIPD.COM
 * 	NDIS5.0 driver for NT 5.0/WIN98			   	V0.14     DM9PCI5.SYS
  	ODI Client32 for NW50/NW411/DOS/WIN95/WIN31	V2.04     DM9PCI.LAN   
	SCO Unix 5 streams drvier                   V1.00a	  CUSTOM.DST
 	LINUX										V1.20	  dmfe.o
	    
    
		
******************************************************
*    Installation Notes                              *
******************************************************
1. Please reference to the readme in each subdirectory.

2. The SCO directory must be under root directory.

3. Install Nw312 refer to \NW312\NW312.TXT.

4. Change Windows installing item selection: (NDIS4\OSR2, WIN98)
	DAVICOM PCI Fast Ethernet Adapter (DM9102) - Don't check Sub System/Vendor ID.
	DAVICOM 9102 PCI Fast Ethernet Adapter - Must have correct Sub System/Vendor ID.
	
5. Installing OSR2 uses \NDIS\OSR2 directory if you need the driver of NDIS4.

******************************************************
*    Directory Description of Diskette Contents      *
******************************************************

README.TXT								; This file

NET9102.INF								; WIN95 installation file

- Bootrom									; Subdirectory for the RPL Boot ROM

- C32dos                                    ; Client32 for DOS client

- C32win31                                  ; Client32 for WIN31 client

- C32win95                                  ; Client32 for WIN95 client

- DOSODI

- Lantasti                                  ; Subdriectory for Lantastic with NDIS2

- MSLANMAN.DOS                             	; Subdirectory for LAN Manager with NDIS2

- MSLANMAN.OS2                              ; Subdirectory for LAN Manager with NDIS2

	
		                                                     
- NW312									 ; Subdirectory for NetWare 3.12 Server (Spec3.31)

- NW410									 ; Subdirectory for NetWare 4.10 Server (Spec3.31)
			
- NW411									 ; Client32 for Netware 4.11 Server (Spec3.31)

- NW50									 ; Clinet32 for Netware 5.0 server (Spec3.31)

- NDIS4
	- OSR2								 ; Subdirectory for WIN950B (OSR2)
						
- OS2									 ; Subdirectory for OS/2 WARP

- OSR2                                   ; Subdirectory for Windows 95 (950B) with NIDS4

- PACKETD       						 ; Subdirectory for Packet Driver

- Pcnfs									 ; Subdirectory for PC-NFS with NDIS2

- SCO									 ; Subdirectory for SCO UNIX 5

- UTILITY                                ; Subdirectory for utility tools
	- DIAG
		. CUSTOMER.DAT
		. DIAG9102.EXE
		. DM9102.DOC
		
	- PGSROM
        . PGSROM.EXE
        . PGSROM.TXT
        . SROM.DAT

    - REG91X
    	. REG91X.EXE
    	. REG91X.TXT
    	
- WFW31                                   ; Subdirectory for Windows For Workgroup 3.1

- WFW311                                  ; Subdirectory for Windows For Workgroup 3.11

- WIN95                                   ; Subdirectory for Windows 95 (950) with NDIS3

- WIN98                                   ; Subdirectory for Windows 98 with NDIS5

- WIN98LED								; Subdirectory for display LED on WIN98. 
	
- WINNT351                                ; Subdirectory for Windows NT3.51 with NDIS3

- WINNT40                                 ; Subdirectory for Windows NT4.0 with NDIS4

- WINNT50                                 ; Subdirectory for Windows NT 5.0 with NDIS5

    