#include <iostream>
#include <fstream>
#include <cmath>

#define FW 10

using namespace std;


struct bersaglio{
    float x,y;
    float c;
    bool dist;
};


struct colpo{
    float theta,phi;
    float xf,yf;
    bool hit;

};


istream& operator>>(istream& in, bersaglio& obj);
ostream& operator<<(ostream& out, const bersaglio& obj);

bersaglio * leggiBersagliFile(const char nomefile[], int& n);


istream& operator>>(istream& in, colpo& obj);
ostream& operator<<(ostream& out, const colpo& obj);

colpo * leggiColpiFile(const char nomefile[], int& n);