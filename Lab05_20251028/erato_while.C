#include <iostream>

using namespace std;

int main(){

    int primi[50];
    int numero;
 
    
    //Uso pos per tenere traccia della prima posizione libera
    //dell'array
    int pos;

    //Scrivo il primo primo in posizione zero
    primi[0]=2;
    //La prima posizione libera dell'array e quindi 1
    pos = 1;

    //Il primo numero da valutare e` il successore di 2
    numero = 3;

    while(pos<50){
        //Ad ogni iterazione del ciclo controllo la
        //primalità del numero. Se e` primo lo inserisco
        //nella prima posizione libera dell'array.
        //Altrimenti non faccio nulla e incremento il 
        //numero di 1 cosi` da avere un numero nuovo 
        //da controllare all'iterazione successiva.
        bool isprime = true;
        int j=0;

        //In questo ciclo controllo se numero è primo
        //controllando se è multiplo degli elementi
        //gia` inseriti nell'array.
        //ATTENZIONE: al ciclo i-esimo, gli elementi
        //dell'array validi sono in 0...i-1
        while(isprime && j<pos){
            if(numero%primi[j] ==0){
                isprime = false;
            }
            j++;
        }
        //Se isprime e` vero allora il valore e` primo e lo registro 
        //nella prima posizione libera dell'array
        if(isprime){ //Registro numero
            primi[pos]=numero;
            pos++;
        }
        //altrimenti non faccio nulla se non

        //passare al numero successivo
        numero++;
    }

    //Stampo array a video
    for(int i=0; i<50; i++)
        cout << endl << primi[i];
    cout << endl;

    return 0;
}