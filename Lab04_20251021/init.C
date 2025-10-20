#include <iostream>

using namespace std;

int main(){

    //Variabili non inizializzate: contengono un valore non definito
    //In laboratorio le variabili intere non inizializzate contengono 0 (perche' qualcuno ha forzato questa opzione)
    //ma su altre macchine (provate sulle vostre) non è detto
    //Le variabili float/double/..., invece, contengono un valore "a caso"

    int datoI;
    float datoF;

    cout << endl <<"datoI contiene: " << datoI << endl;
    cout << endl <<"datoF contiene: " << datoF << endl;

    return 0;

}