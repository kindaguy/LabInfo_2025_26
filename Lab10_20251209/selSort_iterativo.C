#include <iostream>

using namespace std;

#define N 20
#define VALMAX 100

//Ordina un segmento dell'array v definito dagli indici low e high
void selSort(int v[],int low, int high);
//Determina e restituisce la posizione dell'elemento minimo del segmento [low,...,high] dell'array v
int findMin(int v[], int low, int high);
//Scambia due valori.
void scambia(int &a,int &b);


int main(){
    int vett[N];
    //Carico array di valori a caso in [0,VALMAX]
    for(int i=0; i<N; i++){
        vett[i] = rand()%(VALMAX+1);
    }

    cout << endl << "Vettore non ordinato." <<endl;

    for(int i=0; i<N; i++){
        cout << endl << vett[i];
    }
    cout << endl;

    cout << endl << "Procedo con ordinamento....";
    selSort(vett,0, N-1);
    cout << endl << "...fatto!";

    cout << endl << "Vettore ordinato (spero)." <<endl;

    for(int i=0; i<N; i++){
        cout << endl << vett[i];
    }
    cout << endl;

    return 0;
}



int findMin(int v[], int low, int high){
    //Inizialmente il minimo e` il primo elemento del segmento
    int valMin=v[low];
    int posMin=low;

    //Scorro il segmento e aggiorno man mano il minimo e la sua posizione.

    for(int i=low+1; i<=high; i++){
        if(v[i]<valMin){
            //Aggiorno valore e posizione del minimo
            valMin = v[i];
            posMin = i;
        }
    }

    return posMin;
}

void scambia(int &a, int &b){
    int appo;
    appo = a;
    a = b;
    b = appo;
}

void selSort(int v[],int low, int high){
    int posMin;
    for(int i = low; i< high; i++){
        posMin = findMin(v,low,high);
        scambia(v[i],v[posMin]);
    }
    
}