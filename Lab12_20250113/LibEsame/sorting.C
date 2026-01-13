#include "sorting.h"


//Dove modificare: tipo del vettore

int findMin(float v[], int low, int high){
    //Inizialmente il minimo e` il primo elemento del segmento
    float valMin=v[low];
    int posMin=low;

    //Scorro il segmento e aggiorno man mano il minimo e la sua posizione.

    for(int i=low+1; i<=high; i++){
        //Modificare qui relazione d'ordine specifica su tipo
        if(v[i]<valMin){
            //Aggiorno valore e posizione del minimo
            valMin = v[i];
            posMin = i;
        }
    }

    return posMin;
}

int findMax(float v[], int low, int high){
    //Inizialmente il minimo e` il primo elemento del segmento
    float valMax=v[low];
    int posMax=low;

    //Scorro il segmento e aggiorno man mano il minimo e la sua posizione.

    for(int i=low+1; i<=high; i++){
        //Modificare qui relazione d'ordine specifica su tipo
        if(v[i]>valMax){
            //Aggiorno valore e posizione del minimo
            valMax = v[i];
            posMax = i;
        }
    }

    return posMax;
}

void scambia(float &a, float &b){
    float appo;
    appo = a;
    a = b;
    b = appo;
}


//Ordina in ordine crescente
void selSort(float v[],int low, int high){
    int posMin;
    for(int i = low; i< high; i++){
        posMin = findMin(v,i,high);
        scambia(v[i],v[posMin]);
    }
    
}

void selSortDec(float v[],int low, int high){
    int posMax;
    for(int i = low; i< high; i++){
        posMax = findMax(v,i,high);
        scambia(v[i],v[posMax]);
    }
    
}

void merge_sort(int a[],int low,int high){
    int mid;
    if(low<high) {
        mid = low + (high-low)/2; //This avoids overflow when low, high are too large
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

//Questa funzione di merging è specializzata al caso in cui i vettori da fondere
//sono in realta` due sottovettori di un vettore individuati da tre indici:
//Potete scrivere, per esercizio, una funzione di merge che restituisce un nuovo vettore,
//creato dinamicamente, a partire da due vettori distinti....

void merge(int a[],int low,int mid,int high){
//low: indice piu` piccolo dell'array da fondere
//mid: mezzo dell'array da fondere
//high: indice piu` grande dell'array da fondere

    int h,i,j,k;
    int *b; //Abbiamo bisogno di un vettore di appoggio dove copiare i dati
    h=low; //Indice libero per scandire vettore di sinistra
    i=0; //Indica la prima posizione libera dell'array in cui stiamo copiando i dati
    j=mid+1; //Indice libero per scandire vettore di destra

    b = new int[high-low+1];


    while((h<=mid)&&(j<=high)){ //Mentre non hai esaurito uno dei due sottovettori
        //Modificare qui relazione d'odine
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++; //Avanza di uno con l'indice libero dell'array di sinistra
        }
        else{
            b[i]=a[j];
            j++; //Avanza di uno con l'indice libero dell'array di destra
        }
        i++; //
    }

    if(h>mid){ //Se hai esaurito il sottovettore di sinistra, riversa in b quanto rimane del sottovettore di destra
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++){ //Se hai esaurito il sottovettore di destra, riversa in b quanto rimane del sottovettore di sinistra
            b[i]=a[k];
            i++;
        }
    }

    i=0; //Reset indice vettore i per la copia
    //for(k=low;k<=high;k++,i++) a[k]=b[i]; //Ricopia in a il vettore ordinato b.
    //Oppure (molto più elegantemente, ed efficientemente)
    memcpy ( (void *)  (a + low), (const void *) b, (high-low+1)*sizeof(int));
    //memcpy 


    delete [] b;
    b= NULL;
}