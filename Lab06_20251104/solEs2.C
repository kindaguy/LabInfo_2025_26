#include <iostream>

using namespace std;

#define SIZE 10

//Dichiarazione

bool isInRange(float, float, float);
void stampaArray(float[SIZE],int);


int main(){

    float v[SIZE];
    int conta=0;
    float appo;
    const float min = -5.0f;
    const float max =  5.0f;

    char go;

    do{
        cout << endl << "Inserire valore";
        cin >> appo;
        
        if(isInRange(appo,min,max)){
            //Se il dato e` buono, lo registro
            v[conta] = appo;
            conta++;
        }
        //altrimenti lo ignoro
        cout << endl << "Registrati " << conta << " valori" << endl;
        cout << endl <<"Proseguire inserimento? ('s' si, altrimenti no):";
        cin >> go;


    }while((go == 's' || conta <1) &&conta <10);

    stampaArray(v,conta);


    return 0;

}

//Definizione
bool isInRange(float val, float minimo, float massimo){
    if(val >= minimo && val <= massimo){
        return true;
    }
    else{
        return false;
    }
}

void stampaArray(float vett[SIZE],int n){
    cout << endl << "Stampo vettore di " << n << " elementi:"<< endl;
    for(int i=0; i<n; i++){
        cout << endl << vett[i];
    }
    cout << endl;

}
