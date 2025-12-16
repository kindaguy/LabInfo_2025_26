#include "puntiPiano.h"

puntoPiano * caricaPuntiFile(const char nomefile[], int & rdim, int & rused ){


    int conta = 0;

    ifstream filein;

    puntoPiano *v = NULL;

    puntoPiano appo;

    filein.open(nomefile);

    if(filein.fail()){
        cout << endl << "Errore aggancio stream di input. Esco da funzione" << endl;
        //Valore puntatore NON valido.
        return NULL;
    }
    //Se arrivo qui, tutto ok: stream agganciato con successo.

    //Ciclo spoletini
    filein >> appo.x >> appo.y;
    while(!filein.eof()){
        conta++;
        filein >> appo.x >> appo.y;
    }
    //Ho contato i punti su file!

    //alloco dinamicamente array di puntiPiano della dimensione "giusta"
    v = new puntoPiano[conta];

    rdim = conta;

    filein.close();
    filein.open(nomefile);

    for(int i=0; i<conta; i++){

        filein >> v[i].x >> v[i].y;
    }

    filein.close();

    rused = conta;

    return v;

}


int findMin(puntoPiano v[], int low, int high){
    //Inizialmente il minimo e` il primo elemento del segmento
    double valMin = distanzaOrigine(v[low]);
    int posMin=low;

    //Scorro il segmento e aggiorno man mano il minimo e la sua posizione.

    for(int i=low+1; i<=high; i++){
        if(distanzaOrigine(v[i])<valMin){
            //Aggiorno valore e posizione del minimo
            valMin = distanzaOrigine(v[i]);
            posMin = i;
        }
    }

    return posMin;
}

void scambia(puntoPiano &a, puntoPiano &b){
    puntoPiano appo;
    appo = a;
    a = b;
    b = appo;
}

void selSort(puntoPiano v[],int low, int high){
    int posMin;
    for(int i = low; i< high; i++){
        posMin = findMin(v,i,high);
        scambia(v[i],v[posMin]);
    }
    
}

double distanzaOrigine(puntoPiano a){

    return sqrt(pow(a.x,2)+pow(a.y,2));
}