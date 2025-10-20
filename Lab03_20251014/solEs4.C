#include <iostream>

using namespace std;

int main(){

    //Mi serve un contenitore per l'intero da tastiera

    int x;

    cout << endl << "Inserire intero: ";
    cin >> x;

    //Qui x e` noto al programma
    if(x >= 0){ //a < b, a <= b, a > b, a == b 
        //Ramo condizione true
        cout << endl << "Non negativo" << endl;
    }
    else{
        //Ramo condizione false
        cout << endl << "Negativo" << endl;
    }

    return 0;

}