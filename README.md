
# Computer Networking Protocols - Codes in C and C++

This repository consists of C and C++ programs for various computer networking protocols.


## Flow Control Protocols

Flow control is a speed matching mechanism used to regulate the flow of data between devices. It ensures smooth and efficient communication. It is a responsibility of the **data link layer** of the **TCP/IP protocol**.

Various Flow control Protocols include:
-

- Stop and Wait Protocol

Stop and Wait Protocol is used in noiseless channels. In this protocol the sender sends only one frame at a time and waits till it receives an acknowledgement from the receiver. Only after receiving the acknowledgement does the sender transmit another frame.

- Go-Back-N ARQ Protocol

Go-Back-N ARQ is a sliding window protocol. It allows multiple frames to be sent by the sender at a time.
In Go-Back-N ARQ, 'N' stands for the sender window size. Sender window size simply means how many frames can be sent at a time by the sender. So in case of Go-Back-3, the sender window size is 3. This means that the sender can send 3 frames at a time.
The reciver window size in this protocol is 1.

- Selective Repeat

This is also a sliding window protocol. Selective Repeat ARQ Protocol allows the sender to send multiple frames at the same time. At the same time, the receiver can selectively acknowledge and buffer out-of-order frames. 

Basically, if a frame is lost or damaged, the receiver sends a negative acknowledgment (NACK) to the sender. However, if the frame is correctly received, it sends back an acknowledgment (ACK). The sender would only resend the selected lost or damaged frames. This reduces unnecessary retransmissions and improves overall network efficiency. It is one of the most efficient flow control protocols available.

