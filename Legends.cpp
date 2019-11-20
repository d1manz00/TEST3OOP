#ifndef LEGENDS_CPP
#define LEGENDS_CPP
#include "Legends.h"
legends::legends(string name, int scare, int telepathy)
{
    this->name = name;
    this->scare = scare;
    this->telepathy = telepathy;
}
legends::legends ()
{
    name = "NO_NAME";
    scare = 0;
    telepathy = 0;
}
ostream & operator << (ostream & os, const legends ob)
{
    os << "Name = " << ob.name <<endl;
    os << "Scare = " << ob.scare <<endl;
    os << "telepathy = " << ob.telepathy <<endl;
}
istream & operator >> (istream & is, legends ob)
{
    is >> ob.scare;
    is >> ob.name;
    is >> ob.telepathy;
}

legends::~legends() = default;

#endif