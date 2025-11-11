#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define DIM 120

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


int main(){

    ifstream filein;
    float appo;
    float v[DIM];
    int used = 0;
    int size  = DIM;
    int res;

    filein.open("data.dat");
    if(filein.fail()){
        cout << "\nApertura stream di ingresso fallita! Esco." << endl;
        return -1;
    }

    //Atrimenti proseguo

    //Ciclo Spoletini

    filein >> appo;
    while(!filein.eof()){
        //Elaboro dato
        res = appendi(v, size, used , appo);
        if(res >= 0 ) used = res;
        else {
            cout << endl << "panico: finito spazio!";
            return -2;
        }

        filein >> appo;
    }
    //File finito e Dati caricati in array.
    filein.close();
    //used contiene il numero di dati caricati

    cout << endl << " Ho caricato " << used << " elementi." << endl;
    //Stampo array...
    
    stampaArray(v,used);
    

    return 0;

}





//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(float v[], int size, int n, float elem){
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
int inserisci(float v[], int size, int n, int pos, float elem){
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
int eliminaShift(float v[], int size, int n, int pos){
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
int eliminaSwap(float v[], int size, int n, int pos){
    if(pos <0 or pos > n){
        cout << endl << "Posizione " << pos <<" fuori range degli indici validi [" << 0 << "..." <<n-1 << "]"<<endl;
        return -1;
    }
    else{
        v[pos] = v[n-1];
        return n-1;
    }
    
}


void stampaArray(float v[], int n){
    cout << endl << "Stampo array.";
    cout << endl << "Usati: " << n;
    for(int i=0; i<n; i++) cout << endl << setw(10) << v[i];
    cout << endl << "fine! " << endl;

}