/*Sono partito da un copia-incolla della soluzione 
dell'esercizio 5...*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

#define SIZE 50
#define FIELD 10


int main(){

    ifstream input;
    string appoStringa;
    int nmeas;
    int nbad = 0;
    float mi,sigma;
    
    //Nuovo
    int conta = 0;
    float appo;
    //

    float meas[SIZE];
    float accu = 0;
    float accu2 = 0;
    float media;
    float deviazione;

    ofstream output;


    /*Lettura parametri apparato*/

    input.open("apparato.dat");

    if(input.fail()){
        cout << endl << "Errore file input!" << endl;
        return -1;
    }
    //Se arrivo qui tutto ok

    //Salto prima riga
    getline(input, appoStringa);
    //Leggo pre-stima
    input >> mi;
    //Finisco di consumare riga
    getline(input, appoStringa);
    //Salto riga
    getline(input, appoStringa);
    //Leggo stdDev delle discrepanze
    input >> sigma;

    //Chiudo stream
    input.close();

    cout << endl <<"Pre-stima: " << mi;
    cout << endl <<"StdDev discrepanze: " << sigma;
    
    /*Lettura file di dati*/

    input.open("dirtyMeasures.dat");

    if(input.fail()){
        cout << endl << "Errore file input!" << endl;
        return -1;
    }
    //Se arrivo qui tutto ok
    
    //Leggo numero misure (primo dato, intero del file)
    input >> nmeas;
    cout << endl <<"Nel file ci sono " << nmeas << " misure." << endl;
    
    //Adesso so quante misure sono presenti su file.
    //Le carico, ma ATTENZIONE:
    //-Uso ancora il ciclo for leggere tutti i dati
    //-Ma registro un dato solo se e` buono
    //-E uso un contatore a parte per tenere traccia della prima posizione libera nell'array

    for(int i=0; i<nmeas; i++){ 
        input >> appo;
        if(!(fabs(appo-mi) > 3*sigma)){//Dato buono
            meas[conta] = appo;
            conta++;
            //oppure
            //meas[conta++] = appo;
        }

    }
    
    //...e stampo
    cout << endl << "Dati buoni caricati: "<< conta << endl;
    for(int i=0; i<conta; i++){
        if(i%5 == 0) cout << endl;
        cout << setw(FIELD) << meas[i];
    }
    cout << endl;
    //Il file di input non mi serve più. 
    //Chiudo lo stream
    input.close();


    cout << endl <<"Numero dati anomali: " << nmeas-conta << endl;

    //Salto calcolo media, varianza e deviazione standard.
    //Completate voi!


    //Registrazione su file dei dati buoni
    output.open("datiOK_6.dat");
    if(output.fail()){
        cout << endl << "Problema apertura file in scrittura!" << endl;
        return -2;
    }
    //Se arrivo qui tutto bene

    //Stampo su file il numero delle misure buone
    output << conta << endl;
    //Registro su file le misure buone
    //Uso lo stesso costrutto usato per stampare 
    //a video le misure "anomale", ma questa volta
    //1) nego la condizione
    //2) registro dato su file
    
    for(int i=0; i<conta; i++){
            output << meas[i] << endl;
    
        //Altrimenti non faccio nulla
    }

    output.close();
    
    cout << endl << "Fine programma!" << endl;


    return 0;

}