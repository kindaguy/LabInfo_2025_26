#include "sfera.h"



istream& operator>>(istream& in, sfera& obj){
    in >> obj.r >> obj.c;
    return in;
}

ostream& operator<<(ostream& out, const sfera& obj){
    out << endl << "r: " << setw(FW) << obj.r << endl;
    out << "c: " << setw(FW) << obj.c << endl;
    return out;
}


sfera * leggiSfereFile(const char nomefile[], int& nsfere){

    ifstream filein;
    int conta = 0;
    sfera *vsfere=NULL;
    sfera appo;

    filein.open(nomefile);
    if(filein.fail()){

        cout << endl << "Ahia! Errore aperture file lettura." << endl;
        return NULL;
    }
    //Se tutto va bene

    //Pirma lettura dato fuori ciclo
    filein >> appo;
    while(!filein.eof()){
        conta++;
        filein >> appo;
    }
    //Fine conteggio

    //Riavvolgo file
    filein.clear();
    filein.seekg(0,ios::beg);

    vsfere = new sfera[conta];
    if(vsfere ==NULL){
        cout << endl <<"Errore allocazione! Panico!" << endl;
        return NULL;
    }

    for(int i=0; i<conta; i++) filein >> vsfere[i];

    filein.close();

    nsfere = conta;

    return vsfere;


}


int eliminaShift(sfera v[],  int n, int pos){
    if(pos <0 or pos > n){
        cout << endl << "Posizione " << pos <<" fuori range degli indici validi [" << 0 << "..." <<n-1 << "]"<<endl;
        return -1;
    }
    else{
        for(int i=pos; i<n-1; i++) v[i] = v[i+1];
        return n-1;
    }
}

int scremaSfere(sfera arr[], int used, char col){
    int i =0;
    while(i<used){
        if(arr[i].c == col){
            used = eliminaShift(arr,used,i);
        }
        else{
            i++;
        }

    }
    return used;

}