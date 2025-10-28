#include <iostream>
#include <iomanip>

using namespace std;

#define SIZE 10
#define CAMPO 10

int main(){
    int v[SIZE];
    int conta = 0;
    int appo;

    cout << endl << "Inserire valore (0 per terminare): ";
    cin >> appo;
    while(appo != 0 && conta <10){
        //Elaboro dato
        v[conta++]=appo;
        cout << endl << "Inserire valore (0 per terminare): ";
        cin >> appo;
    }

    cout  << "\nValori inseriti:\n";

    for(int i=0; i<conta; i++){
        cout << endl << setw(CAMPO) << v[i];
    }
    cout << endl;



    return 0;
}