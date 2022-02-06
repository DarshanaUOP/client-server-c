#this is my makefie

CC=gcc  #compiler
TARGET_SERVER=server
TARGET_CLIENT=client
 
all:
	$(CC) server.c -o $(TARGET_SERVER)
	$(CC) client.c -o $(TARGET_CLIENT)

clean:
	rm $(TARGET_SERVER)
	rm $(TARGET_CLIENT)