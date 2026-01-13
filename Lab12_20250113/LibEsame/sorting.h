#include <cstring> //Serve a mergesort


//Per selection sort: esemplificato per array di float
//Ordina un segmento dell'array v definito dagli indici low e high
void selSort(float v[],int low, int high);

//Ordina un segmento dell'array v definito dagli indici low e high in ordine decrescente
void selSortDec(float v[],int low, int high);

//Determina e restituisce la posizione dell'elemento minimo del segmento [low,...,high] dell'array v
int findMin(float v[], int low, int high);

//Determina e restituisce la posizione dell'elemento massimo del segmento [low,...,high] dell'array v
int findMax(float v[], int low, int high);

//Scambia due valori.
void scambia(float &a,float &b);


//Per mergesort: esemplificato su arraya di interi, ordina in ordine crescente
void merge(int [],int,int,int);
void merge_sort(int[],int, int);
