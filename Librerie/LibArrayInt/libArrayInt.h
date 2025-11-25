/*Libreria per manipolazione array int*/

#include <iostream>
#include <iomanip>

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
int ricercaLineare(int v[],int size, int used, int elem);

//Ricerca lineare in range
//Gli estremi dell'intervallo li accettiamo anche razionali
int ricercaLineareRange(int v[], int size, int used, float min, float max);