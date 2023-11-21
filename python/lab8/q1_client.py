#!/usr/bin/python3
from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.connect(("127.0.0.1", 8888))

print("Input \"exit\" to quit")

while 1:
    msg = input("> ")
    s.send(msg.encode("UTF-8"))
    if msg == "exit":
        break
    rtn = s.recv(1024).decode("UTF-8")
    print(rtn)

s.close()
