#ifndef SALAMANDRES_H
#define SALAMANDRES_H
#include "legends.h"
using namespace std;
class salamandres : public legends
{
    protected:
    double tempFire;
    public:
    salamandres():legends() {tempFire = 0;}
    salamandres(string name, int scare, int telepahty, double tempFire):legends(name, scare, telepathy) {this->tempFire = tempFire;}
    ~salamandres();
    friend ostream & operator << (istream & os, const salamandres ob) {os<<(legends)ob; os << "Temperature fire = " << ob.tempFire <<endl;}
    friend istream & operator >> (istream & is, salamandres ob) {is >> (legends)ob; is >> tempFire;}
};
#endif
