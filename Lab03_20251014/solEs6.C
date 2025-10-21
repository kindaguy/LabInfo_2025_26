#include <iostream>

using namespace std;

int main(){

    //Predispongo una variabile di tipo carattere in cui leggere l'input utente
    char c;
    int offset;

    //Osservo, dalla tabella ASCII, che l'offset tra i caratteri
    //alfabetici minuscoli e quelli maiuscoli è pari a 97-65
    offset = 97-65;

    //Leggo carattere
    cout << endl << "Inserire carattere da tastiera: ";
    cin >> c;
    //Carattere acquisito!

    //Siccome i caratteri sono memorizzati come interi senza segno (su 8 bit = 1 Byte)
    //sono assimilabili ad un insieme completamente ordinato.
    //E` quindi possibile confrontare caratteri con caratteri
    if (c >= 'A' and c <= 'Z'){
        cout << "Carattere alfabetico maiuscolo." << endl;
        
        cout << "Converto in minuscolo (modo 1): " << (char) (c + offset) << endl;
        //Osservo che, siccome i caratteri sono in realtà memorizzati come
        //interi senza segno (su 8 bit = 1 Byte)
        //posso calcolare l'offset usando direttamente i caratteri
        cout << endl << "Offset usando caratteri: " << 'a'-'A' << endl;
        cout << "Converto in minuscolo (modo 2): " << (char) (c + 'a' - 'A') << endl;
        //Notate il cast esplicito a char: serve per informare cout che deve
        //stampare il carattere e non l'intero positivo corrispondente.
    }
    else if(c >= 'a' and c <= 'z'){

        cout << "Carattere alfabetico minuscolo." << endl;
        //Osservo, dalla tabella ASCII, che l'offset tra i caratteri
        //alfabetici minuscoli e quelli maiuscoli è pari a 97-65

        cout << "Converto in maiuscolo (modo 1): " << (char) (c - offset) << endl;
        //Osservo che, siccome i caratteri sono in realtà memorizzati come
        //interi senza segno (su 8 bit = 1 Byte)
        //posso calcolare l'offset usando direttamente i caratteri
        cout << endl << "Offset usando caratteri: " << 'a'-'A' << endl;
        cout << "Converto in maiuscolo (modo 2): " << (char) (c + -('a' - 'A')) << endl;
        //
    }
    else{

        cout << endl <<"Non posso: non mi hai dato un carattere alfabetico!" << endl;
    }

    return 0;
}