cc = g++
cflags = -Wall -g

objdir = obj/


all: prog
	./prog

prog: $(objdir)main.o $(objdir)Point.o $(objdir)PointColor.o $(objdir)Color.o
	$(cc) $(cflags) -o $@ $^

$(objdir)main.o: main.cpp $(objdir)Point.o $(objdir)PointColor.o $(objdir)Color.o
	$(cc) -c $(cflags) -o $@ $<

$(objdir)Point.o: Point.cpp Point.hpp
	$(cc) -c $(cflags) -o $@ $<

$(objdir)PointColor.o: PointColor.cpp PointColor.hpp
	$(cc) -c $(cflags) -o $@ $<

$(objdir)Color.o: Color.cpp Color.hpp
	$(cc) -c $(cflags) -o $@ $<


clear: 
	rm $(objdir)*
	rm prog