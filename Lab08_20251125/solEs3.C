#include <iostream>
#include <fstream>
#include "../Librerie/LibVettoriR2/libVettoriR2.h"

#define SIZE 200

using namespace std;


int main(){

    vettoreR2 appo;
    //Questo e` il vettore su cui proiettare.
    vettoreR2 ref  = {2.5,5.5};

    int conta = 0;
    //Qui registrero` il valori massimi di modulo e proiezione 
    double modMax;
    double projMax;
    
    //Qui registrero` i vettori che hanno modulo e proiezione massimi.
    vettoreR2 vmodMax,vprojMax;
     
    ifstream filein;


    //Apro stream
    filein.open("vettoriPiano.dat");
    if(filein.fail()){
        cout << endl << "Problema apertura file. Esco!" << endl;
        return -1;
    }
    //Se arrivo qui, fstream aperto con successo


    //...e procedo di cilclo Spoletini
    //Leggo primo dato fuori dal ciclo:
    //Il dato e` una coppia di valori

    filein >> appo[0] >> appo[1];
    while(!filein.eof()){
        //Se entro il dato c'e`
        //Elaboro dato
        conta++;


        //Il primo dato caricato e`, alla prima iterazione, quello che ha sia modulo che proiezione massimi.
        if(conta ==1){
            modMax = modulo(appo);
            vmodMax[0] = appo[0];
            vmodMax[1] = appo[1];

            projMax = prodScalare(ref,appo);
            vprojMax[0] = appo[0];
            vprojMax[1] = appo[1];
            //Notare che questo blocco di codice viene eseguito solo quando viene caricato il primo vettore.
        }
        else{ //conta >1, quindi modMax e projMax inizializzati
            double appoDouble;
            //Valuto modulo del vettore appena inserito
            appoDouble = modulo(appo);
            if(appoDouble > modMax){ //Aggiorno valore modulo massimo e registro vettore corrispondente.
                modMax = appoDouble;
                vmodMax[0] = appo[0];
                vmodMax[1] = appo[1];
            } //else...altrimenti non fare nulla

            //Valuto proiezione su ref del vettore appena inserito
            appoDouble = prodScalare(ref,appo);
            if(appoDouble > projMax){ //Aggiorno valore proiezione su ref massima e registro vettore corrispondente.
                projMax = appoDouble;
                vprojMax[0] = appo[0];
                vprojMax[1] = appo[1];
            } //else...altrimenti non fare nulla

            //Finita elaborazione

            //Leggo dato successivo prima di uscire dal ciclo
            filein>> appo[0] >> appo[1];

        }
        

    }

    //Caricamento da file terminato
    filein.close();

    cout << endl << "Elaborazione terminata. " << endl;
    cout << endl << "Sul file sono descritti " << conta << "vettoriR2."<< endl;

    cout << endl << "And the winners are: " << endl;
    cout << endl << "Modulo massimo: " << modMax << endl;
    cout << "Vettore corrispondente: ";
    stampaVR2(vmodMax);


    cout << endl << "Proiezione massima: " << projMax << endl;
    cout << "Vettore corrispondente: ";
    stampaVR2(vprojMax);
    
    return 0;
}