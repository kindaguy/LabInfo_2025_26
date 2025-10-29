#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

#define SIZE 20
#define FIELD 10

int main(){

    ifstream input;
    int nmeas;
    float meas[SIZE];
    float accu = 0;
    float accu2 = 0;
    float media;
    float deviazione;

    input.open("misure.dat");

    if(input.fail()){
        cout << endl << "Errore file input!" << endl;
        return -1;
    }
    //Se arrivo qui tutto ok
    
    //Leggo numero misure (primo dato, intero del file)
    input >> nmeas;
    cout << endl <<"Nel file ci sono " << nmeas << " misure." << endl;
    
    //Adesso so quante misure sono presenti su file.
    //Le carico:
    for(int i=0; i<nmeas; i++){ 
        input >> meas[i];
    }
    
    //...e stampo
    for(int i=0; i<nmeas; i++){
        if(i%5 == 0) cout << endl;
        cout << setw(FIELD) << meas[i];
    }
    cout << endl;
    //Il file di input non mi serve più. 
    //Chiudo lo stream
    input.close();


    for(int i=0; i<nmeas; i++) accu += meas[i];

    media  = accu/nmeas;

    cout << endl << "Media: " << media << endl;

    for(int i=0; i<nmeas; i++) accu2 += pow(meas[i] - media,2);

    deviazione = sqrt(accu2/nmeas);

    cout << endl << "StdDevC: " << deviazione << endl;


    return 0;

}