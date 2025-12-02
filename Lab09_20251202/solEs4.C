#include <iostream>

using namespace std;

void fixInterval(float &min, float &max);

int main(){

    float a = 5.3;
    float b = 2.4;
    fixInterval(a,b);
    cout << "Indirizzo di a: " << &a << endl;
    cout << "Indirizzo di b: " << &b << endl;

    cout << endl << "a =" << a <<"; b = " << b<< endl;
    return 0;
}

void fixInterval(float &min, float &max){
    float appo;

    cout << "Indirizzo di min: " << &min << endl;
    cout << "Indirizzo di max: " << &max << endl;

    if(min>max){
        appo = min;
        min = max;
        max = appo;
    }

}