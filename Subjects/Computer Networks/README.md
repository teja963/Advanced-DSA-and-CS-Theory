# Geeks for Geeks
  <pre>
  <b>Socket</b>: Unique combination of IP address and port 
  <b>DNS</b>: It is basically a server translates (domain to ip)
  <b>Router</b>: Connects 2 or more ip networks or subnetworks (It is gateway)
              Consists of
              1. Network
              2. Data link
              3. physical
  <b>Switch</b>: Consists of 
              1. Data link
              2. Physical
  <b>Hub</b>: Connection of multiple ethernets together
  <b>Bridge</b>: Interconnect two LAN's(data link layer device)
  <b>ARP</b>: Convert ip addr to Mac addr, Used by Datalink layer
  <b>URL and URI</b>: URL is a subset of URI, URL = (protocol + websitename + Top_Level_Domain + path)
  </pre>
  
  
  <b>What happens when we type/search on browser ?</b>
  <pre>
      Works on http protocol
      
       Client(url)                                   Server side
          |                                            |
          |(Browser)                                   |
          |                                            |
         File (1. GET/HTTP/1.1                       Sent Response(1. HTTP/1.1  200 Ok status                       
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
 
	<b>If Direct Broadcast Address of subnet is 201.15.16.31. Which of the following will be subnet mask ?</b>
	(A) 255.255.255.240
	(B) 255.255.255.192
	(C) 255.255.255.198
	(D) None Of the Above

	Answer: (D)
	Explanation: Last octet of given DBA is 0001 1111. So, in Subnet mask address all should be 1’s except last 5 digits, i.e., 255.255.255.224.

	<b>If subnet mask 255.255.255.224, which of the following will be Direct Broadcast address ?</b>
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
  
  <b>A host can acts as a Client when he is requesting information.</b>
  <b>A host can acts as a Server when he provides information.</b>
  <b>A host can also request and provide information(No need of server), which is called Peer.  Not scalable and No centralization</b>
    if 1 peer makes a req, it is possible that multiple peers have copy of that req obj. Now prob is how to get the ip address of all. So It is decided y Architecture of P2P
  
  <b>THREE SUCH ARCHITECTURES PRESENT</b>:
  <b><i> 1. Centralized Directory</i></b>
     1 main server - Contains all details abt requirements and ip address
     Peer - Every peer need to go through server for details
  
  <b>2. Query Flooding</b> - It used Distributed systems
  
              _ _ _ _ _ _ _ _ _
             |         |       | 
          _ _|_ _  _ _ |_ _ _ _|_ _ 
        |         |        |       |
       Peer1    Peer2    Peer3   Peer4
       
       <b>Gnutella was the frst decentralized Peer-to-Peer Network</b>
       kaZaA technology is such example that makes use of Napster and Gnutella 
  
  <b>3. Exploiting Heterogeneity</b> 
       It like divide and conquer 
       Many Peer connect to super Node
       All super nodes connect to each other
    
  </pre>
# Layering in Networks
  <pre>
  <p>
  1. OSI Reference Model
     Open System Interconnection - Vertical approach
     The purpose of the model is how to faciliate communication between systems(like windows to linux or any)
     It is never fully Implemented
     
     7 layers in OSI Reference model(order is imp)
	     <b>7. Application</b> (It can send any size of data to TCP, no limit)
	          Enables the user to access the network resources
	          Protocols:
	          <b>1. Telnet</b>: Used for managing files in the internet, Port num is 23
	          <b>2. FTP</b>   : FTP is not just a protocol but it is also a program, Port num is 20 for data connection, 21 for control connection
	            2 TCP connections used by FTP in parallel(data, control)
	            FTP need to keep track of state through the session(past clients info)
	            Type of band used is Out of Band
	            
	          <b>3. TFTP</b>   : If we know exactly and where to find(simplified version of FTP), Port num is 69
	                      It used UDP as a Transport Layer Protocol
	          4. NFS    : Port num is 2049
	          5. SMTP   : Port num is 25, It uses Out of Band
	             
	             All FTP, HTTP(In Band), SMTP Uses TCP as a underlying protocol
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
	                                                        |TCP Connection
	                                                        |
	                                                        |
	             Recevier<----User_Agent<------queue<-----MTA-- 
	             
	          6. DNS    : Port num is 53
	          
	         <b>Why does DNS use UDP and not TCP ?</b>
       	          UDP is much faster. TCP is slow and requires 3-way handshake. DNS server don't have to keep connections and these requests r fit into UDP segments.
	          DNS Uses Cache to work efficiently, not using nslookup over and over again
	          DNS Spoofing is like finding flaws in DNS change the ip address redirect to malicious
	          <b>PREVENT FROM DNS SPOOFING</b>: DNS Security Extensions(DNSSEC)add an additional layer to prevent spoofing

	         
	     <b>6. Presentation</b>
	          Concered with syntax and semantics(mng) info which is exchanged
	          Services:
	          Translation, Encryption, Compression
	     <b>5. Session</b>
	          Maintains and synchronizes the interaction
	          Services:
	          Dialog Control, Synchronization
	     <b>4. Transport</b>(imp)
	          TCP and UDP	
	          Process to process delivery of entire message
	          Services:
	          Port addressing, Segmentation and Reassembly(spliting and combining data), Conntection and End-to-End flow control
	          
	          <b>TCP 3-Way Hand shake:</b>
	      Client |- -\SYN  | Server
	             |     \- -|(1. Listen)                SYN: Synchronize seq number(syn + 1 = ack, correction is : ack = syn + payload_length + 1)
	             |        /|                           ACK: Acknowledge
	             |SYN + ACK|                           payload for initialization step is 0
(SYN recevied, After |_/       |
this step connection |-        |
is established)      | \       |
                     |   ACK   |
                           \
                   for 1st packet we have TCP layer
                   for 2nd packet(ack) we have both TCP and APPLICATION LAYER
                   
                 <b>TCP Implementation uses 4 timers:</b>
                 1. ReTransmission Timer:
                    To retransmit lost segments, TCP uses (RTO)- Round-Trip Time(RTT)
                    
                 <b>RTT 3 types</b>
                 (i)Measured RTT(RTTm): Time req for the segement to reach the destination and be acknowledged
                 (ii)Smoothed RTT(RTTs): It is weighted avg of RTT
                 	After frst measurement -> RTTs = RTTm
                 	After each measurement -> RTTs = (1-t)*RTTs + t*RTTm
                 	<b>Note</b>: Default value is 1/8(not given)
                 (iii)Deviated RTT(RTTd): Most implementations don't use RTT alone so RTT derivated is also calculated to findout RTO
                       After frst measurement -> RTTd = RTTm/2
                       After each measurement -> RTTd = (1-k)*RTTd + k*(RTTm - RTTs)
                       **Note**: Default value is 1/4(not given)
                       
                 2. Persistent Timer:(Imp)
                    To deal with 0 window size deadlock situation, TCP uses this timer(It start when size is 0). When this timer goes off, the sending tcp sends a special segment called a probe(contains 1 byte of new data has a seq num, but it seq num is never acknowledged. The probe causes the receiving TCP to resend the acknowledged which was lost
                    
                 3. Keep Alive Timer:
                    Prevent a long idle connection between 2 TCP's. The time out is usally 2 hrs after client response at all the time. No response after 2 hrs it sends a probe segment. It send 10 probes each of which 75sec apart, then it terminates.
                 
                 4. Time wait Timer:
                    The timer starts after sending the last Ack for 2nd FIN and closing the connection.
                    
                  <b>TCP Connection Termination</b>:
                    The common way of terminating a TCP connection is using a TCP's headers FIN flag(1 side termination)
                    RST Flag used for both sides termination
                    PSH Flag: 
                    	Generally Transport layer waits some time for the application layer to send data of max size, to reduce the packets
                    	numbers, this process can't be implemented in chat systems, so at that time we use PSH Flag. Data is delivered in sequence.
                    	eg: infinite loop break
                    	
                    URG Flag:
                    	It is used for sending the details frst compared to other flags, simply priority. Data is delivered out of sequence
                    
                  <b>WrapAround Concept</b>: 
                  When sequence numbers(TCP header's contains 2^32 = 4gb) are over, it resue the same seq numbers. seq numbers are created while intiall connection
                  
                  WrapAround Time depends on the seq numbers bandwidth (tot seq nums / Bandwidth)
                  
                  
                  <b>User Datagram Protocol</b>:
                   UDP is more efficient in terms of latency(measure of delay) and bandwidth
                   UDP header is 8 bytes fixed and simple header, while for TCP it may vary from 20 to 60 bytes
                   Unlike TCP, the checksum calculation is not mandatory in UDP. <b>UDP depends on IP and ICMP for reporting.</b>
                   UDP is stateless, connectionless, unreliable and message oriented protocol, useful for Boardcast and Unidrectional communication		
                   No fields are there in UDP to control flow or Congestion(A state occurs in the network layer when the message traffic is so heavy)
                   
                   <b>Congestion policy in TCP</b>:(Imp)
                     1. Slow Start Phase: exponential increment(After every RTT the congestion window size incr exponentailly)
                     2. Congestion Avoidance Phase: additive increment
                     3. Congestion Detection Phase: multiplicative decrement
                     
                     ReTransmission can occur in one of 2 cases
                     (i) When the RTO Timer Times Out
                    (ii) When 3 duplicate ACK's are received
                    
                    Congestion Control Technqiues:
                    1. Open loop(prevent congestion before it happens)
                    2. Closed loop(
                   <b>Leaky Bucket Algorithm</b>:
                    Formula: 
                     M*s = C + p*s
                     
                     
                     
                     
                         
	     <b>3. Network</b>
	          Deliver the data from original source to destination source(Here it will done fragmentation)
	          Services:
	          Logical Addressing, Routing(finding best route)
	          
	          They are 2 types of network transmission techniques
	          1. Circuit Switch:- Single path is designates for transmission of data(received in order)
	          2. Packet Switch:- Multiple Paths to reach destination(received out of order)
	          	
	          	Further divided into <b>Virtual circuits and Datagram</b>
	          	<b>IPv4 is a connectionless protocol</b> used for packet-switched networks(eg: ethernet)
	          	
	          Two key network-layer functions
	          <b>(i) Forwarding</b> - move packets from router's i/p to appropriate router o/p
	          <b>(ii)Routing</b> - route taken by packet from source to destination
	     
	     <b>2. Data Link</b>
	          Moving data/frames from 1 node to another node
	          Ethernet is most widely used LAN technology. It operates in 2 layers of the OSI Model(physical and Data link). In order to handle collision the access control mechnaism used in Ethernet is CSMA/CD
	          Manchester encoding technique is used in ethernet
	        
	     	  
	     	  Frames have headers that contain info such as error-checking codes
	     	  
	     	  The main functions of this layer (i)Logical link Control (ii)Multiple Access Control
	     	  1. Logicallink layer is responsible for reliable transmission of msg over transmission channel like <b>framing, error control and flow control</b>
	     	  2. Multiple access control - is like multiple incmng which is unclear
	     	     (i)Random Access Protocols - all stations has same superiority that is no station has more priority
	     	     (ii)Controlled Access Protocols - data is sent to the stations which is approved by all other stations
	     	     (iii)Channelization Protocols - available bandwidth of the link is shared in time, frequency and code to multiple stations to access channel simultanenously
	     	     
	     	                                         _ FDMA
	     	     (i)Deterministic/Fixed Partioning -| 
	     	                                         - TDMA
	     	                                          
	     	                                          _ Pure Aloha(18%)
	     	                                _ ALOHA -|_ Slotted Aloha(36%)
	     	     (ii)Dynamic/Random access-|_ 
	     	                                  CSMA(Carrier Sense Multiple Access)/CD(Collision detection: Transmission Time >= 2Propagation Time)-(> Aloha types efficiency)
			 	                                |  1. Sense the channnel
			 	                                |  2. if(idle) - analog process
			 	                                |       transmit (or) transmit untill the probability p
			 	                                |  3. if(!idle)
			 	                                |       (a) wait for random amount of time - Non persistent
			 	                                |       (b) wait untill the channel become idle - 1 - persistent
			 	                                |       (c) wait for the probability (p - persistent)
	     	                                    |_ _
	     	                                    |     MACA(Multiple Access Collision Avoidance)
	     	                                    |                         _ Data Send Control Frame
	     	                                    |_ _ MACAW(For Wireless)-|_ RRTS(Request Request To Send)
	     	                                                                
	     	                               
	     	                               BEB(Binary Exponential BackOff)
	     	                                  
	     	     (iii)Reservation
	     	  
	     	  Can we apply CSMA/CD(Half duplex) to wireless LAN?
	     	  CD:
	     	  Hidden terminal problem: Unable to locate the collision problem
	     	  Exposed terminal problem: There is no collision for the transmission
	     	  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
			 |   Wireless| CSMA/CD | CSMA/CA | MACA  |
			 |- - - - - -|- - - - -|- - - - -|- - - -|
			 |    HTP    |    No   |  Yes    | Yes   |
			 |    ETP    |    No   |  No     | Yes   |
	         |_ _ _ _ _ _| _ _ _ _ |_ _ _ _ _| _ _ _ |
	          
	     	  So Mac protocol : CSMA/CA(Collision avoidance)
	     	  There are 2 frames Data Frame(actual data), Control frame(RTS(Request To Send), CTS(Conform To Send))
	     	  
	     	  <b>To form an etherchannel, all ports should have</b>
	     	  (i)same duplex
	     	  (ii)same speed
	     	  (iii)Same VLAN configuration
	     	  (iv)switch port modes should be the same
	     	  
	     	  To form etherchannel there r 2 protocols, port aggregation protocol and link aggregation control protocol
	     	  
	     	  When we r sending frames of variable size, the problem is we need to define the end of the frame and begining of the frame
	     	  To overcome this problem, we r using
	     	  <b>(a) Framing             (b)Addressing                (c)Error Control</b>
	     	   <b>byte stuffing              Ip address + Mac Addr         Error Detection -Parity
	     	                                                                               - Check Sum
	     	                                                                               - Cyclic Redundancy check</b>
	     	                                                                               message = binary_number
	     	                                                                               generator = polynomial
	     	                                                                               (m + r)mod G(x) = FCS(Frame check sequence) 
	     	   <b>bit stuffing                                             Error Correction</b>
	     	      point to point is byte-oriented protocol                  (n)bit code word = m + r
	     	  High-Levek Data Link control(HDLC) is a bit oriented          code rate m/n
	     	   protocol                                                     for noisy channel it is 1/2
	     	                                                                for noiseless channel it is appox 1
	     	                                                                for 'd bit' error detection we need d + 1
	     	                                                                           error correction we need 2d + 1
	     	                                                                <b>m + r + 1 <= 2^r</b>
	     	                                                                <b>for calculating r value we will use hamming technique</b>
	     	                                                                leave pow(2) positions and may assume even parity rule for filling 
	     	                                                                If we getting bursting errors then do <b>Low Density Parity Check</b>
	     	                                                                In this redundancy will be in suffix first m next r
	     	                                                                 
	     	   
	     	  
	     	 
	     	  
	     	  <b>Circuit Switching in Computer Network</b> Recording of packet is never possible
	     	  Telephone system network is one of the example of circuit switching
	     	  Multiplexing multiple signals into a single carrier
	     	  (i)Time Division Multiplexing(divide into frames used for long distance communication links also known as <b>digital circuit switched)</b>
	     	  (ii)Frequency division multiplexing(divide into multiple bands which is independent eg: optical fiber) 
	     	  
	     	  Formulas in Circuit Switching:(It is more reliable)
	     	  <b>
	     	  Transmission rate = Link Rate or Bit rate / no. of slots = R/h bps (amount of data sent in sec)
	          Transmission time = size of file / transmission rate = x / (R/h) = (x*h)/R second
	          Total time to send packet to destination =Transmission time + circuit setup time 
	     	  </b>
	     	  
	     	  Modes of packet switching(It is less reliable)
	     	  (i)Connection-oriented Packet Switching(Virtual Circuit)
	     	  (ii)Connectionless Packet Switching(Datagram)
	     	  
	     <b>1. Physical</b>
	          Transmitting bits
  </p>
  </pre>
# NOTE:
  <pre>
  <p>
       PDU                       UNITS
    1. Application               Messages
    2. Transport                 Segment
    3. Network                   Packets(Datagram)
    4. Data Link layer           Frames
    5. Physical                  Bits
    
    <b>Protocol Graph</b>:
    
    FTP,HTTP,SMTP,DNS   DNS,TFTP,NTP,NNP    ->Application
   |_ _ _ _ _ _ _ _ _| |_ _ _ _ _ _ _ _|
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
     <b>1. Application Layer([Presentation  + Session] included</b>
     <b>2. Transport Layer</b>
     <b>3. Internet Layer</b>(Connection less service)
     <b>4. Link Layer</b>
     	
     
  3. TCP Header - Diagram
  </p>
  </pre>
# http Non - Persistent & Persistent Connection
  <pre>
  <p>
  <b>RTT</b>: Time travel to small packets from client to server back(= 2 * propagation delay)
  For connection it is sure that it initialize TCP connection
  So for 1 TCP connection = 1 RTT(Round Trip Time)
  HTTP request message: 1 RTT for req and 1 RTT for response
  So non-persistent HTTP response time = 2 * RTT + file transmission time
  
  Non-Persistent connection:(1:1)                  Persistent connection:(m: 1)
  Single object is sent over TCP connection        multiple objects can be sent over single TCP connection
  1. without parallel                              1. pipelined
  2. with parallel                                 2. Non-pipelined
  
  HTTP response status codes:
  200 ok - request successed
  301    - Moved permanently
  400    - Bad request
  404    - Not found
  505    - HTTP Version not supported
  
  HTTP Methods and action
  (i)Head - Requests info about a document but not the document itself
  (ii)POST - Sends some information from the client ot server
  (iii)PUT - Sends a document from the server to the client
  (iv)TRACE - Echoes the incoming request
  
  </p>
  </pre>
# Types of Network Topology (Layout)
  <pre>
  <p>
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
   </p> 
  </pre> 
# NOTE:
  <pre>
  <p>
  Parity bits/check bits used for error detection
  1. Tele-communication - Baud rate(speed)
  2. Loop back IP address btw 127.0.0.1 to 127.255.255.255
  3. If the system is used seperate protocols gateway is used
  4. https = http + cryptographic protocols
     http(state less protocol - server doesn't maintains info abt past clients) - Works at Application Layer (doesn't require certification)
     By using cookies(collecting user searching info data in simple terms) we can make http(stateless to) stateform(https)
     https - Works at Transport Layer(require certificates)
  5. Isochronous - STAR-STOP mode or CHARACTER mode
  6. TCP RESET (RST) - Branching to frequently used subroutines
  7. Multiplexing and Demultiplexing definitions
  8. Packets of the same session may be routed through diff paths is both TCP and UDP
     With the help of TCP window -> Flow control
     With the help of congestion windows -> Congestion control
  9. Uploading from input
     POST method:
     URL method:
     	uses GET method(limitations of size 256,)
 10. Caching mechanism can't be appiled for dynamic sites only for static sites
     Proxy server(acts as both client and server - webcaching reduce response time for client req)
 11. Interface - connection between host and physical link 
  </p>
  </pre> 
# cls A:
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
  
   <b>NOTE</b>:
      IP address representation in 3 ways:
      1. Decimal(very huge)
      2. Binary
      3. Dotted-Decimal-Representation: 32bits(4 parts- each having 8 bits) 
               
  <b>CLASSFULL</b>:
	 starting with 0	      In class A :  32 bits(choosing 1) - remaining (2^31 IP address possible)
	 
			  	7NID             |      24HID
	frst bit is fixed 0 _ _ _ _ _ _ _ 
			
				2^7 - 2(NID) 		2^24 - 2(HID)  
			 
			 Remaining 7(8-1) bits(128) in that
			 0 0 0 0 0 0 0 __  are not possible(bcz it is network ip address)
			 1 1 1 1 1 1 1 __ not possible bcz it is Limited board cast address 
			 so 128-2 = 126
			 Range:- [1,126]
			 eg: NASA
	     
	 starting with 10	      In class B :  31 bits(choosing 1) - remaining (2^30 IP address possible)
	 
	 
			 	14NID     |      16HID
	frst 2 bits fixed: 1 0 _ _ _ _ _ _ 
					  
			   
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
	              It doesn't have NID and HID(so no Board cast is possible)Multicast address
	              It doesn't have any subnet mask
	              Range: [224,239]
	              It is reserver for Military purposes
	              
	 starting with 1111	      In class E :  29 bits(choosing 1) - remaining (2^28 IP address possible)
                      It is reserved for future use  
  
  </pre>
# cls B:
   <pre>
    Sending packets(consists of [data|source address|destination] address) from 1 host to another is called casting. It is 2 types
     1. Unicast(1-1)         _ _ _ _ Limited
     2. Boardcast(1-many)---|_ _ _ _ 
                                     Directed
                             
         1. Limited: within the same network, 1 host want to send many hosts (by using limited if you send 1host it will reach to entire hosts by: [data|source code|255.255.255.255|]
          
         2. Directed: sending 1 packet to many hosts in diff network([data|source address|NID.255.255.255])
   </pre>
   
# cls C:
   <pre>
   SubNeting: Dividing a big network into small network(4 steps required to reach process but adv is more
   Subnet Mask: It is a 32bit number
                No.of 1's represent : what is NID part and SID part
                No.of 0's represent : what is HID
                
          Using subnet mask we can find the where IP address network belongs to(SM & IP = NID)
          
          
        CIDR(Class less Inter domain Routing) | subnet masking | wildcard mask | no.of ip address
    
    
    
   In a network if subnet size is different then it is called Variable Length Subnet Masking(VLSM)
     Given a subnet mask, no.of zeros represent the size of network 
     
   There are some points which should be kept in mind while supernetting: 
	All the Networks should be contiguous. 
	The block size of every network should be equal and must be in form of 2^n. 
	First Network id should be exactly divisible by whole size of supernet.(When a binary number is divisible by 2^n , then last n bits are equal to 0) 
   </pre> 

# cls D:(Practice of subnets)
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
	1. Number of subnets : Given bits for mask – No. of bits in default mask
	2. Subnet address : AND result of subnet mask and the given IP address
	3. Broadcast address : By putting the host bits as 1 and retaining the network bits as in the IP address
	4. Number of hosts per subnet : 2^(32 – Given bits for mask) – 2
	5. First Host ID : Subnet address + 1 (adding one to the binary representation of the subnet address)
	6. Last Host ID : Subnet address + Number of Hosts
	7. How to calculate IP address subent info ?
		NID: floor(Host address / Subnet no.of hosts) * Subnet no.of hosts
		BID: (Host ID + Subnet no.of hosts - 1)
		First Host: NID + 1
		Last Host: BID - 1
  		Tip: Based on Network prefix subnet no.of hosts depends
  		eg: 192.168.1.65/28   - 2 ^ (32-28) = subnet no.of hosts
