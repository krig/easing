.PHONY: all

test_easing: easing.hpp test_easing.cpp
	$(CXX) -std=c++11 -o test_easing test_easing.cpp

all: test_easing

