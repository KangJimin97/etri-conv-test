CC = g++
CFLAGS = -g -Wall -std=c++11
SRCS = $(shell find . -name "*.cpp")
PROG = ${SRCS:.cpp=.bin}

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

<<<<<<< HEAD
binaries: $(PROG)
=======
binaries:$(PROG)
>>>>>>> fc0e02ed442555cb90267a074e694a9cb0fa2437

$(PROG):$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $< $(LIBS)
