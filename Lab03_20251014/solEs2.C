#include <iostream>

using namespace std;

int main(){

    int val;

    //int succ;
    //int prec;
    int c;
    
    cout << endl << "Inserire intero:" ;

    cin >> val;

    cout << endl << "Successivo: " << val+1 << endl;
    cout << endl << "Precedente: " << val-1 << endl;
    
    c = val+1;
    //succ = val+1;
    //prec = val-1;
    
    // cout << endl << "Successivo: " << succ << endl;
    // cout << endl << "Precedente: " << prec << endl;
    cout << endl << "c = " << c << endl;
    cout << endl << "c-1 = " << c-1 << endl;  



    return 0;
}