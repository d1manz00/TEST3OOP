#ifndef UCORN_H
#define UCORN_H
#include "legends.h"
using namespace std;
class ucorn : public legends
{
    protected:
    double rainbow;
    public:
    ucorn() {this->rainbow = 0;}
    ucorn(double rainbow) {this->rainbow = rainbow;}
    ~ucorn();
    friend ostream & operator << (istream & os, const ucorn ob) {os<<(legends)ob; os << "Rainbow = " << ob.rainbow <<endl;}
    friend istream & operator >> (istream & is, ucorn ob) {is >> (legends)ob; is >> rainbow;}
};
#endif