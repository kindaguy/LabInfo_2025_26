#include <iostream>
using namespace std;

int main(){

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


}