
SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=)
all:$(OBJS)
$(OBJS):%:%.cpp
	g++ -c -g -o $@ $<
	mv $@ ../obj/$@.o
