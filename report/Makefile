CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = add-nbo
OBJS = add-nbo.o

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

add-nbo.o: add-nbo.c
	$(CC) $(CFLAGS) -c add-nbo.c

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)
