#include <iostream>
#include "LibCasuali/libCasuali.h"
#include "LibArrayDouble/libArrayDouble.h"
#include "LibArrayInt/libArrayInt.h"

using namespace std;

#define SIZE 100
int main(){
    

    int monete[SIZE];
    double uniformi[SIZE];
    double gaussiani[SIZE];

    int usedMon = 0;
    int usedUni = 0;
    int usedGaus = 0;

    int sampleSize;
    do{
        cout << endl << "Dimensione campioni:";
        cin >>sampleSize;
    }while(sampleSize < 1); 

    for(int i=0; i<sampleSize; i++){
        usedMon = appendi(monete,SIZE, usedMon,randBern(0.8)); 
        usedUni = appendi(uniformi,SIZE, usedUni,randUnif(2,10));
        usedGaus = appendi(gaussiani,SIZE, usedGaus,randGauss(5,2));
    }

    stampaArray(monete,usedMon);
    stampaArray(uniformi,usedUni);
    stampaArray(gaussiani,usedGaus);



    return 0;

}