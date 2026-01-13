libreria.o: libreria.h libreria.C
	g++ -c libreria.C

main.o: main.C 
	g++ -c main.C

main.x: libreria.o main.o
	g++ libreria.o main.o -o main.x

compila: main.x

esegui: main.x
	./main.x