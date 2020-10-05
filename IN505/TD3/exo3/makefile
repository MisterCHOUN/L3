cc = g++
cflags = -Wall -g

objdir = obj/


all: prog
	./prog

prog: $(objdir)main.o $(objdir)CList.o $(objdir)CPile.o
	$(cc) $(cflags) -o $@ $^

$(objdir)main.o: main.cpp $(objdir)CList.o $(objdir)CPile.o
	$(cc) -c $(cflags) -o $@ $<

$(objdir)CList.o: CList.cpp CList.hpp
	$(cc) -c $(cflags) -o $@ $<

$(objdir)CPile.o: CPile.cpp CPile.hpp $(objdir)CList.o
	$(cc) -c $(cflags) -o $@ $<


clear: 
	rm $(objdir)*
	rm prog