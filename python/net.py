#!/usr/bin/env python3
from socket import *
from time import ctime

host = ''
port = 10086
buffsize = 1024
addr = (host, port)

tcpsoc = socket(AF_INET, SOCK_STREAM)
tcpsoc.bind(addr)
tcpsoc.listen()

while True:
    print("waiting for connection...")
    tcpcli,addrcli = tcpsoc.accept()
    print("...connected from:%s" % addrcli)

    while True:
        data = tcpcli.recv(buffsize)
        if not data:
            break
        tcpcli.send(" [%s] %s" %(ctime(), data))
    tcpcli.close()
tcpsoc.close()