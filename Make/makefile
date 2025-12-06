#this is a makefile.
#building block: entry point

#Structure of entry point:
#target: {dependencies (one or more files/targets)}
#action: what to do to generate the target !!!Mind the tab character before the action!!!!

libMyArrayInt.o: ../Librerie/LibMyArrayInt/libMyArrayInt.h ../LibMyArrayInt/libMyArrayInt.C 
	g++ -c ../Librerie/LibMyArrayInt/libMyArrayInt.C -o ../Librerie/LibMyArrayInt/libMyArrayInt.o

libArrayInt.o: ../Librerie/LibArrayInt/libArrayInt.h ../LibArrayInt/libArrayInt.C 
	g++ -c ../Librerie/LibArrayInt/libArrayInt.C -o ../Librerie/LibArrayInt/libArrayInt.o

programma.o: programma.C
	g++ -c programma.C

programma.x: programma.o ../Librerie/LibArrayInt/libArrayInt.o ../Librerie/LibMyArrayInt/libMyArrayInt.o
	g++ programma.o ../Librerie/LibArrayInt/libArrayInt.o ../Librerie/LibMyArrayInt/libMyArrayInt.o -o programma.x

#Additional "phony" entries: the target is not a file, or something produced by the entry....

#this deletes all the .o and .x files (* is a wildcard meaning "anything")
clean:
	rm *.o *.x

#This entry has the entry sortWithLib.x as dependency.
#If sortWithLib.x file is not present, the corresponding entry gets executed
compila: driver.x

#
esegui: driver.x
	./driver.x

