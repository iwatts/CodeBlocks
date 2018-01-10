#include <iostream>
#include "System.h"
#include "Game.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Game gm;
    gm.Listen();
    if(gm.input == 'q') {
        //cout << gm.input << endl;
        return 0;
    } else {
        cout << gm.input << endl;
        gm.Listen();
    }
}
