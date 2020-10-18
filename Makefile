CC=g++
CFLAGS=-c -Wall
FLAGS=-Wall -std=c++11
LDFLAGS=
SOURCES=main.cpp functions.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sort
TEST_DIR = ./test

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	
test: functions.o test.o 
	$(CC) -Wall test.o functions.o -o testbin

test.o:
	$(CC) -Wall -c $(TEST_DIR)/test.cpp -o test.o
	
runtest:
	./testbin

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
