puntoR2.o: puntoR2.C puntoR2.h
	g++ -c puntoR2.C

myArrayPuntoR2.o: myArrayPuntoR2.C myArrayPuntoR2.h
	g++ -c myArrayPuntoR2.C

programma.o: programma.C
	g++ -c programma.C

programma.x: programma.o myArrayPuntoR2.o puntoR2.o
	g++ programma.o myArrayPuntoR2.o puntoR2.o -o programma.x

compila: programma.x

esegui: programma.x
	./programma.x