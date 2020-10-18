CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp functions.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sort

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
