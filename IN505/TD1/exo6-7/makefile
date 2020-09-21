cc = g++
cflags = -Wall -Werror

objdir = obj/


all: prog
	./prog

prog: $(objdir)Cstring.o $(objdir)main.o
	$(cc) $(cflags) -o $@ $^

$(objdir)main.o: main.cpp
	$(cc) -c $(cflags) -o $@ $<

$(objdir)Cstring.o: Cstring.cpp Cstring.hpp
	$(cc) -c $(cflags) -o $@ $< 



clear: 
	rm $(objdir)*
	rm prog