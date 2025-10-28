#include <iostream>
#include <iomanip>

using namespace std;

#define SIZE 10
#define FSIZE 10

int main(){
    int v[SIZE];
    int conta = 0;
    int appo;
    bool is_pal=true;
    
    cout << endl << "Inserire valore (0 per terminare): ";
    cin >> appo;
    while(appo != 0 && conta <10){
        //Elaboro dato
        v[conta++]=appo;
        cout << endl << "Inserire valore (0 per terminare): ";
        cin >> appo;
    }

    cout  << "\nValori inseriti:\n";

    for(int i=0; i<conta; i++){
        cout << endl << setw(FSIZE) << v[i];
    }
    cout << endl;

    //Controllo palindromia sequenza
    // for(int i=0; i<conta; i++){
    //     cout << endl << "i = " << i;
    //     if(v[i]!= v[conta-i-1]) {
    //         is_pal = false;  
    //         //break;
    //     }
    // }
    {
        int i =0;
        while(is_pal && i<conta){
            cout << endl << "i = " << i;
            if(v[i]!= v[conta-i-1]) {
                is_pal = false;  
                //break;
            }
            i++;
        }
    }


    if(is_pal){
        cout << endl << "La sequenza è palindroma" << endl;
    }
    else{
        cout << endl << "La sequenza NON è palindroma" << endl;
    }

    return 0;
}