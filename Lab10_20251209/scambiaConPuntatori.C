#include <iostream>

using namespace std;

void scambia(int *p1, int *p2);

int main(){

    int a = 5;
    int b = 3;
    //&nomevariabile: estrae l'indirizzo della variabile
    scambia(&a,&b); //I parametri attuali sono gli indirizzi delle variabili a e b
    cout << "a: " << a << "; b: " << b << endl;

    return 0;
}

void scambia(int *p1, int *p2){
    //Al momento della chiamata della funzione, i valori dei parametri attuali vengono assegnati 
    //ai parametri formali. Quindi p1 e p2 conterranno indirizzi
    int appo;
    //*puntatore: variabile il cui indirizzo e` contenuto nella variabile puntatore.
    //se puntatore contiene indirizzo della variabile pippo allora *puntatore e` come dire pippo.
    appo  = *p1; 
    *p1 = *p2;
    *p2 = appo;
}