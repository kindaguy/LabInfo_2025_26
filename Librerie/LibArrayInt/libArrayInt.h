#ifndef LIB_ARRAYINT
#define LIB_ARRAYINT

/*Libreria per manipolazione array int*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(int v[], int size, int n, int elem);

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(int v[], int size, int n, int pos, int elem);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(int v[], int size, int n, int pos);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(int v[], int size, int n, int pos);

void stampaArray(int v[], int n);

//Ricerca lineare
int ricercaLineare(int v[], int used, int elem);

//Ricerca lineare in range
//Gli estremi dell'intervallo li accettiamo anche razionali
int ricercaLineareRange(int v[],  int used, float min, float max);

//Allarga/restringi vettore
int resize(int *& v,int used, int newdim);

/*
-v= di tipo riferimento a puntatore a interi.
Quindi, passiamo un riferimento alla variabile (di tipo int *) che CONTIENE l'indirizzo 
dove inizia l'array. All'interno della funzione v sara` sinonimo/alias di questa variabile.
Assegnare a v vorra` dire assegnare alla variabile (di tipo int *) passata come parametro attuale.

-used: numero di valori caricati nell'array
-newdim: nuova dimensione dell'array

La funzione assegna l'indirizzo del nuovo vettore, ridimensionato e contenente tutti gli used elementi
dell'array originale, restituendo il valore 0 (no error).

ERRORI:

- La funzione assume che used<=newdim, ovvero che, anche se ridimensioniamo verso il basso, 
tutti gli elementi usati del vettore saranno mantenuti. In caso contrario, restituisce il codice di errore
-1 e non procede con il ridimensionamento.

- Se ci fossero problemi con l'allocazione del nuovo vettore, la funzione restituisce -2 e non procede con il ridimensionamento.

Sara` compito della funzione chiamante verificare se qualcosa e` andato storto e identificare quale condizione di errore e` avvenuta.
*/
#endif