#include "libMyArrayInt.h"

void init(myArrayInt &my){
    my.size = SIZE0;
    my.used = 0;
    my.raw = new int(my.size);
}
int appendi(myArrayInt& my, int elem){
    int err=0;
    if(my.used == my.size){//Non c'e` spazio, devo allargare
        err = resize(my.raw, my.used, 2 * my.size);
        if(err >= 0){//Tutto ok
            //Debug
            cout<< "resize fatta";
            my.size = 2 * my.size;
        }
        else{
            return err;
        }
    }
    //Qui ho lo spazio che mi serve
    my.used = appendi(my.raw,my.size,my.used,elem);
    return 0;
}

int inserisci(myArrayInt &my,int pos, int elem){
    int err=0;
    if(my.used == my.size){//Non c'e` spazio, devo allargare
        err = resize(my.raw, my.used, 2*my.size);
        if(err >= 0){//Tutto ok
            my.size = 2*my.size;
        }
        else{
            return err;
        }
    }
    //Qui ho lo spazio che mi serve
    my.used = inserisci(my.raw,my.size,my.used,pos,elem);
    return 0;
}

//Decidiamo che, se un array ha meno della metà delle posizioni piene, al momento di una
//rimozione, la sua dimensione viene ridotta alla metà.

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(myArrayInt &my,int pos){
    int err;
    //Se indice fuori range
    if(pos<0 or pos>my.used-1) return -1;
    //Atrimenti procedo
    my.used = eliminaShift(my.raw,my.size,my.used,pos);
    //Se l'array e` pieno per meno di meta` faccio un resize.
    if(my.used < my.size/2){
        err = resize(my.raw,my.used,my.size/2);
        if(err < 0){
            return err;
        }
        my.size = my.size/2;
    }
    return 0;
}

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(myArrayInt &my, int pos){
    int err;
    //Se indice fuori range
    if(pos<0 or pos>my.used-1) return -1;
    //Atrimenti procedo
    my.used = eliminaSwap(my.raw,my.size,my.used,pos);
    //Se l'array e` pieno per meno di meta` faccio un resize.
    if(my.used < my.size/2){
        err = resize(my.raw,my.used,my.size/2);
        if(err < 0){
            return err;
        }
        my.size = my.size/2;
    }
    return 0;
}

void stampaArray(myArrayInt my){
    cout << endl << "Size: " << my.size;
    stampaArray(my.raw,my.used);
}

//Ricerca lineare
int ricercaLineare(myArrayInt my, int elem){
    return ricercaLineare(my.raw,my.used,elem);
}

//Ricerca lineare in range
//Gli estremi dell'intervallo li accettiamo anche razionali
int ricercaLineareRange(myArrayInt my, float min, float max){
    return ricercaLineareRange(my.raw,my.used,min,max);
}
