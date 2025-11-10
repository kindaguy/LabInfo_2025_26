#include "vettoriR2.h"


void somma(double v1[], double v2[], double res[]){
    for(int i=0; i<DIM; i++) res[i] = v1[i]+v2[i];
    //Non restituisce niente perche' "esporta" il risultato con res
}


double prodScalare(double v1[],double v2[]){
    double accu = 0.;

    for(int i=0; i<DIM; i++) accu += v1[i] * v2[i];

    return accu;
}

/*Restituisce il modulo (norma) di un vettore v*/
double modulo(double v[]){
    return sqrt(prodScalare(v,v));
}

/*....altre funzioni/procedure...*/