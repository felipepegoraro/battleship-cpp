TARGET := battleship
CC := g++
SRC := ./src/utils.cpp ./src/game.cpp
CFLAGS := -Wall -Werror -Wextra -O2

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET).out $(TARGET).cpp

clean: 
	rm $(TARGET)
