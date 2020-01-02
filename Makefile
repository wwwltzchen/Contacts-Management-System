CC=g++
SRCS=*.cc
OBJS=$(SRCS:.cpp=.o)
EXEC=maincc
start:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
.cc.o:
	$(CC) -o $@ -c $< -DMYLINUX

clean:
	rm -rf $(OBJS)
