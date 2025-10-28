#include <iostream>
//Libreria iomanip: funzioni di formato e impaginazione stampe.
#include <iomanip>

using namespace std;

int main(){

    int dato1 = 100;
    int dato2 = 10001;
    int dato3 = 100001;

    //Allineamento di default a dx
    cout << "Stampa allineato a dx su campi di 10 caratteri:" << endl;
    cout << endl << setw(10) << dato1;
    cout << endl << setw(10) << dato2;
    cout << endl << setw(10) << dato3;
    cout << endl;

    cout << "Stampa allineato a sx su campi di 10 caratteri:" << endl;
    //Cambio allineamento: a sx
    cout << left;
    cout << endl << setw(10) << dato1 << setw(10) << dato2;
    cout << endl << setw(10) << dato2 << setw(10) << dato3;
    cout << endl << setw(10) << dato3;
    cout << endl;

    cout << "Stampa allineato a dx su campi di 10 caratteri:" << endl;
    //Ritorno ad allineamento a dx
    cout << right;
    cout << endl << setw(10) << dato1;
    cout << endl << setw(10) << dato2;
    cout << endl << setw(10) << dato3;
    cout << endl;



    return 0;
}