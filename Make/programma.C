#include <iostream>
#include <fstream>
#include "../Librerie/LibMyArrayInt/libMyArrayInt.h"


int main(){

    myArrayInt myArr;
    init(myArr);
   
    for(int i=0; i< 15; i++) appendi(myArr,i);
    
    stampaArray(myArr);


    return 0;

}