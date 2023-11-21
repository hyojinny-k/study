#!/usr/bin/python3
from socket import *
import socket

def main():
    listen_sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    listen_sock.bind(('', 8080))
    listen_sock.listen(1)
    result = 0

    while 1:
        conn, addr = listen_sock.accept()
        data = conn.recv(1024).decode('utf-8')
        data_tmp = data.split(' ')[1].split('/')
        #print(data)

        n1 = int(data_tmp[1])
        n2 = int(data_tmp[3])
        op = data_tmp[2]

        if op == '+':
            result = n1 + n2
        elif op == '-':
            result = n1 - n2
        elif op == '*':
            result = n1 * n2
        elif op == '%':
            result = n1 // n2
        msg = "HTTP/1.1 200 OK\n\n" \
              "<html><head><link rel='shortcut icon' href='#'></head>" \
              "<body>Calculation Results: {}""</body></html>".format(result)
        conn.sendall(msg.encode("UTF-8"))
        conn.close()

main()

