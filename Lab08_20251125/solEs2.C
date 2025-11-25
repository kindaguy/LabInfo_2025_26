/*La libreria LibCasuali, nel mio file system, si trova in una certa posizione
rispetto alla cartella che contiene questo file.
Sulle vostre macchine, ricordatevi di modificare in modo opportuno il path del .h*/

#include <iostream>
#include "../Librerie/LibCasuali/libCasuali.h"
#include "../Librerie/LibArrayInt/libArrayInt.h"

using namespace std;

#define SIZE 50

int main(){

    int acaso[SIZE];
    int dim = SIZE;
    int used = 0;
    int pos;
    int contaNeg = 0;

    //Creo vettore di elementi interi a caso tra -20 e 20 
    for(int i=0; i<dim; i++){
        used = appendi(acaso,dim,used,randUnif(-20,20));
    }

    //Stampo
    stampaArray(acaso,used);

    //Conto gli elementi negativi
    for(int i=0;i<used; i++){
        if(acaso[i]<0) contaNeg++;
    }
    cout << endl << "Trovati " << contaNeg << " elementi negativi." << endl;

    //Elimino elementi negativi:
    //-comincio a scandire il vettore da sx, usando un indice pos;
    pos = 0;
    //-controllo gli elementi, uno alla volta, fino a che pos < used, ovvero
    //fino a che ho ancora elementi dell'array da controllare
    while(pos < used){
        if(acaso[pos]<0){
            //Elimino elemento negativo e aggiorno used
            used = eliminaSwap(acaso, dim, used, pos);
            //Attenzione: l'elemento in fondo al vettore sostiuisce l'elemento in pos
            //e andra` controllato alla prossima iterazione.
        }
        else{
            //Passo a controllare l'elemento successivo.
            pos++;
        }

        //Quindi, ad ogni iterazione del ciclo:
        //-o elimino un elemento e non avanzo con pos
        //-o avanzo con pos
    }

    cout << endl << "Eliminati " << dim - used << " elementi." << endl ;

    return 0;


}