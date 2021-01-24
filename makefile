OBJS=$(patsubst %.c, %.o, $(wildcard *.c))
CC=gcc
CFLAGS=-c -Wall
LFLAGS=-Wall

all:t_main
t_main:$(OBJS)
	$(CC) $(LFLAGS) $^ -o $@
$(OBJS):%.o:%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o app
