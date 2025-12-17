#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define FW 10

struct sfera{
    float r;
    char c;
};

istream& operator>>(istream& in, sfera& obj);
ostream& operator<<(ostream& out, const sfera& obj);

sfera * leggiSfereFile(const char nomefile[], int& nsfere);

int eliminaShift(sfera v[], int n, int pos);

int scremaSfere(sfera arr[], int used,  char col);



