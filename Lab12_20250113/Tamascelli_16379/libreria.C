#include "libreria.h"
istream& operator>>(istream& in, bersaglio& obj){
    in >> obj.x >> obj.y >> obj.c;
    return in;
}

ostream& operator<<(ostream& out, const bersaglio& obj){
    out << endl <<  "x: " << setw(FW) << obj.x << endl;
    out << endl <<  "y: " << setw(FW) << obj.y << endl;
    out << endl <<  "c: " << setw(FW) << obj.c << endl;
    out << endl << "dist: " << setw(FW) << (obj.dist ? "true" : "false");
    out << endl;
    return out;
}



bersaglio * leggiBersagliFile(const char nomefile[], int& n){

    ifstream filein;
    int conta = 0;
    bersaglio *v=NULL;
    bersaglio appo;

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

    v= new bersaglio[conta];
    if(v ==NULL){
        cout << endl <<"Errore allocazione! Panico!" << endl;
        return NULL;
    }

    for(int i=0; i<conta; i++) {
        filein >> v[i];
        if(v[i].c <=0) v[i].dist=true;
        else v[i].dist = false;
    }

    filein.close();

    n = conta;

    return v;


}

/*colpi*/

istream& operator>>(istream& in, colpo& obj){
    in >> obj.theta >> obj.phi ;
    return in;
}

// ostream& operator<<(ostream& out, const colpo& obj){
//     out << endl <<  "x: " << setw(FW) << obj.x << endl;
//     out << endl <<  "y: " << setw(FW) << obj.y << endl;
//     out << endl <<  "c: " << setw(FW) << obj.c << endl;
//     out << endl << "dist: " << setw(FW) << (obj.dist ? "true" : "false");
//     out << endl;
//     return out;
// }



colpo * leggiColpiFile(const char nomefile[], int& n){

    ifstream filein;
    int conta = 0;
    colpo *v=NULL;
    colpo appo;

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

    v = new colpo[conta];
    if(v ==NULL){
        cout << endl <<"Errore allocazione! Panico!" << endl;
        return NULL;
    }


    for(int i=0; i<conta; i++) {
        float g;
        filein >> v[i];
        v[i].hit = false;
        //Determino coordinate di impatto
        g = pow(100.f,2)/9.81 *sin(2*v[i].theta);
        v[i].xf = g * cos(v[i].phi);
        v[i].yf = g * sin(v[i].phi);
    }

    filein.close();

    n = conta;

    return v;


}
