#include "myArrayPuntoR2.h"


void inizializza(myArrayPuntoR2 & arr){
    arr.size=10;
    arr.used=0;
    arr.raw = new puntoR2[arr.size];
}


int resize(myArrayPuntoR2 & arr, int newsize){
    puntoR2 *newArray=NULL;

    
    if (newsize < arr.used){
        cout << endl <<"Nuova dimensione minore del numero di elementi caricati! Errore!" << endl;
        return -1;
    }
    //Altrimenti procedo con resize
    
    newArray = new puntoR2[newsize];
    if(newArray == NULL){
        cout << endl <<"Resize: errore allocazione!" << endl;
        return -2;
    }

    //Copio i dati
    memcpy(newArray,arr.raw, arr.used * sizeof(puntoR2));

    arr.size = newsize;

    delete [] arr.raw;
    arr.raw = newArray;
    //E` andato tutto bene
    return 0;
}

int appendi(myArrayPuntoR2 & arr, puntoR2 elem){
    int err;
    if(arr.used >= arr.size){
        err = resize(arr, 2*arr.size);
        if (err !=0){
            cout << endl <<"Errore: " << err << " Esco!";
            return err;
        }
    }
    arr.raw[arr.used] = elem;
    arr.used++;
    return 0;
}
