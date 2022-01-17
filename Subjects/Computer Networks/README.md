# NESO ACADEMY:
**Basic Characteristics of Computer Network**
  1. Fault Tolerance(It's like returning from clge to home, even though one route is blocked, we will goto another route)
  2. Scalability(Even though its grows it need to provide good performance, thats what internet) 
  3. Quality of Service(QoS)(It needs to give priority to what type of data should give frst like phecall or mail :- phecall should give more preference)
  4. Security

**Network Protocols and Communication**
  1. Data Communcation: data transfer between 2 nodes(computers) through transmission medium(like cables)
  2. Data Flow: 
      (i)Simple :- Communication always unidirectional ( ---> or <---) eg: Keyboard
      (ii)Half Duplex :- Communication is in both directions but not at the same time(<---->)  eg: Walkie-Talkie
      (iii)Full Duplex :- Communication is in both directions simultaneously at same time eg: Telephone line
      
   NOTE:
     1. Message Delievery Options:
        (i) Unicast(1 - 1)
        (ii) Multicast(1 - set of receivers)
        (iii) Broadcast(1 - all the participants in the network)
  
     2. **Peer-to-Peer Network**
         Ports: How many devices it can connect
         (i) No centralized adminstration
         (ii)All peers are equal
         (iii)Not scalable
         
     3. **Client(many ppl) Server(1 server) Network (or) Request-Response model**
         (i) Centralized adminstration
         (ii)Scalable
         (iii))Server may be overloaded
   
**Various Components of Computer Network**
  1. Nodes(End and Intermediate)
  2. Media(Wired(guided) and Wireless(Unguided))
     (i) Wired Media(Data is converted into signals)
         1. Ethernet straight-through cable
         2. Ethernet crossover cable
         3. Fiber Optic cable(fast transmission)
         4. Coaxial cable(auido and video communication)
         5. USB(Universal Serial Bust)
         
    (ii) Wireless Media(Data is converted into waves)
         1. Infrared - short range(TV Remote control)
         2. Radio - More than Infrared(Wifi, Bluetooth)
         3. Microwaves - Long dist than above 2(Celluar System)
         4. Satellite - Ultimate Long range(GPS)
  3. Services
    
**Classifications of Computer Networks**
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
     
     NOTE: NEW TRENDS
     (i) Bring your Own Device - BYOP
     (ii)Online collaboration
     (iii)Cloud computing
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
   
   
   
# GATE OVERVIE CONCEPTS:
  
