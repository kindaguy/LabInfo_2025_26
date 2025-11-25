#include <iostream>
#include <fstream>

using namespace std;

int binSearch(int v[], int left, int right, int elem);
int main(){ 

    int vIntOdd[] = {1,2,3,4,5,6,7,8,9};
    int vIntEven[] = {1,2,3,4,5,6,7,8,9,10};

    cout << endl << binSearch(vIntOdd,0,8,9) << endl;
    cout << endl << binSearch(vIntEven,0,9,10) << endl;
    return 0;
}

int binSearch(int v[], int left, int right, int elem){
    int mid;
    //Se right < left: il range non individua un segmento dell'array...
    if(right<left) return -1;
    //C'e` almeno un elemento
    else{
        //Qui faccio la divisione intera in modo intenzionale: devo ottenere un intero.
        mid = (left+right)/2;//Elemento in mezzo al segmento di array considerato
        //NOTA: se left == right, ovvero range copre un singolo elemento dell'array
        // (left+right)/2 == left..o right, che tanto sono uguali 
        if(v[mid] == elem) return mid; //Contr
        else{
            
            if(elem > v[mid]) 
                return binSearch(v,mid+1,right,elem);
                //!!!richiamo la funzione binSearch sul segmento di destra, perche''
                //se elem c'e` si trova li`
            else 
                return binSearch(v,left,mid-1,elem);
                //!!!richiamo la funzione binSearch sul segmento di sinistra, perche''
                //se elem c'e` si trova li`
        }
    }
}