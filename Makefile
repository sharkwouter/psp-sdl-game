TARGET = main
OBJS = main.o

CFLAGS = -Wall -Wextra
CXXFLAGS = $(CFLAGS)
CC = g++

LIBS=-lSDL

all: $(TARGET)
	echo Created $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $^ $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^ $(LIBS)

clean:
	rm $(OBJS) $(TARGET)
