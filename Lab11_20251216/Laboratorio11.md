
# Laboratorio 11: Ancora sul makefile, fencing (#ifndef #define ....#endif), overload operatori $<<$ $>>$.

Oggi concluderemo l'introduzione del programma __make__ e del __makefile__. Poi introdurremo uno strumento sintattico per evitare che il contenuto di un file header (.h) venga incluso piu` di una volta, portando così alla generazione di errori in compilazione. Lavoreremo quindi sull'overload degli operatori di estrazione e immissione in stream. Concretizzeremo quindi tutto quanto visto nell'ambito della soluzione di un tema d'esame (vero): questo esercizio verrà lasciato al vostro lavoro individuale. Vedremo insieme la soluzione durante l'ultimo laboratorio a gennaio 2026.

## Esercizio 1

Il file __sfere.dat__, in questa cartella, contiene la descrizione di un numero non precisato di cuscinetti a sfera. Un cuscinetto a sfera è desccritto da una coppia $(r,c)$ dove $r$ è il raggio del cuscinetto (in mm) e $c$ è la tipologia di cuscinetto (indicata da un carattere). Le sfere descritte su file hanno tipologia __'r', 'g'__ o __'b'__. Definita la t-upla

__struct sfera{__
__float r;__
__char c;__
__};__

Dichiarate e definite (rispettivamente nel file __sfera.h__ e __sfera.C__) la funzione per la lettura di una sfera, ovvero

__ifstream& operator>>(ifstream &in, sfera & obj)__

e la funzione per la stampa a video (tramite overload di __operator<<__) di una sfera che visualizzi:
- il nome del campo (r: e c: ) e il valore del campo su uno spazio di 10 caratteri con allineamento a dx.

Verificate il funzionamento delle funzioni richieste usando un programma driver __programma.C__ che legga da tastiera una sfera per poi stamparne la descrizione.

## Esercizio 2

Scrivere una funzione che, preso in ingresso il nome del file e un riferimento ad un intero, restituisca l'indirizzo dell'array in cui sono state caricate le sfere e "esporti" il numero di sfere caricate tramite il riferimento ad intero. Questa funzione deve utilizzare la funzione __operator>>__ definita nell'esercizio precedente. Inserite questa funzione nella libreria __sfera__.

Una volta definita la funzione, usatela per caricare le sfere in __programma.C__
Stampare (in __programma.C__) la descrizione delle prime 3 e delle ultime 3 sfere caricate.

## Esercizio 3

Scrivete una funzione __int scremaSfere(sfera vs[], int used, char c)__ che elimini dal vettore delle sfere tutte le sfere di colore __'b'__. La funzione deve restituire il numero di sfere rimaste nell'array dopo la scrematura. Inserire questa funzione nella libreria __sfera__.

## Esercizio 4

Scrivere una funzione che ordini l'array di sfere in ordine di raggio non decrescente. Usate l'algoritmo Mergesort, descritto nel file __MergeSort/mergeSortAppo.txt__.