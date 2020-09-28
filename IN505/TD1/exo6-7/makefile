cc = g++
cflags = -Wall -g

objdir = obj/


all: prog
	./prog

prog: $(objdir)Definition.o $(objdir)Cstring.o $(objdir)main.o
	$(cc) $(cflags) -o $@ $^

$(objdir)main.o: main.cpp $(objdir)Cstring.o $(objdir)Definition.o
	$(cc) -c $(cflags) -o $@ $<

$(objdir)Cstring.o: Cstring.cpp Cstring.hpp
	$(cc) -c $(cflags) -o $@ $< 

$(objdir)Definition.o: Definition.cpp Definition.hpp $(objdir)Cstring.o
	$(cc) -c $(cflags) -o $@ $< 



clear: 
	rm $(objdir)*
	rm prog