#include <iostream>

using namespace std;

//Dichiarazione

bool isInRange(float, float, float);

//Programma driver: consente a noi di verificare il corretto
//funzionamento delle funzioni
int main(){

    float min;
    float max;
    float appo;

    //bool check;

    cout << endl <<"Inserire estremi intervallo:";
    cin >> min >> max;

    cout << endl << "Inserire valore da controllare: ";
    cin >> appo;

    //check = isInRange(appo, min, max);

    if(isInRange(appo, min, max)){
        cout << endl <<"Valore " << appo <<" in intervallo [" << min << "," << max << "]!";
    }
    else{
        cout << endl <<"Valore " << appo << " NON in intervallo [" << min << "," << max << "]!";
    }
    cout << endl;




    return 0;
}

//Definizione
bool isInRange(float val, float minimo, float massimo){
    if(val >= minimo && val <= massimo){
        return true;
    }
    else{
        return false;
    }
}
