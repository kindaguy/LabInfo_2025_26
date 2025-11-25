#include <fstream>
#include <iostream>
#include <iomanip>

#include "../Librerie/LibCasuali/libCasuali.h"

#define FW 18

using namespace std;

int main(){

    int quanti;
    ofstream fileout;
    const char nomefile[]= "vettoriPiano.dat";

    cout << endl << "Quanti vettori R2 a caso vuoi generare?";
    cin >> quanti;
    cout << endl << "Ok! Registro su file " << nomefile << endl;
    fileout.open(nomefile);
    
    for(int i=0; i<quanti; i++){
        fileout << setw(FW) << randUnif(0.,1.) << setw(FW) << randUnif(0.,1.)<< endl;
    }


    fileout.close();

}