#include <iostream>

using namespace std;

int main(){
    
    int dato;
    int quanti;
    int somma = 0;
    
    do{
        cout << endl << "Quanti valori vuoi inserire? ";
        cin >> quanti;
    }while(quanti < 0);

    if(quanti != 0){
        cout << "...ok: leggo i valori...."<< endl;

        for(int i=0; i<quanti; i++){
            cout << endl << "Inserire valore: ";
            cin >> dato;
            somma += dato;
        }
        cout << endl << "Media valori inseriti: " << (float)somma/quanti << endl;
    }
 
    else{

        cout << endl << "...ok, fine!" << endl;
    }
    
    
    return 0;
}