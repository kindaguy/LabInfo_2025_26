#include <iostream>

using namespace std;

int main(){

    int num;
    cout << endl << "Inserire numero intero: ";
    cin >> num;

    if(num >=0){
        cout << endl << "Il numero inserito è positivo e ";
        if(num%2 == 0){
            cout << "pari" << endl;
        }
        else{
            cout << "dispari." << endl;
        }
    }
    else{
        
        cout << endl << "Il numero inserito è negativo e ";
        num  = -1 * num;
        if(num%2 == 0){
            cout << "pari" << endl;
        }
        else{
            cout << "dispari." << endl;
        }
    }

    cout << endl << endl;
    return 0;
}