#ifndef LEGENDS_CPP
#define LEGENDS_CPP

#include "Legends.h"

#include <utility>

void legends::showDefault()
{
    cout << "Name = " << name <<endl;
    cout << "Scare = " << scare <<endl;
    cout << "telepathy = " << telepathy <<endl;
    cout << "Health = " << Health <<endl;
}

legends::legends(string name, int scare, int telepathy, int Health)
{
    if (((scare >= 0)&&(telepathy >= 0))||((scare <= 10)&&(telepathy <=10 )))
    {
        this->name = std::move(name);
        this->scare = scare;
        this->telepathy = telepathy;
        this->Health = Health;
    }
    else
    {
        cout << "False parameters. Close apps." <<endl;
        return;
    }

}
legends::legends ()
{
    name = "NO_NAME";
    scare = 0;
    telepathy = 0;
    Health = 1;
}
/*
ostream & operator << (ostream & os, const legends ob)
{
    os << "Name = " << ob.name <<endl;
    os << "Scare = " << ob.scare <<endl;
    os << "telepathy = " << ob.telepathy <<endl;
    os << "Health = " << ob.Health <<endl;
    return os;
}
istream & operator >> (istream & is, legends ob)
{
    is >> ob.scare;
    is >> ob.name;
    is >> ob.telepathy;
    is >> ob.Health;
    return is;
}
*/
legends::~legends() = default;

#endif