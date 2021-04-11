# comments in Makefiles start with #s

main.o: main.cpp
	# we put terminal commands in here that get us to what we want
	g++ -std=c++17 -c main.cpp

searching.o: searching.cpp
	g++ -std=c++17 -c searching.cpp

main: main.o searching.o
	g++ -std=c++17 main.o searching.o -o main
