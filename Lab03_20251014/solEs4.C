#include <iostream>
<<<<<<< HEAD

=======
>>>>>>> ab6ebe2a76f728eb2d923b457bcaf1c6a16de8ab
using namespace std;

int main(){

<<<<<<< HEAD
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

=======
    float       x;

    cout << endl <<"Inserire numero: ";
    cin >> x;

    if(x >= 0){
        cout << endl << "Numero positivo";
        
    }
    else{
        cout << endl << "Numero negativo";
    }
    cout << endl;

    return 0;


>>>>>>> ab6ebe2a76f728eb2d923b457bcaf1c6a16de8ab
}