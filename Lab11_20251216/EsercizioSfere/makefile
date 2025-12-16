sfera.o: sfera.C sfera.h
	g++ -c sfera.C

programma.o: programma.C
	g++ -c programma.C

programma.x: programma.o sfera.o
	g++ programma.o sfera.o -o programma.x

compila: programma.x

esegui: programma.x
	./programma.x