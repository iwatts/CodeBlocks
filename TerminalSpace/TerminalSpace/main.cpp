#include <string>
#include <iostream>
#include "ts_System.h"
#include "Game.h"

using namespace std;

int main()
{
    cout << "Welcome to Terminal Space!" << endl;
    Game gm;
    //gm.Listen();
    while(gm.running) {
        //cout << gm.input << endl;
        gm.Listen();
        if((gm.input == "q") || (gm.input == "quit")) {
            gm.running = false;
        } else {
            cout << "You entered: " << gm.input << endl;
            cout << "Command currently not recognized. Enter q to quit." << endl;
        }
    }
    return 0;
}
