#include <iostream>

using namespace std;

int main(){

    int a=1;
    int b;

    
    b = a++;
    cout << endl << "b= " << b;
    cout << endl << "a= " << a << endl;
    //Nell'assegnamento viene usato il valore di a, poi a viene incrementato

    //Ripristino il valore originale di a
    a = 1;
    b = ++a;
    cout << endl << "b= " << b;
    cout << endl << "a= " << a << endl;
    //Nell'assegnamento a viene prima incrementato e poi il valore ottenuto
    //viene registrato in b

    //Stesso meccanismo per a-- e --a, solo che su a viene fatto un decremento unitario.

    return 0;

}