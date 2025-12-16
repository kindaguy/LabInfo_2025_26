#include <iostream>
#include <fstream>
#include <cstring>

#include "puntoR2.h"

using namespace std;

struct myArrayPuntoR2{
    int size;
    int used;
    puntoR2 * raw;
};


void inizializza(myArrayPuntoR2 & arr);

int resize(myArrayPuntoR2 & arr, int newsize);

int appendi(myArrayPuntoR2 & arr, puntoR2 elem);
//To be completed....