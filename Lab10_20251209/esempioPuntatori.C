#include <iostream>

using namespace std;

int main(){
    float poldo = 5.1f;
    float pippo = 7.2f;
    float *punt;

    punt = &poldo; //Assegno a punt l'indirizzo di poldo
    cout << endl << "Indirizzo di poldo:" << &poldo << endl;
    cout << endl << "Contenuto di punt: " << punt << endl;
    cout << endl << "*punt: " << *punt << endl;
    
    punt = &pippo; //Assengo a punt l'indirizzo di pippo
    cout << endl << "Indirizzo di pippo:" << &pippo << endl;
    cout << endl << "Contenuto di punt: " << punt << endl;
    cout << endl << "*punt: " << *punt << endl;

    //punt, previo assegnamento, puo` essere visto come sinonimo/alias di una variabile, come per i reference.
    //Ma:
    //1- Sintassi diversa: serve usare asterischi
    //2- Un puntatore ha un contenuto che e` un indirizzo, un reference non ha un contenuto, e` solo un sinonimo
    //che viene assegnato, una volta per tutte, ad una variabile.
    //3- Il contenuto di un puntatore puo` essere cambiato.

    //Cosa preferire come alias: riferimenti o puntatori: usate quello che vi piace di piu`.
    //In alcuni casi (vedi allocazione dinamica di memoria) i puntatori sono indispensabili, quindi
    //hanno comunque senso di esistere (e devono essere conosciuti).
    return 0;
}