CXX = g++ # the compiler
CXXFLAGS = -std=c++17 -Wall

all: test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean:
	rm test