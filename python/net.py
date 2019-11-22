import socket
s = socket.socket()

host  = socket.gethostname()
port = 2356
s.bind((host, port))
s.listen(10)

while True:
    c,addr = s.accept()
    print('get connection from', addr)
    c.send('thank you for connecting')
    c.close()