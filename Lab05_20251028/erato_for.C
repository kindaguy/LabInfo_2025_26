#include <iostream>

using namespace std;

int main(){

    int primi[50];
    int numero;
    bool isprime;

    primi[0]=2;

    numero = 3;
    //Uso l'indice di for per indicare
    //la posizione dell'array in cui scrivere
    //il primo determinato ad ogni iterazione
    for(int i=1; i<50; i++){
        bool isprime = true;
        int j=0;
        //Ad ogni iterazione del ciclo controllo la
        //primalità del numero. Se e` primo lo inserisco
        //nella prima posizione libera dell'array.
        //Altrimenti non faccio nulla e incremento il 
        //numero di 1 cosi` da avere un numero nuovo 
        //da controllare all'iterazione successiva.
        while(isprime && j<i){
            if(numero%primi[j] ==0){
                isprime = false;
            }
            j++;
        }
        if(isprime){ //Registro numero
            primi[i]=numero;
        }
        else{
            //Correggo indice array cosi` da annullare
            //i++ a fine ciclo for.
            //In questo modo, alla fine del corpo del for
            //l'indice i non avanza.
            i--;
        }
        //Valuto numero successivo
        numero++;
    }

    //NOTA: il ciclo for cosi` fatto e` identico al ciclo 
    //while della soluzione in erato_while.C, modulo l'uso
    //di i invece di pos per indicizzare l'array.
    //Vedete, pero`, che devo manipolare l'indice di ciclo
    //esplicitamente per evitare avanzamenti nel vettore...
    //...reason is but choosing!


    for(int i=0; i<50; i++)
        cout << endl << primi[i];
    cout << endl;

    return 0;
}