#include <iostream>

using namespace std;

int main(){
    
    int dato;
    int conta = 0;
    int somma = 0;
    char c;

    do{
        cout << endl << "Inserire valore intero: ";
        cin >> dato;
        somma += dato;
        conta++;
        cout << endl << "vuoi inserire altri valori (s/n)?";
        cin >> c;
    }while(c != 'n');

    cout << endl << "Media valori inseriti: " << (float)somma/conta << endl;
    
    return 0;
}