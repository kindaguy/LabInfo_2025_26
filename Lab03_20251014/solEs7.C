#include <iostream>
<<<<<<< HEAD

=======
>>>>>>> ab6ebe2a76f728eb2d923b457bcaf1c6a16de8ab
using namespace std;

int main(){

<<<<<<< HEAD
    //Mi serve un contenitore per l'intero da tastiera
    int appo;
    
    cout << endl <<"Inserire valore positivo: ";
    cin >> appo;
    
    while(appo < 0){
        cout << endl <<"Inserire valore positivo! : ";
        cin >> appo;
    }
    //Qui arrivo solo se inserito valore positivo

    cout << endl << "Valore positivo inserito: " << appo << endl;
    
    return 0;

=======
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
>>>>>>> ab6ebe2a76f728eb2d923b457bcaf1c6a16de8ab
}