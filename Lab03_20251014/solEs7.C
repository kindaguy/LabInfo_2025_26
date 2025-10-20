#include <iostream>

using namespace std;

int main(){

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

}