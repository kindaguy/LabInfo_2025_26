#include <iostream>

#include "puntiPiano.h"

using namespace std;

int main(){

    puntoPiano *dati=NULL;
    int size;
    int used;

    dati = caricaPuntiFile("puntiPiano.dat", size,used);

    if(dati == NULL){
        cout << endl <<"Ahia! Qualcosa e` andato storto! Esco dal programma!" << endl;
    }
    //Se e` invece andato tutto bene:

    cout << endl <<"Stampo array:";
    cout << endl <<"Dati caricati: " << used;
    cout << endl <<"Dimensione array: " << size;
    cout << endl;
    for(int i=0; i<used; i++){
        cout << endl << dati[i].x << "  " << dati[i].y;
    }
    cout << endl;

    selSort(dati,0,used-1);

    for(int i=0; i<used; i++){
        cout << endl << dati[i].x << "  " << dati[i].y << " " << distanzaOrigine(dati[i]);
    }
    cout << endl;
    return 0;
}