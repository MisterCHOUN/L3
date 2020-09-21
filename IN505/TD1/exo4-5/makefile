cc = g++
cflags = -Wall -Werror

objdir = obj/

all : prog
	./prog

prog: $(objdir)Segment.o $(objdir)Point.o $(objdir)main.o
	$(cc) -o $@ $^

$(objdir)main.o: main.cpp $(objdir)Segment.o
	$(cc) -c $(cflags) -o $@ $<

$(objdir)Segment.o : Segment.cpp Segment.hpp $(objdir)Point.o
	$(cc) -c $(cflags) -o $@ $<

$(objdir)Point.o: Point.cpp Point.hpp
	$(cc) -c $(cflags) -o $@ $<

clear:
	rm $(objdir)*.o
	rm prog