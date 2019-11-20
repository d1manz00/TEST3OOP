#ifndef UCORN_H
#define UCORN_H

#include <iostream>
#include "Legends.h"

using namespace std;

class ucorn : public legends
{
    protected:
    static double rainbow;
    public:
    ucorn():legends() {this->rainbow = 0;}
    ucorn(string name, int scare, int telepahty, int Health, double rainbow):legends(name, scare, telepahty, Health) {this->rainbow = rainbow;}
    ~ucorn();
    friend ostream & operator << (ostream & os, const ucorn ob) {os << (legends)ob; os << "Rainbow = " << ob.rainbow <<endl;}
    friend istream & operator >> (istream & is, ucorn ob) {is >> (legends)ob; is >> rainbow;}
};

ucorn::~ucorn() = default;

#endif