#include <iostream>
#include <fstream>

//Qui ci limitiamo ad usare la funzione getline(stream,stringa), che appartiene a iostream/fstream, e che consente di leggere una riga alla 
//volta da un file. Questa funzione registra la riga letta da uno stream in una variabile di tipo string.
//Il tipo string e` definito nella libreria string e importato automaticamente dalla libreria iostream/fstream.
//Tornermo sulle stringhe più avanti nel corso. 

using namespace std;

int main(){

    ifstream input;
    int appoInt;
    float appoFloat;
    string appoStringa;
    input.open("provaIgnore.dat");

    if(input.fail()){
        cout << endl << "Errore file input!" << endl;
        return -1;
    }
    //Se arrivo qui tutto ok

    //La funzione getline
    //Leggo la prima riga:
    getline(input, appoStringa);
    
    //Stampo: 
    cout << "Stringa letta: " << appoStringa;

    input >> appoInt;
    cout << endl << "Letto intero: " << appoInt << endl;
    getline(input,appoStringa);
    cout << "Stringa letta: " << appoStringa;
    getline(input,appoStringa);
    cout << "Stringa letta: " << appoStringa;

    input >> appoFloat;
    cout << endl << "Letto float: " << appoFloat << endl;

    getline(input,appoStringa);
    cout << "Stringa letta: " << appoStringa;
    getline(input,appoStringa);
    cout << "Stringa letta: " << appoStringa;

    if(input.eof()){
        cout << endl << "File finito" << endl;
    }
    else{
        cout << endl << "File non finito" << endl;
    }

    input.close();

    return 0;



}