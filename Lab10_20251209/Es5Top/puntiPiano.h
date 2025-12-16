#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct puntoPiano{
    double x;
    double y;
};

puntoPiano * caricaPuntiFile(const char nomefile[], int & rdim, int & rused );

//Ordina un segmento dell'array v definito dagli indici low e high
void selSort(puntoPiano v[],int low, int high);
//Determina e restituisce la posizione dell'elemento minimo del segmento [low,...,high] dell'array v
int findMin(puntoPiano v[], int low, int high);
//Scambia due valori.
void scambia(puntoPiano &a,puntoPiano &b);

double distanzaOrigine(puntoPiano a);

