#include "puntoR2.h"

double norma(puntoR2 p){
    return sqrt(pow(p.x,2)+pow(p.y,2));
}
double distanza(puntoR2 p1, puntoR2 p2){
    puntoR2 appo = p1;
    appo.x -= p2.x;
    appo.y -= p2.y;
    return norma(appo);
}

istream & operator>>(istream & in, puntoR2 &obj){
    in >> obj.x >> obj.y;
    return in;
}

ostream & operator<<(ostream & out, const puntoR2 &obj){
    out << endl << "x: " << setw(FW) << obj.x;
    out << endl << "y: " << setw(FW) << obj.y;
    return out;
}


