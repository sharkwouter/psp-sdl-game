TARGET = main
OBJS = main.o

CFLAGS = -Wall -Wextra
CXXFLAGS = $(CFLAGS)
CC = gcc

LIBS=-lSDL

all: $(TARGET)
	echo Created $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^ $(LIBS)

clean:
	rm $(OBJS) $(TARGET)
