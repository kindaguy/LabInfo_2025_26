
# Laboratorio 10: Resize di array, ordinamento, make e makefile

## Esercizio 1

Implementare la funzione

__int resize(int *&arr, int used, int newsize)__

illustrata a lezione. Ricordate il significato dei valori di ritorno.

## Esercizio 2

Una volta aggiunta la funzione definita nell'esercizio precedente alla libreria per a gestione di array di interi,
modificare le funzioni __appendi__ e __inserisci__ della libreria in modo tale che, se l'array di inserimento esaurisce lo spazio, questo venga allargato a due volte la dimensione attuale.

## Esercizio 3

Modificare le funzioni __eliminaShift__ e __eliminaSwap__ della libreria per la gestione di array di interi in modo tale che, se l'array di inserimento contiene, a seguito dell'eliminazione, meno di __size/2__ elementi, la dimensione l'array venga ristretta alla metà della dimensione attuale.


## Esercizio 4

I file __selSort_ricorsivo.C__ e __selSort_iterativo.C__ contengono la definizione delle funzioni di ordinamento di array di interi nella versione rispettivamente ricorsiva e iterativa. Scrivere funzioni analoghe per l'ordinamento di array di __float__. Verificare il funzionamento delle funzioni definite ordinando i dati presenti nel file __misure.dat__ (che specifica il numero di elementi come primo dato nel file).

## Esercizio 6
Scrivere una funzione __void ordinaPuntiPiano(puntoPiano *vpunti, int low, int high)__ che ordini l'array di __puntiPiano__ ricevuto come argomento in ordine di distanza dall'origine crescente. A tal fine, definire le apposite funzioni __int posMin(puntoPiano *v, int low, int high)__ e __void swap(puntoPiano &p1, puntoPiano &p2)__.

## Esercizio 6 (introduzione make e Makefile)

In una cartella __Es5Top__ inserite il file __puntiPiano.dat__. Insieme a questo, create un file __puntoPiano.C__ e __puntoPiano.h__. Nel file __puntoPiano.h__ dichiarate la t-upla __puntoPiano__ introdotta nello scorso laboratorio, insieme alle funzioni:

__puntoPiano * caricaPuntiFile(const char nomefile[], int & rdim, int & rused )__

__void ordinaPuntiPiano(puntoPiano *vpunti, int low, int high)__ 

Scrivere quindi un programma che, usando la libreria __puntiPiano__ così definita, carichi e stampi a video i punti descritti nel file __puntiPiano.dat__ e lo ordini in ordine di distanza dall'origine non decrescente.

## Esercizio 7 (overload operatore estrazione >>, da fare insieme)

Scrivere una funzione 

__istream& operator>>(istream &in, puntoPiano &p)__

che prende in ingresso un riferimento a stream di input e un riferimento a __puntoPiano__ e restituisce il riferimento a __istream__. Questa funzione dovrà occuparsi di registrare coppie di valori float nella variabile __p__.

