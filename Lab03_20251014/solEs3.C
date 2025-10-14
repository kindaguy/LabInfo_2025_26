#include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    float c,d;

    cout << endl << "Inserisci due valori interi: ";
    //Leggo due valori 
    cin >> a >> b;
    //Equivalente a 
    //cin >> a;
    //cin >> b;

    //Stampe richieste
    cout << endl<< "a+b = " << a+b;
    cout << endl<< "a-b = " << a-b;
    cout << endl<< "a*b = " << a*b;
    cout << endl<< "a/b = " << a/b;
    cout << endl << "resto a/b = " << a%b;

    cout << endl;
    c = a/b;
    cout << endl << "c = " << c << endl;

    //d = (1. * a)/b;
    //d =  a/(1.0f * b);

    //cast esplicito
    d = (int)a / b;
    cout << endl << "d = " << d << endl;

    return 0;


}

