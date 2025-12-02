/*Doppia lettura file per conteggio/caricamento dati*/
/*Metodo 1: chudi-riapri stream*/

#include <iostream>
#include <fstream>

using namespace std;


int main(){

    ifstream file_in;
    double appo;
    double *v;
    int size;
    int conta = 0;
    int used=0;

    file_in.open("data.dat");
    if(file_in.fail()){
        cout << endl << "Problema aggancio file input. Esco.";
        return -1;
    }

    file_in >> appo;
    while(!file_in.eof()){
        //Elaboro dato
        conta++;
        file_in >> appo;
    }

    v =new double[conta];
    size = conta;


    file_in.clear();
    file_in.seekg(0,ios::beg);

    for(used=0; used<conta; used++)
        file_in>>v[used];
    
    //Array caricato.
    //Informazioni array aggiornate.
    //Ora possiamo usarlo...


    //Quando l'array non mi serve più, lo elimino.

    delete [] v;
    v = NULL;


    return 0;
}