#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 int val=1;
 float somma = 0.f;



 while(somma !=somma+1.f/val){
    somma = somma + 1.f/val;
    val++;

    cout << endl << "somma +" << 1.f/val << " = " <<setprecision(8) << somma; 
 }
cout << endl;

return 0;

}