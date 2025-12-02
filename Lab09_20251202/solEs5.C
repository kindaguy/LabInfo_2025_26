#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

float *caricaDatiFileFloat(const char nomefile[], int & rdim, int & rused );

int main(){

    float *dati = NULL;
    int size = 0;
    int used = 0;

    dati = caricaDatiFileFloat("data.dat", size, used );

    if(dati == NULL){
        cout << endl << "qualcosa e` andato storto con caricamento file!" << endl;
        return -1;
    }

    cout << endl;
    cout << endl<< "Dimensione array: " << size << endl;
    cout << endl<< "Numero elementi caricati in array: " << used << endl;
    cout << endl << "Elementi array: ";
    for(int i =0;i<used; i++){
        if(i % 3 == 0) cout << endl;
            //cout <<right << setw(20) << dati[i];
            //cout <<"||"<<   dati[i];
    }
    cout << endl;


    return 0;
}


float *caricaDatiFileFloat(const char nomefile[], int & rdim, int & rused ){

    ifstream filein;
    float appo;
    int conta = 0;
    float *v=NULL;

    filein.open(nomefile);
    if(filein.fail()){
        cout << endl << "Problema apertura file! Esco!" << endl;
        return NULL;
    }
    //Se arrivo qui tutto ok

    //Ciclo Spoletini
    filein >> appo;
    while(!filein.eof()){

        conta++;
        filein >> appo;
    }
    //Fine conteggio file
    filein.clear();
    filein.seekg(0,ios::beg);
    //oppure
    //filein.close();
    //filein.open(nomefile);

    v = new float[conta];

    for(int i=0; i< conta; i++)
        filein >> v[i];

    //Chiudo stream
    filein.close();
    
    rdim = conta;
    rused = conta;
    return v;
}