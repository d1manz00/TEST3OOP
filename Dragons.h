#ifndef DRAGONS_H
#define DRAGONS_H
#include "legends.h"
#include <iostream>
using namespace std;
class dragons : public legends
{
    protected:
    double maxHight;
    public:
    dragons():legends() {this->maxHight = 0;}
    dragons(string name, int scare, int telepahty, double maxHight):legends(name, scare, telepathy) {this->maxHight = maxHight;}
    ~dragons();
    friend ostream & operator << (ostream & os, const dragons ob) {os<<(legends)ob; os << "MaxHight = " << ob.maxHight <<endl;}
    friend istream & operator >> (istream & is, dragons ob) {is >> (legends)ob; is >> ob.maxHight;}
};
#endif