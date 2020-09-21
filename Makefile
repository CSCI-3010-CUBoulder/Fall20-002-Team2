<<<<<<< HEAD
CXX = g++
=======
CXX = g++ # the compiler
>>>>>>> fb896437fcba5d690c965a0705d6ed46652af7cb
CXXFLAGS = -std=c++17 -Wall

all: test

<<<<<<< HEAD
clean:
	rm test


test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
=======
test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean:
	rm test
>>>>>>> fb896437fcba5d690c965a0705d6ed46652af7cb
