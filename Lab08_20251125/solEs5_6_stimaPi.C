#include <iostream>
#include <ctime>
#include "../Librerie/LibCasuali/libCasuali.h"

using namespace std;

double rilevazionePi(double l, int npoints){

    int contaIn = 0;
    double x,y;
    
    for(int i=0; i<npoints; i++){
        x = randUnif(0.,l);
        y = randUnif(0.,l);
        if(pow(x,2)+pow(y,2) <= pow(l,2)) contaIn++;
    }

    return (4. *contaIn)/npoints;
}

int main(){

    //Questa istruzione inizializza il generatore
    //di numeri casuali usando il tempo, in secondi,
    //passato dal primo gennaio 1970.
    //Questo consente di avere sequenze di numeri casuali
    //diverse ad ogni run.

    //Questa inizializzazione va fatta 
    //UNA SOLA VOLTA NEL CODICE!

    cout << endl << time(NULL) << endl;
    srand(time(NULL));

    cout <<"Rilevazione: " <<  rilevazionePi(1.,100) << endl;
    return 0;
}