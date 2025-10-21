#include <iostream>
#include <iomanip>
/*La libreria iomanip contiene funzionalità per la stampa fine.
Per esempio posso dire quante cifre dopo la virgola visualizzare oppure,
e lo vedremo piu` avanti, quanto spazio utilizzare per la stampa di valore e 
come allinearlo. Questo consentira`, per esempio, di avere stampe ordinate.
*/

using namespace std;

int main(){

 int val=0;
 float somma = 0.f;
 float old_sum;

 do{
   
   old_sum = somma;
   val++;
   somma = somma +1.f/val;
   //setprecision(n): funzione della libreria iomanip che determina
   //quante cifre visualizzare dopo la virgola.
   cout << endl << "somma +" << 1.f/val << " = " <<setprecision(8) << somma; 

 }while(somma != old_sum);

cout << endl;

return 0;

}