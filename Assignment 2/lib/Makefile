SHELL = /bin/bash
CC = gcc
CFLAGS = -O2 -g -I.
LIBNAME = librecrel.a
OBJFILE1 = order1/soln1.o
OBJFILE2 = order2/soln2.o
OBJFILE3 = order3/soln3.o

library : objgen
	ar rcs $(LIBNAME) $(OBJFILE1) $(OBJFILE2) $(OBJFILE3)

objgen:
	cd order1; make
	cd order2; make
	cd order3; make

distclean: clean
	rm -f $(LIBNAME)

clean:
	cd order1; make clean
	cd order2; make clean
	cd order3; make clean






