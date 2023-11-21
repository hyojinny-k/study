#!/usr/bin/python3
from socket import *
import time
import socket

def main():
    listen_sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    listen_sock.bind(('', 8080))
    listen_sock.listen(1)

    while 1:
        conn, addr = listen_sock.accept()
        data = conn.recv(1024)
        msg = "HTTP/1.1 200 OK\n\n<html><body>This time is {}</body></html>".format(time.ctime())
        conn.sendall(msg.encode("UTF-8"))
        conn.close()

main()

