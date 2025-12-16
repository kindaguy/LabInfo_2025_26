#this is a makefile.
#building block: entry point

programma.o: programma.C
	g++ -c programma.C

puntiPiano.o: puntiPiano.C puntiPiano.h
	g++ -c puntiPiano.C

programma.x: programma.o puntiPiano.o
	g++ programma.o puntiPiano.o -o programma.x



#Structure of entry point:
#target: {dependencies (one or more files/targets)}
#action: what to do to generate the target !!!Mind the tab character before the action!!!!













#this deletes all the .o and .x files (* is a wildcard meaning "anything")
clean:
	rm *.o *.x

#This entry has the entry sortWithLib.x as dependency.
#If sortWithLib.x file is not present, the corresponding entry gets executed
compila: programma.x

#
esegui: programma.x
	./programma.x

