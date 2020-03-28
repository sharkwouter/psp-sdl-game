TARGET = main
OBJS = main.o

CFLAGS = -Wall -Wextra
CXXFLAGS = $(CFLAGS)
CC = g++

INC=-I /usr/include/SDL2/
LIBS=-lSDL2

all: $(TARGET)
	echo Created $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $^ $(INC) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^ $(INC) $(LIBS)

clean:
	rm $(OBJS) $(TARGET)
