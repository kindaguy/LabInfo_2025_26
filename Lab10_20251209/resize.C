#include <iostream>
#include <cstring>

using namespace std;
/*Documentazione
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

int resize(int *& v,int used, int newdim);

int main(){

    int *v;
    int size=10;
    int newsize=20;
    int used=5;

    int err;

    v = new int[size];
    for(int i=0; i<used; i++) v[i] = i;

    
    //err = resize(v,used,newsize);
    err = resize(v,used,2);
    if(err == -1){
        cout << endl << "Troppi elementi per nuova dimensione. Panico! Esco." << endl;
        return -1;
        //Ovviamente posso decidere di gestire la cosa altrimenti
    }

    if(err == -2){
        cout << endl << "Errore allocazione memoria. Panico! Esco." << endl;
        return -1;
        //Qui mi sa che per gestire il problema devo fare qualche sforzo...la memoria e` finita :-(
    }
    


    for(int i=0; i<newsize; i++) cout << endl <<v[i];
    cout << endl;

    return 0;
}

int resize(int * & v,int used, int newdim){

    //In questa variabile registreremo l'indirizzo di un nuovo vettore
    //di dimensione newdim creato dinamicamente.
    int * vappo;

    if(newdim < used){
        //cout << endl << "ERRORE: Nuova dimensione [" << newdim <<"] non sufficiente a contenere tutti gli [" <<used << "] elementi validi dell'array" << endl;
        return -1;
    }

    //Tutorial:
    cout << endl << "Original v: " << v << endl;

    //Alloco un nuovo vettore e registro l'indirizzo di inizio in vappo
    vappo = new int[newdim];
    
    if(vappo == NULL){
        //cout << endl << "ERRORE: problema con allocazione nuovo vettore. Esco!" << endl;
        return -2;
    }

    //Se arrivo qui, posso procedere:

    /*
    -il nuovo vettore e` pronto per essere riempito.
    -uso la funzione memcpy (dalla libreria cstring):
    
    void * memcpy(void *dest, const void * src, std::size_t count)

    dove: 
    -dest: indirizzo (puro) da cui parte la regione di dati da scrivere
    -src: indirizzo (puro) da cui partono i dati da copiare
    -count: intero positivo (size_t) che indica il numero di byte da copiare.

    */

    //Ricorda: sizeof(T) restituisce il numero di byte usato per rappresentare il tipo T

    memcpy(vappo, v, used * sizeof(int)); 

    //Quindi: copia tutti gli used dati da v a vappo;
    
    //A questo punto il vecchio array allocato dinamicamente non serve piu`: lo rimuovo
    
    delete [] v;

    //...e non dimenticatevelo!!!!

    //Assegno a v il nuovo vettore: quindi ora v (ovvero la variabile di cui e` alias) contiene l'indirizzo
    //del nuovo array
    v = vappo;

    //Tutorial
    cout << endl << "Nuovo indirizzo v: " << v << endl;

    cout << "Vettore ridimensionato di nuova dimensione " << newdim << endl;
    return 0;
}