/*In questo programma esemplifichiamo l'uso delle costanti letterali,
definite attraverso la direttiva a preprocessore:

#define Nome_costante Valore_costante

e delle variabili costanti, ovvero variabili che, una volta che è stato 
loro assegnato un valore, non possono essere più modificate.
*/

#include <iostream>
#include <iomanip>

using namespace std;

#define NN 100

int main(){

    int arr[NN];
    const float pi =3.141592f;
    //const float pi;
    //pi = 3.141592f;

    cout << endl << "Valore della costante: " << NN << endl;
    //Attenzione:
    //in fase di pre-processing, ovvero quando vengono eseguite anche le
    //direttive a pre-proccessore #include, ad ogni occorrenza di NN viene sostituito
    //la sequenza di caratteri corrrispondenti, in questo caso 100.
    for(int i=0; i<NN; i++){
        arr[i] = i;
        cout << " " << arr[i];
        if (i%10 == 0) cout << endl;
    }

    for(int i=0; i<NN; i++){
        arr[i] = i;
        cout << " " << arr[i];
        if (i%10 == 0) cout << endl;
    }

    cout << endl << endl << "stampa perimetri:" << endl;
    cout << setprecision(6);
    //NOTA: setprecision(6) rimane fino a che non viene modificato ulteriormente.
    for(int i=0; i<NN; i++){
        cout << setw(10) <<2*pi*arr[i];
        if (i%10 == 0) cout << endl;
    }

    //pi = 3.1415;

    return 0;
}