CXXFLAGS=-c
LDFLAGS=-o
all: helloworld

helloworld: helloworld.o
	$(CXX) helloworld.o $(LDFLAGS) helloworld
helloworld.o: helloworld.cpp
	$(CXX) $(CXXFLAGS) helloworld.cpp
clean:
	rm *.o helloworld
