#include "libArrayDouble.h"


//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(double v[], int size, int n, double elem){
    if(n >= size){
        cout << endl << "Array pieno. Non posso appendere!" << endl;
        return -1;
    }
    else{
        v[n] = elem;
        return n+1;
    }

}

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(double v[], int size, int n, int pos, double elem){
    if(pos <0 or pos > n){
        cout << endl << "Non posso inserire in posizione " << pos << "perche' creeerei un buco!" << endl;
        return -1;
    }
    if(n >= size){
        cout << endl << "Array pieno. Non posso inserire!" << endl;
        return -1;
    }
    else{
        //Sposto tutti gli elementi a dx di pos avanti di uno
        for(int i=n; i>pos; i--){
            v[i] = v[i-1];
        }
        v[pos]= elem;
        return n+1;
    }
}

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(double v[], int size, int n, int pos){
    if(pos <0 or pos > n){
        cout << endl << "Posizione " << pos <<" fuori range degli indici validi [" << 0 << "..." <<n-1 << "]"<<endl;
        return -1;
    }
    else{
        for(int i=pos; i<n-1; i++) v[i] = v[i+1];
        return n-1;
    }
}

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(double v[], int size, int n, int pos){
    if(pos <0 or pos > n){
        cout << endl << "Posizione " << pos <<" fuori range degli indici validi [" << 0 << "..." <<n-1 << "]"<<endl;
        return -1;
    }
    else{
        v[pos] = v[n-1];
        return n-1;
    }
    
}


void stampaArray(double v[], int n){
    cout << endl << "Stampo array.";
    cout << endl << "Usati: " << n;
    for(int i=0; i<n; i++) cout << endl << setw(10) << v[i];
    cout << endl << "fine! " << endl;

}

//Ricerca lineare
int ricercaLineare(double v[],int size, int used, double elem){
    int which = 0;
    //Scandisco il vettore da sinistra vesso destra,
    //avanzando fino a che o non trovo l'elemento o
    //finisco il vettore.

    while(v[which] != elem && which < used) which++;
    if(which < used) return which; //Mi sono fermato prima di esaurire l'array
    else return -1; //mi sono fermato perche' ho esaurito l'array
}

//Ricerca lineare in range
int ricercaLineareRange(double v[], int size, int used, float min, float max){
    int which = 0;
    //Scandisco il vettore da sinistra vesso destra,
    //avanzando fino a che o non trovo l'elemento o
    //finisco il vettore.

    while(  (v[which]< min || v[which]>max)  && which < used) which++;
    if(which < used) return which; //Mi sono fermato prima di esaurire l'array
    else return -1; //mi sono fermato perche' ho esaurito l'array


}