/*Libreria per la manipolazione di vettori in R2*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define DIM 2

//Larghezza campo per stampa
#define FW 18

#define PI 3.141592653589793

/*La parola chiave typedef assegna un nome ad un certo tipo di dato.
Sintassi:
    typedef tipo nometipo

oppure, per array,
    
    typedef tipo nometipo[N]

dove N e` il numero di elementi dell'array.

La nostra libreria lavora su vettori di due elementi. Dal punto di vista del programmatore
sarebbe comodo assegnare un nome semanticamente significativo a questi...
*/

typedef double vettoreR2[2];

/*Considerate che da questo punto in avanti il compilatore conoscerà il tipo definito*/

/*Restituisce la somma di v1 e v2 in res*/
void somma(vettoreR2 v1, vettoreR2 v2, vettoreR2 res);

/*Restituisce la differenza di v1 e v2 in res*/
void sottr(vettoreR2 v1, vettoreR2 v2, vettoreR2 res);

/*Restituisce il prodotto scalare (o interno) tra due vettori v1 e v2*/
double prodScalare(vettoreR2 v1, vettoreR2 v2);

/*Restituisce il modulo (norma) di un vettore v*/
double modulo(vettoreR2 v);

/*verifica ortogonalità*/
bool areOrthogonal(vettoreR2 v, vettoreR2 w);

/*Restituisce angolo (in radianti) formato con ascisse da vetore v*/
double getAngle(vettoreR2 v);

void fromModAngtoCoord(double mod, double ang, vettoreR2 coord);

/*Assegna valori alla componente di un array*/
void leggiVR2(vettoreR2 v);

/*Stampa a video componenti vettore*/
void stampaVR2(vettoreR2 v);
