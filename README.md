# tiny server collection

+ C++.

+ Python.

## cautious

when bind ip, be cautious! if you bind ip to different ips of your machine's network card, then the server can only be accessed by that ip.

for example: a machine with ip 192.168.0.2

if you bind it with 127.0.0.1, you cannot use 192.168.0.2 to access the server.

if you bind it with 192.168.0.2, you cannot use 127.0.0.1 to access the server.

However, if you bind it with 0.0.0.0, you can then use 192.168.0.2 and 127.0.0.1 to access the server.  
0.0.0.0 is a special ip address that receive rquest from all network card.