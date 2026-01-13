#include <iostream>
#include <fstream>
#include "libreria.h"

using namespace std;

int main(){

    ofstream file_out;
    bersaglio *vb;
    int nb = 0;
    int bdist0;

    colpo *vc;
    int nc = 0;

    
    file_out.open("results.out");



    //Punto 1
    vb = leggiBersagliFile("bersagli.dat",nb);
    for(int i=0; i<nb; i++){
        if(vb[i].dist) bdist0++;
    }

    cout << "# Punto 1" << endl;
    cout << endl << "Bersagli caricati:" << nb << endl;
    cout << endl << "Bersagli distrutti all'inizio: " << bdist0;
    cout << endl << "Bersagli non distrutti all'inizio: " << nb-bdist0;
    cout << endl;

    file_out << "# Punto 1" << endl;
    file_out << endl << "Bersagli caricati:" << nb << endl;
    file_out << endl << "Bersagli distrutti all'inizio: " << bdist0;
    file_out << endl << "Bersagli non distrutti all'inizio: " << nb-bdist0;
    file_out << endl;

    {
        
        int contaok = 0;
        int contako = 0;
        
        cout << endl << "Primi 3 bersagli non distrutti:" << endl;
        file_out << endl << "Primi 3 bersagli non distrutti:" << endl;
        
        int i=0;
        while(i<nb && contaok <3){
            if(!vb[i].dist){
                contaok++;
                cout << vb[i];
                file_out << vb[i];
            }
            i++;
        }
        
        cout << endl << "Primi 3 bersagli distrutti:" << endl;
        file_out << endl << "Primi 3 bersagli distrutti:" << endl;
        i=0;
        while(i<nb && contako <3){
            if(vb[i].dist){
                contako++;
                cout << vb[i];
                file_out << vb[i];
            }
            i++;
        }

    }

    cout << endl << "# Punto 2" << endl;
    file_out << endl << "# Punto 2" << endl;


    vc = leggiColpiFile("alzo_angolo.dat",nc);

    cout << endl << "Numero colpi caricati: " << nc << endl;

    cout << endl <<"Primi 3 colpi:" << endl; 
    //....
    cout << endl <<"Ultimi 3 colpi: " << endl;

    //Struttura
    for(int i=0; i<nb; i++){//Per ogni bersaglio
        //i: indice bersaglio
        for(int j=0; j<nc; j++){ //Per ogni colpo
            //j: indice di colpo
            if(distanza(vb[i],vc[j])< 10){
                //float distanza(bersaglio,colpo) da definire
                //Condizione di hit
                //Elaboro
            }
            else{
                //Boh
            }

        }
        
    }

    file_out.close();
    return 0;
}