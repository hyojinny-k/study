#!/usr/bin/python3
from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("", 8888))
s.listen(5)
conn, addr = s.accept()
data = "tmp"

while data != "exit":
    data = conn.recv(1024).decode("UTF-8")
    if len(data) == 0:
        break
    print(addr, ":", data)
    conn.send(data.encode("UTF-8"))
conn.close()
