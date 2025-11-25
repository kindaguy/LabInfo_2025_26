#include "libCasuali.h"

//Estrae un valore da una distribuzione di Bernoulli (lancio moneta 0/1, T/C) di parametro p
int randBern(double p){
    double pick;
    pick = randUnif(0.,1.);
    if( pick <= p) return 1;
    else return 0;
}

//Genera un numero estratto da distribuzione uniforme U([a,b])
int randUnif(int a, int b){
    int appo;
    appo = rand()%(b-a+1); //numero tra 0 e (b-a)
    //Trasformazione affine:
    //-traslo di a
    return appo + a;
}

//Genera un numero estratto da distribuzione uniforme U([a,b])
double randUnif(double a, double b){
    double appo;
    appo = (double)rand()/RAND_MAX;
    //Trasformazione affine:
    //-riscalo per ampiezza intervallo
    //-traslo di a
    return (b-a)* appo + a;
}

//Genera un numero estratto da una Gaussiana standard N(mu = 0, sigma = 1)
//Usiamo la trasformazione di Box-Muller. Considerate che "buttiamo via" un valore
//quindi questa implementazione e` altamente inefficiente...ma semplice
double randGaussStd(){
    double u1,u2;
     u1 = randUnif(0.,1.);
     u2 = randUnif(0.,1.);

     return sqrt(-2.0 * log(u1)) * cos(2 * PI * u2);
    //Non usiamo
    //sqrt(-2.0 * log(u1)) * sin(2 * PI * u2);
}

//Genera un numero estratto da una Gaussiana N(mu,\sigma)
double randGauss(double mu, double sigma){
    double appo = randGaussStd();
    //Trasformazione affine:
    //-riscalo per sigma
    //-traslo di mu
    return appo * sigma + mu;
}

