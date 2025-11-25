/*Programma driver per libreria VettoriR2*/
#include "LibVettoriR2/libVettoriR2.h"

#include <iostream>

using namespace std;

int main(){

    vettoreR2 uno, due, tre;

    leggiVR2(uno);
    leggiVR2(due);

    stampaVR2(uno);
    stampaVR2(due);

    cout << endl << "angolo uno:" << getAngle(uno);

    somma(uno,due,tre);
    stampaVR2(tre);

    return 0;
}