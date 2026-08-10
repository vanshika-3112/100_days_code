CC = gcc
CFLAGS = -Wall -Wextra -std=c17
TARGET = program

all: $(TARGET)

$(TARGET): File.c
	$(CC) $(CFLAGS) -o $(TARGET) File.c

clean:
	rm -f $(TARGET)
