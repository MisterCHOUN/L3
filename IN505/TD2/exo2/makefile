cc = g++
cflags = -Wall -g

objdir = obj/


all: prog
	./prog

prog: $(objdir)VecteurTableau.o $(objdir)main.o $(objdir)VecteurList.o
	$(cc) $(cflags) -o $@ $^

$(objdir)main.o: main.cpp $(objdir)VecteurTableau.o $(objdir)VecteurList.o
	$(cc) -c $(cflags) -o $@ $<

$(objdir)VecteurTableau.o: VecteurTableau.cpp VecteurTableau.hpp
	$(cc) -c $(cflags) -o $@ $<

$(objdir)VecteurList.o: VecteurList.cpp VecteurList.hpp
	$(cc) -c $(cflags) -o $@ $<

clear: 
	rm $(objdir)*
	rm prog