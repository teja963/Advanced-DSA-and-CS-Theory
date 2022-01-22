# Geeks for Geeks
  <pre>
  <b>Socket</b>: Unique combination of IP address and port 
  </b>DNS</b>: It is basically a server translates (domain to ip)
  **Router**: Connects 2 or more ip networks or subnetworks
  **Hub**: Connectin multiple ethernets together
  **Bridge**: Interconnect two LAN's
  **ARP PROTOCOL**: Convert ip addr to Mac addr, Used by Datalink layer
  **URL and URI**: URL is a subset of URI, URL = (protocol + websitename + Top_Level_Domain + path)
 
  <b>What happens when we type/search on browser ?</b>
      
       Client(url)                                   Server side
          |                                            |
          |(Browser)                                   |
          |                                            |
         File (1. GET/HTTP/1.1                       Sent Response(1. HTTP/1.1  200 ok status                       
          |    2. Host www.google.com                  |           2. Content-type HTML
 (Browser)|    3. Some other info)                     |           3. Body of Page)
          |                                            |
         Binary - - - - - - - - - - - - - - - - - - - Router  
                   (Wireless or wired media)
      
   </pre> 
# Transmission mode in Computer Networks
  <pre>
    (i) Simple :- Communication always unidirectional ( ---> or <---) eg: Keyboard
   (ii) Half Duplex :- Communication is in both directions but not at the same time(<---->)  eg: Walkie-Talkie
  (iii) Full Duplex :- Communication is in both directions simultaneously at same time eg: Telephone line
  </pre>
# Unicast, Multicast, Boardcast  
  <pre>
   (i) Unicast(1 - 1)
  (ii) Multicast(1 - set of receivers)
 (iii) Broadcast(1 - all the participants in the network)
 
  **If Direct Broadcast Address of subnet is 201.15.16.31. Which of the following will be subnet mask ?**
	(A) 255.255.255.240
	(B) 255.255.255.192
	(C) 255.255.255.198
	(D) None Of the Above

	Answer: (D)
	Explanation: Last octet of given DBA is 0001 1111. So, in Subnet mask address all should be 1’s except last 5 digits, i.e., 255.255.255.224.

  **If subnet mask 255.255.255.224, which of the following will be Direct Broadcast address ?**
	(A) 202.15.19.127
	(B) 202.15.19.63
	(C) Both a and b
	(D) None of the Above

	Answer: (C)
	Explanation: Subnet mask is   255.255.255.1110 0000
	In DBA all host bits are 1.
	from option 202.15.19.011 11111 , this can be a DBA.
	202.15.19.001 11111 ,this can also be a DBA.
  </pre>
