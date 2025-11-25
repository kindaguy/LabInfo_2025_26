/*Libreria per la generazione di numeri pseudocasuali.
La libreria si basa sull'uso del generatore congruenziale rand().

0 <= rand() <= RAND_MAX

con RAND_MAX costante "di sistema".

Considerate che la libreria che andremo a definire e` utile per il nostro uso interno.
Per la generazione di numeri casuali per fare cose serie, usare la libreria
<random> del C++.
*/

#include <iostream>
#include <cmath>

#define PI 3.141592653589793

using namespace std;

//Estrae un valore da una distribuzione di Bernoulli (lancio moneta 0/1, T/C) di parametro p
//Potremmo anche far restituire un booleano, ma facciamo restituire 0 o 1, quindi int;
int randBern(double p);

//Genera un numero intero estratto da distribuzione uniforme U([a,b])
int randUnif(int a, int b);

//Genera un numero razionale estratto da distribuzione uniforme U([a,b])
double randUnif(double a, double b);

//Genera un numero estratto da una Gaussiana standard N(mu = 0, sigma = 1)
double randGaussStd();

//Genera un numero estratto da una Gaussiana N(mu,\sigma)
double randGauss(double mu, double sigma);

