CXX=g++
CXXFLAGS=-std=c++20 -Wall -Werror -g

all : main

main : player.o game.o main.o card.o
	$(CXX) -o $@ $^ $(CXXFLAGS)

%.o : %.cpp %.hpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


.PHONY: clean

clean:
	rm -f *.o main
