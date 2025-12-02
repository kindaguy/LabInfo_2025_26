#include <iostream>
#include <fstream>

using namespace std;

struct puntoPiano{
    double x;
    double y;

};

int main(){

    int conta = 0;
    
    puntoPiano appo;
    
    puntoPiano *punti;
    int size;
    int used;

    ifstream filein;

    filein.open("puntiPiano.dat");

    filein >> appo.x >> appo.y;
    while(!filein.eof()){
        conta++;
        filein >> appo.x >> appo.y;
    }

    punti = new puntoPiano[conta];

    filein.close();
    filein.open("puntiPiano.dat");

    for(int i=0; i<conta; i++){

        filein >> punti[i].x >> punti[i].y;
    }

    filein.close();

    size = conta;
    used = conta;
    
    return 0;
}