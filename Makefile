CPPFLAGS=-g -std=c++0x -Iinclude -Wno-c++14-compat -Wall -Werror -Wswitch-default -Wconversion -Wswitch-enum
LDFLAGS=-g
OBJECTS=characterPatternDrawer.o src/PatternDrawer.o src/PatternFactory.o src/TreeCharacterRow.o src/XCharacterRow.o

all: build test

characterPatternDrawer: $(OBJECTS)
	g++ $(LDFLAGS) -o characterPatternDrawer $(OBJECTS) $(LDLIBS) 
	
build: characterPatternDrawer

clean_build:
	rm -f characterPatternDrawer src/*.o

clean_tests:
	make -f Makefile.tests clean

clean: clean_build clean_tests

test:
	make -f Makefile.tests characterPatternDrawer_tests
	make -f Makefile.tests test
