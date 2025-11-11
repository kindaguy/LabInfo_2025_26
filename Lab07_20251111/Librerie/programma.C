#include <iostream>
#include "vettoriR2.h"

using namespace std;

int main(){

    double vett1[2] ={1.,2.};
    double vett2[2] = {7. ,5.};
    double add[2];

    somma(vett1, vett2, add);

    cout << endl << add[0] << "; " << add[1] << endl;


    return 0;
}