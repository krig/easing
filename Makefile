.PHONY: all

all: README.md test_easing

test_easing: easing.hpp test_easing.cpp
	$(CXX) -std=c++11 -o test_easing test_easing.cpp

README.md: test_easing mkreadme
	sh ./mkreadme README.md
