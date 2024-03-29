#ifndef SALAMANDRES_H
#define SALAMANDRES_H

#include "Legends.h"
#include <iostream>

using namespace std;

class salamandres : public legends
{
    protected:
    double tempFire;
    public:
    salamandres():legends() {tempFire = 0;}
    salamandres(string name, int scare, int telepahty, int Health, double tempFire):legends(name, scare, telepathy, Health) {salamandres::tempFire = tempFire;}
    ~salamandres();
    void showFire ()
    {
        cout << "Temperature fire = " << tempFire <<endl;
    }
   /* friend ostream & operator << (ostream & os, const salamandres & ob) { os << "Имя: " <<legends::name <<endl; os << "Ужас: " << legends::scare <<endl; os << "Телепатия: " << legends::telepathy <<endl; os << "Здоровье: " << legends::Health <<endl; os << "Temperature fire = " << ob.tempFire << endl;}
    friend istream & operator >> (istream & is, salamandres & ob) {is >> (legends)ob; is >> tempFire;}*/
};

salamandres::~salamandres() = default;

#endif
