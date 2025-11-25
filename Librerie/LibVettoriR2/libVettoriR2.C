#include "libVettoriR2.h"


void somma(double v1[], double v2[], double res[]){
    for(int i=0; i<DIM; i++) res[i] = v1[i]+v2[i];
    //Non restituisce niente perche' "esporta" il risultato con res
}


/*Restituisce la differenza di v1 e v2 in res*/
void sottr(vettoreR2 v1, vettoreR2 v2, vettoreR2 res){
    for(int i=0; i<DIM; i++) res[i] = v1[i]-v2[i];
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


/*verifica ortogonalità*/
bool areOrthogonal(vettoreR2 v, vettoreR2 w){
    if(prodScalare(v,w) == 0.) return true;
    else return false;
}

/*Restituisce angolo (in radianti) formato con ascisse da vetore v*/
double getAngle(vettoreR2 v){
    if(v[0] != 0){
        //atan in cmath: arcotangente
        //!!!vale sempre che il denominatore deve essere diverso da zero!
        return atan(v[1]/v[0]);
    }
    else{
        if(v[1] >= 0)
            return  PI/2;
        else
            return -PI/2;
    }

}

void fromModAngtoCoord(double mod, double ang, vettoreR2 coord){
    coord[0] = mod * cos(ang);
    coord[1] = mod * sin(ang);
}

/*Assegna valori alla componente di un array*/
void leggiVR2(vettoreR2 v){
    cout << endl << "Inserire coordinate: ";
    cin >> v[0] >> v[1];
}

/*Stampa a video componenti vettore*/
void stampaVR2(vettoreR2 v){
    cout << endl << setw(FW) << "x" << endl << setw(FW) << "y";
    cout << endl << setw(FW) << v[0] << endl << setw(FW) << v[1] << endl;
}
