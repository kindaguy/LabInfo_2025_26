/*Libreria per manipolazione array float*/

#include <iostream>
#include <iomanip>

using namespace std;

//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(float v[], int size, int n, float elem);

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(float v[], int size, int n, int pos, float elem);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(float v[], int size, int n, int pos);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(float v[], int size, int n, int pos);

void stampaArray(float v[], int n);

//Ricerca lineare
int ricercaLineare(float v[],int size, int used, float elem);

//Ricerca lineare in range
//Gli estremi dell'intervallo li accettiamo anche razionali
int ricercaLineareRange(float v[], int size, int used, float min, float max);