#include <iostream>
#include "legends.h"
#include "dragons.h"
#include "salamandres.h"
#include "ucorn.h"
#include <ctime>
using namespace std;
int main()
{
    int command;
    legends legend;
    while (true)
    {
        cout <<  "choise you fighter:" << endl << "1) Draco" << endl << "2) Salamandra" << endl << "3) Ucorn" <<endl;
        cin >> command;
        switch (command)
        {
            case 1:
            {
                dragons dragon ("Draco", 8, 6, 750, 10);
                dragon.showDefault();
                dragon.showHight();
                break;
            }
            case 2:
            {
                salamandres salamandr ("Salamandra", 6, 2, 400, 10);
                salamandr.showDefault();
                salamandr.showFire();
                break;
            }
            case 3:
            {
                ucorn ucor ("Ucorn", 0, 2, 600, 10);
                ucor.showDefault();
                ucor.showRainbow();
                break;
            }
            default:
                return -1;
        }

    }
}