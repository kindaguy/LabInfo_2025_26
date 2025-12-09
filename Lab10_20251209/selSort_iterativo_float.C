#include <iostream>

using namespace std;

#define N 20
#define VALMAX 100

//Ordina un segmento dell'array v definito dagli indici low e high
void selSort(float v[],int low, int high);
//Determina e restituisce la posizione dell'elemento minimo del segmento [low,...,high] dell'array v
int findMin(float v[], int low, int high);
//Scambia due valori.
void scambia(float &a,float &b);


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



int findMin(float v[], int low, int high){
    //Inizialmente il minimo e` il primo elemento del segmento
    float valMin=v[low];
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

void scambia(float &a, float &b){
    float appo;
    appo = a;
    a = b;
    b = appo;
}

void selSort(float v[],int low, int high){
    int posMin;
    for(int i = low; i< high; i++){
        posMin = findMin(v,i,high);
        scambia(v[i],v[posMin]);
    }
    
}

/*In generale, per array di tipo T avro`:


int findMin(T v[], int low, int high){
    //Inizialmente il minimo e` il primo elemento del segmento
    T valMin=v[low];
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



void scambia(T &a, T &b){
    T appo;
    appo = a;
    a = b;
    b = appo;
}



void selSort(T v[],int low, int high){
    int posMin;
    for(int i = low; i< high; i++){
        posMin = findMin(v,i,high);
        scambia(v[i],v[posMin]);
    }
    
}

*/