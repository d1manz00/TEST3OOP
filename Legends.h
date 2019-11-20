#ifndef LEGENDS_H
#define LEGENDS_H

#include <iostream>
#include <string>

using namespace std;

class legends
{
protected:
    string name;
    int scare;
    int telepathy;
public:
    legends(string name, int scare, int telepathy);
    legends();
    ~legends();
    friend ostream & operator << (ostream & os, const legends ob);
    friend istream & operator >> (istream & is, legends ob);
};
#endif