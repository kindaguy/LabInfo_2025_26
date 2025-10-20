#include <iostream>

using namespace std;

int main(){

    int dato;
    int somma = 0;
    int conta = 0;

    do{
        cout << endl << "Inserire valore intero positivo, zero per teminare: ";
        cin >> dato;
        if(dato >0){
            somma += dato;
            conta++;
        }
        //else non fare nulla perche' il dato non e` valido

    }while (dato !=0); 

    if(conta > 0){
        cout << endl << "Inseriti: " << conta << " valori. Media: " << (float)somma/conta << endl;
    }
    else{
        cout << endl << "Non e` stato inserito nessun valore valido" << endl;
    }

    return 0;
}