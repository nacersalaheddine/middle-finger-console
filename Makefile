CC = gcc
CFLAGS = -g
CFLAG_WARNINGS = -Wall
CFLAG_STD = -std=c99
CFLAG_OUTPUT = -o
CFLAG_COMPILE = -c
EXECPATH =./bin
OBJPATH=./obj
EXEC = program


${EXEC}: main.o asciiart.o
	$(CC) $(CFLAGS) $(CFLAG_OUTPUT) $(EXECPATH)/${EXEC} main.o asciiart.o 
	
asciiart.o: asciiart.c
	$(CC) $(CFLAGS) $(CFLAG_COMPILE) $(CFLAG_WARNINGS) $(CFLAG_STD) asciiart.c

main.o: main.c
	$(CC) $(CFLAGS) $(CFLAG_COMPILE) $(CFLAG_WARNINGS) $(CFLAG_STD) main.c
	