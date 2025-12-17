#ifndef PUNTOR2_H
#define PUNTOR2_H

#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

#define FW 10

struct puntoR2{
    double x,y;
};

double norma(puntoR2 p);
double distanza(puntoR2 p1, puntoR2 p2);
istream & operator>>(istream & in, puntoR2 &obj);
ostream & operator<<(ostream & in, const puntoR2 &obj);

#endif