#ifndef SALAMANDRES_H
#define SALAMANDRES_H
#include "Legends.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
using namespace std;
class salamandres : public legends
{
    protected:
    static double tempFire;
    public:
    salamandres():legends() {tempFire = 0;}
    salamandres(string name, int scare, int telepahty, double tempFire):legends(name, scare, telepathy) {salamandres::tempFire = tempFire;}
    ~salamandres();
    friend ostream & operator << (ostream & os, const salamandres & ob) { os << (legends) ob; os << "Temperature fire = " << ob.tempFire << endl;}
    friend istream & operator >> (istream & is, salamandres & ob) {is >> (legends)ob; is >> tempFire;}
   // friend std::ostream& operator<< (std::ostream &out, const Point &point);
};

salamandres::~salamandres() = default;

#endif
