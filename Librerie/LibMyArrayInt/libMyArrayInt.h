/*Direttive a preprocessore nuove
Queste direttive servono ad evitare che un file header
venga incluso piu` volte a causa di #include incrociati.
#ifndef COSTANTE: 
...codice...
#endif

Se il preprocessore veder che COSTANTE e` definita, ignora
tutto quanto compare prima dell'#endif
Altrimenti procede.
*/

#ifndef LIB_MYARRAYINT
/*
In questo caso, quindi, il preprocessore verifica se
la costante LIB_MYARRAYINT è stata definita. Se questa
costante non e` definita, considera le istruzioni fino a #endif
*/

#define LIB_MYARRAYINT
/*
La prima istruzione che troviamo dopo #ifndef e`
#define LIB_MYARRAYINT

Quindi viene definita la costante LIB_MYARRAYINT (a cui non faccio 
corrispondere alcun valore). In pratica, se qualcuno 
includesse due volte libMyArrayInt.h, la prima volta
il contenuto del blocco tra 
#ifndef LIB_MYARRAYINT 
e
#endif
verrebbe incluso, la seconda volta no!
Questo meccanismo di "fencing" serve, apputo ad eviatare che
il contenuto del file header, che contiene definizioni
di tipi e di funzioni, venga incluso due volte, portando
quindi ad errori in compilazione.
*/

#include <iostream>
#include <fstream>
#include <cstring>

//La libreria usa le funzionalità di libArrayInt per la
//manipolazione degli array
#include "../LibArrayInt/libArrayInt.h"

#define SIZE0 10

//La libreria definisce il nuovo tipo di dato t-upla 
struct myArrayInt{
    int size;
    int used;
    int *raw;
};

//Inizializzazione: crea un myArray di dimensione iniziale SIZE0 e used =0;
void init(myArrayInt &my);
//La libreria mette a disposizione le stesse funzionalità di libArrayInt
//A differenza della vecchia libreria, pero`, le funzioni di inserimento e di rimozione 
//possono far variare la dimensione dell'array.

//Decidiamo che, se un array viene allargato, la sua dimensione viene raddoppiata.

//Notate che passo il riferimento alla t-upla, cosi` da poterla modificare
//Valore di ritorno: -1 se errore di allocazione, 0 altrimenti
int appendi(myArrayInt &my, int elem);

int inserisci(myArrayInt &my, int pos,int elem);

//Decidiamo che, se un array ha meno della metà delle posizioni piene, al momento di una
//rimozione, la sua dimensione viene ridotta alla metà.

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(myArrayInt &my,int pos);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(myArrayInt &my, int pos);

void stampaArray(myArrayInt my);

//Ricerca lineare
int ricercaLineare(myArrayInt my, int elem);

//Ricerca lineare in range
//Gli estremi dell'intervallo li accettiamo anche razionali
int ricercaLineareRange(myArrayInt my, float min, float max);





#endif