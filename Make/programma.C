#include <iostream>
#include <fstream>
#include "../Librerie/LibMyArrayInt/libMyArrayInt.h"


int main(){

    myArrayInt myArr;
    init(myArr);
   
    for(int i=0; i< 15; i++) appendi(myArr,i);
    // {   //Debug
    //     int pippo;
    //     cout << "Finito appendi." << endl;
    //     cin >>pippo;
    // }
    
    for(int i=0; i< 50; i++) inserisci(myArr,2,10*i);
    stampaArray(myArr);

    //for(int i=0; i< 12; i++) eliminaShift(myArr,i);  

    return 0;

}