# Classifications of Computer Networks
  <pre>
  Most widely used models are Open Systems Interconnection and Department of Defense(TCP/IP)
  1. Local Area Network(LAN)
     LAN - Devices
      (i)Wired ( eg: Ethernet - Hub, Switch(Indermediate things)
      (ii)Wireless( eg: Wifi)
  2. Metropolitan Area Network(MAN)
     More than 2 LAN'S connected in particular area
     Devices: Switches/Hub
              Routers/Bridges
  3. Wide Area Network(WAN) - telecommunications networks(large area)
     More than 2 MAN'S connected
  
  **A host can acts as a Client when he is requesting information.**
  **A host can acts as a Server when he provides information.**
  **A host can also request and provide information, which is called Peer.** Not scalable and No centralization
  </pre>
# Layering in Networks
  1. OSI Reference Model(Not a protocol)
     Open System Interconnection - Vertical approach
     The purpose of the model is how to faciliate communication between systems(like windows to linux or any)
     It is never fully Implemented
     
     7 layers in OSI Reference model(order is imp)
	     **7. Application** 
	          Enables the user to access the network resources
	          Protocols:
	          1. Telnet : Used for managing files in the internet, Port num is 23
	          2. FTP    : FTP is not just a protocol but it is also a program, Port num is 20 for data, 21 for control
	            2 TCP connections used by FTP in parallel(data, control)
	            FTP need to keep track of state through the session
	            
	          3. TFTP   : If we know exactly and where to find(simplified version of FTP), Port num is 69
	            It used UDP as a Transport Layer Protocol
	          4. NFS    : Port num is 2049
	          5. SMTP   : Port num is 25
	             
	             GET ->----------<-
	             SMTP            POP/IMAP
	      Out gng mail services  Post Office protocol(used to retrive mails from server)
	(transfers from servers to   Internet Message Access Protocol
	  servers)
	                             
	             SMTP model is 2 types
	             (i)End-to-End method(Communicate btw 2 different organizations)
	             (ii)Store and Forward(Communicate within organizations)
	             
	             Client---->User_Agent------>queue----->MTA--
	                                                        |
	                                                        |TCP/IP Connection
	                                                        |
	                                                        |
	             Recevier<----User_Agent<------queue<-----MTA-- 
	             
	          6. DNS    : Port num is 53
	         **Why does DNS use UDP and not TCP ?**
	         UDP is much faster. TCP is slow and requires 3-way handshake. DNS server don't have to keep connections and these requests r fit into UDP segments.
	         
	          DNS Uses Cache to work efficiently, not using nslookup over and over again
	          DNS Spoofing is like finding flaws in DNS change the ip address redirect to malicious
	          **PREVENT FROM DNS SPOOFING**: DNS Security Extensions(DNSSEC)add an additional layer to prevent spoofing

	         
	     **6. Presentation**
	          Concered with syntax and semantics(mng) info which is exchanged
	          Services:
	          Translation, Encryption, Compression
	     **5. Session**
	          Maintains and synchronizes the interaction
	          Services:
	          Dialog Control, Synchronization
	     **4. Transport**(imp)
	          TCP and UDP	
	          Process to process delivery of entire message
	          Services:
	          Port addressing, Segmentation and Reassembly(spliting and combining data), Conntection and End-to-End flow control
	          
	          **TCP 3-Way Hand shake:**
	      Client |- -\SYN  | Server
	             |     \- -|(1. Listen)                SYN: Synchronize seq number
	             |        /|                           ACK: Acknowledge
	             |SYN + ACK|
(SYN recevied, After |_/       |
this step connection |         |
is established)
                   
                   
                 **TCP Implementation uses 4 timers:**
                 	          
	     **3. Network**
	          Deliver the data from original source to destination source
	          Services:
	          Logical Addressing, Routing(finding best route)
	     **2. Data Link**
	          Moving data/frames from 1 node to another node
	     **1. Physical**
	          Transmitting bits
	       
# NOTE:
  <pre>
       PDU                       UNITS
    1. Application               Messages
    2. Transport                 Segment
    3. Network                   Packets
    4. Physical                  Bits
    5. Data Link layer           Frames
    
    **Protocol Graph**:
    
    FTP,HTTP,SMTP,DNS   DNS,TFTP    ->Application
   |_ _ _ _ _ _ _ _ _| |_ _ _ _ |
         |                 |
         |                 |
        TCP               UDP       ->Transport
         |                 |
         |                 |
          \               /
           \             /
            \_ _ IP _ _ /           ->Internet
            /    |     \
          /      |      \
        /        |       \
      Internet   LAN    LAN's and WAN's  ->Network
      
  2. TCP/IP Model(It is a hierarchical protocol made up of interactive modules)
     It contains 4 layers - Horizontal approach
     **1. Application Layer([Presentation  + Session] included**
     **2. Transport Layer**
     **3. Internet Layer**(Connection less service)
     **4. Link Layer**
  </pre>
# http Non - Persistent & Persistent Connection
  <pre>
  **RTT**: Time travel to small packets from client to server back(= 2 * propagation delay)
  For connection it is sure that it initialize TCP connection
  So for 1 TCP connection = 1 RTT
  1 RTT for req and 1 RTT for response
  
  Non-Persistent connection:                       Persistent connection:(Modern browsers use this connection)
  1. without parallel                              1. pipelined
  2. with parallel                                 2. Non-pipelined
  </pre>
# Types of Network Topology (Layout)
  <pre>
   1. Bus
       Data is transmitted over common transmission medium
       No security
            A
            |      |      |
            |      |      |
            |      |      |    Terminator
      ----------------------------
                |      |
                |      |
                |      |
                       B
       
   2. Ring (Unidirectional)
       It is a BUS Topology in a closed loop, Peer-to-Peer LAN 
       Sending and receiving data takes place with the help of a Token(Token is circulated through out the network)
       No Security
       
   3. Star
       Every node is connected to a central node called "hub or switch". It is centralized
       
       
                     \     |      /
                      \    |     /
                       \   |    /
                        \  |   /
               _ _ _ _ _   Hub  _ _ _ _ _ 
                         /  |
                        /   |
                       /    |
                            |
                            
         Two or more stars can be connected through repeaters
   
   4. Mesh
       Each Node is directly connected to every other nodes in the network(Issues with broadcasting messages)
   5. Hybrid
       Combinations of 1 or more topologies
       
  </pre> 
# NOTE:
  <pre>
  Pairty bits/check bits used for error detection
  1. Tele-communication - Baud rate(speed)
  2. Loop back IP address btw 127.0.0.1 to 127.255.255.255
  3. If the system is used seperate protocols gateway is used
  4. https = http + cryptographic protocols
     http(state less protocol - server maintains no info abt past clients) - Works at Application Layer (doesn't require certification)
     https - Works at Transport Layer(require certificates)
  5. Isochronous - STAR-STOP mode or CHARACTER mode
  </pre> 
# cls 1:
  <pre>
     _ _ _ _ _ _ _ _ _                                          1. domain req need to reach Destination network
    |                 |                                         2. After this it need to reach host
    |Host_ _ _        |   _ _ _                                 3. Destination process
    |   |P1   |       |  | DNS |
    |   |     |       |  |_ _ _|(will return IP address to you) initally
    |   |_ _ _|       |
    |                 |
    |_ _ _ _ _ _ _ _ _| 
            |                                                     Google Networks
            |                                                 _ _ _ _ _ _ _ _ _
	    |				1		    |                 |
            |_ _ _ __ _ _ _ _ _ __  _ _	_ _ _ _ _ _ _ __ _ _|Host_ _ _        |
            						    |_2_|P1   |       |
							    |   |     |       |
							    |   |_ _ _|       |
							    |                 |
							    |_ _ _ _ _ _ _ _ _| 
         (domain name)	
 user-  www.google.com   , a service need to convert domain name into nums(which is IPaddress)
            
            |
            
    (32 bits)IP address (consits of 2 parts:- 
                       1. Network Id (NID)(8 bits = 256)  --|__ This type won't be sufficient for today so we will go for "CLASSFULL"
                       2. Host Id(HID))(24 bits = 16M)    --|
           Inorder to reach the process we need port num            
  
   **NOTE**:
      IP address representation in 3 ways:
      1. Decimal(very huge)
      2. Binary
      3. Dotted-Decimal-Representation: 32bits(4 parts- each having 8 bits) 
               
  **CLASSFULL**:
	 starting with 0	      In class A :  32 bits(choosing 1) - remaining (2^31 IP address possible)
	 
			 8NID             |      24HID
			0_ _ _ _ _ _ _ _ 
			  
			  Remaining 7(8-1) bits(128) in that
			 0 0 0 0 0 0 0 __  are not possible(bcz it is network ip address)
			 1 1 1 1 1 1 1 __ not possible bcz it is Limited board cast address 
			 so 128-2 = 126
			 Range:- [1,126]
			 
			 eg: NASA
	     
	 starting with 10	      In class B :  31 bits(choosing 1) - remaining (2^30 IP address possible)
	 
	 
			 16NID             |      16HID
			1_ 0_ _ _ _ _ _ _ 
					  
			   1 0 0 0 0 0 0 0 - 128
			   .
			   .                               128 + 63 = 191 
			   .
			   .
			   .
			       1 1 1 1 1 1 - 191 
					 
			 Range:- [128,191]
			 eg: IRCTC, BANK
	 
	 
	 
	 starting with 110	      In class C :  30 bits(choosing 1) - remaining (2^29 IP address possible)
	 
	               24NID(3 fixed)                |  8HID
	               
	               Range: [192,223]
	               eg: College
	               
	 
	 starting with 1110	      In class D :  29 bits(choosing 1) - remaining (2^28 IP address possible)
	              It doesn't have NID and HID(so no Board cast is possible)
	              Range: [224,239]
	              eg: Multicasting
	              
	 starting with 1111	      In class E :  29 bits(choosing 1) - remaining (2^28 IP address possible)
                      It is reserved for future use  
  
                      Reserved
                      eg: Military
                      
  </pre>
# cls 2:
   <pre>
    Sending packets(consists of [data|source address|destination] address) from 1 host to another is called casting. It is 2 types
     1. Unicast(1-1)         _ _ _ _ Limited
     2. Boardcast(1-many)---|_ _ _ _ 
                                     Directed
                             
         1. Limited: within the same network, 1 host want to send many hosts (by using limited if you send 1host it will reach to entire hosts by: [data|source code|255.255.255.255|]
          
         2. Directed: sending 1 packet to many hosts in diff network([data|source address|NID.255.255.255])
   </pre>
   
# cls 3:
   <pre>
   SubNeting: Dividing a big network into small network(4 steps required to reach process but adv is more
   Subnet Mask: It is a 32bit number
                No.of 1's represent : what is NID part and SID part
                No.of 0's represent : what is HID
                
          Using subnet mask we can find the where IP address network belongs to(SM & IP = NID)
          
          
        CIDR | subnet masking | wildcard mask | no.of ip address
    
    
    
    In a network if subnet size is different then it is called Variable Length Subnet Masking(VLSM)
     Given a subnet mask, no.of zeros represent the size of network 
   </pre> 

# cls 4:(Practice of subnets)
   <pre>
   0000 0000 - 0
   1000 0000 - 128
   1100 0000 - 192
   1110 0000 - 224
   1111 0000 - 240
   1111 1000 - 248
   1111 1100 - 252
   1111 1110 - 254
   1111 1111 - 255
   </pre>
   
   
   
# GATE OVERVIEW CONCEPTS:
  
