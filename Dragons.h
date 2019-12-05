#ifndef DRAGONS_H
#define DRAGONS_H

#include "Legends.h"
#include <iostream>

using namespace std;

class dragons : public legends
{
    protected:
    double maxHight;
    public:
    void showHight ()
    {
        cout << "Maximum Hight: " << maxHight <<endl;
    }
    dragons():legends() {this->maxHight = 0;}
    dragons(string name, int scare, int telepahty, int Health, double maxHight):legends(name, scare, telepathy, Health) {if (maxHight >= 0) {this->maxHight = maxHight;} else return;}
    ~dragons();
   /* friend ostream & operator << (ostream & os, const dragons ob) { os << "Имя: " <<legends::name <<endl; os << "Ужас: " << legends::scare <<endl; os << "Телепатия: " << legends::telepathy <<endl; os << "Здоровье: " << legends::Health <<endl; os << "MaxHight = " << ob.maxHight <<endl;}
    friend istream & operator >> (istream & is, dragons ob) {is >> (legends)ob; is >> ob.maxHight;}*/
};

dragons::~dragons() = default;

#endif