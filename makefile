default: noten_if

noten_if.o: noten_if.c
	gcc -c noten_if.c -o noten_if.o

noten_if: noten_if.o
	gcc noten_if.o -o noten_if

clean:
	-rm -f noten_if.o
	-rm -f noten_if
