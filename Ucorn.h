#ifndef UCORN_H
#define UCORN_H

#include <iostream>
#include "Legends.h"

using namespace std;

class ucorn : public legends
{
    protected:
    double rainbow;
    public:
    ucorn():legends() {this->rainbow = 0;}
    ucorn(string name, int scare, int telepahty, int Health, double rainbow):legends(name, scare, telepahty, Health) {this->rainbow = rainbow;}
    void showRainbow ()
    {
        cout << "Rainbow = " << rainbow <<endl;
    }
    ~ucorn();
   /* friend ostream & operator << (ostream & os, const ucorn ob) {os << "Имя: " <<legends::name <<endl; os << "Ужас: " << legends::scare <<endl; os << "Телепатия: " << legends::telepathy <<endl; os << "Здоровье: " << legends::Health <<endl; os << "Rainbow = " << ob.rainbow <<endl;}
    friend istream & operator >> (istream & is, ucorn ob) {is >> (legends)ob; is >> rainbow;}*/
};

ucorn::~ucorn() = default;

#endif