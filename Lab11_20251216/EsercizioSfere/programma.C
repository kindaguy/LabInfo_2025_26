#include <iostream>
#include <fstream>
#include "sfera.h"

using namespace std;

int main(){

    sfera s;
    ofstream fileout;
    ifstream filein;

    sfera *arrSfere;

    int nsfere;
    int nsfereDopo;

    // Esercizio 1

    // cin >> s;

    // cout << s;

    // fileout.open("prova.dat");
    // fileout << s;
    // fileout.close();

    // filein.open("ciccio.dat");
    // filein >> s;
    // cout << s;

    // fine test esercizio 1


    //Esercizio 2
    arrSfere = leggiSfereFile("sfere.dat", nsfere);

    cout << endl << "Numero di sfere descritte su file: " << nsfere;
    for (int i=0; i<nsfere; i++){
        cout << arrSfere[i];
    }
    cout << endl;


    //Esercizio 3
    
    nsfereDopo = scremaSfere(arrSfere,nsfere,'b');

    cout << endl <<"Dopo scrematura: " << endl;

    
     for (int i=0; i<nsfereDopo; i++){
        cout << arrSfere[i];
    }
    cout << endl;



    return 0;

}