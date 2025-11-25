#include "../Librerie/LibCasuali/libCasuali.h"
#include <iostream>
#include <fstream>
#include <iomanip>

#define FW 18

double law(double x0, double v, double time);

int main(){

    
    const int nn = 50;
    const double x0 = 1.2;
    const double v = 0.5;
    const double dt = 0.5;
    const double sigma = 0.2;

    const char nomefile[] = "rilevazioni.dat";

    ofstream fileout;

    fileout.open(nomefile);
    if(fileout.fail()){
        cout << endl << "Errore apertura file " << nomefile << endl;
        return -1;
    }

    //Se arrivo qui file aperto correttamente in scrittura

    //Scrivo prima riga
    fileout << "#rilevazioni.dat";
    fileout << endl<< "#"<<setw(FW) << "time" << setw(18) << "pos";
    for(int i=0; i <=nn; i++)
        fileout << endl << setw(FW) << i * dt  << setw(18) << law(x0,v,i*dt)+ randGauss(0.,sigma); 
    fileout << endl;
    fileout.close();

    return 0;


}

double law(double x0, double v, double time){
    return x0 + v * time;
}
