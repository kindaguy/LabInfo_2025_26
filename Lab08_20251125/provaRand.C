#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    for(int i=0; i< 5; i++)
        cout << endl << rand();

    cout << endl;

    return 0;

}