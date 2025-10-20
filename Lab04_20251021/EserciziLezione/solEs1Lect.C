#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout << endl << "Calcolo divisione intera." << endl;
   
    do{
        cout << endl << "Inserire valore intero non negativo (>=0, numeratore):";
        cin >> a;
        
    }while(a < 0 );
    //Se arrivo qui, a contiene valore valido

    do{
        cout << endl << "Inserire valore intero positivo (>0, denominatore):";
        cin >> b;
        
    }while(b <= 0 );
    //Se arrivo qui b contiene valore valido

    cout << endl << "Quoziente:" << a/b << "; resto: " << a%b << endl;

    return 0;
}