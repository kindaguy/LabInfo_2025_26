#include <iostream>
using namespace std;

int main(){

    int appo;

    cout << endl << "Inserire valore positivo:";
    cin >> appo;


    while(appo < 0){
        //Che cosa faccio se il valore inserito non e` >=0?
        cout << endl <<"..ho detto positivo! Inserisci valore";

        cin >>appo;
    }
    //Post-condizione: quando esco? quando appo >= 0

    //Fine della storia
    cout << endl <<"OK! Valore inserito:" << appo << endl;

    return 0;
}