#include <iostream>

using namespace std;

void scambia(int,int);

int main(){

    int v1 = 2;
    int v2 = 4;
    int appo;

    cout << endl << "v1 = " << v1 <<"; v2 = " << v2<< endl;

    //v1 = v2;
    //v2 = v1;


    // appo = v1;
    // v1 = v2;
    // v2 = appo;
    scambia(v1,v2); //scambia(2,4)
    cout << endl << "Dopo scambio:\n v1 = " << v1 <<"; v2 = " << v2<< endl;


    return 0;


}

void scambia(int a,int b){
    int appo;
    appo = a;
    a = b;
    b = appo;

    cout << endl <<"a = " << a << " b = " << b << endl;
}