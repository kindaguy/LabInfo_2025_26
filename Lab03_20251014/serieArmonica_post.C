#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 int val=0;
 float somma = 0.f;
 float old_sum;

 do{
   
   old_sum = somma;
   val++;
   somma = somma +1.f/val;
   cout << endl << "somma +" << 1.f/val << " = " <<setprecision(8) << somma; 

 }while(somma != old_sum);

cout << endl;

return 0;

}