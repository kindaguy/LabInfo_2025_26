#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input;
    int appoInt;
    float appoFloat;

    input.open("provaIgnore.dat");

    if(input.fail()){
        cout << endl << "Errore file input!" << endl;
        return -1;
    }
    //Se arrivo qui tutto ok

    input.ignore(100,'\n');

    input >> appoInt;
    cout << endl << "Letto intero: " << appoInt << endl;

    //Attenzione: dopo aver letto l'intero, la testina si trova sul carattere 'a capo'  
    input.ignore(100,'\n');
    //Adesso ho cousumato il carattere acapo
    //Adesso salto la seconda didascalia
    input.ignore(100,'\n');
    //Leggo il numero float
    input >> appoFloat;
    cout << endl << "Letto float: " << appoFloat << endl;

    input.ignore(100,'\n'); //Consumo il carattere 'a capo' dopo dato
    //Consumo ultima riga (con scritta #Fine)
    input.ignore(100,'\n');
    
    if(input.eof()){
        cout << endl << "File finito" << endl;
    }
    else{
        cout << endl << "File non finito" << endl;
    }

    input.close();

    return 0;

}