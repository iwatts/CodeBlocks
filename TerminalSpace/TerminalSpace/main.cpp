#include <string>
#include <iostream>
#include "ts_system.h"
#include "Game.h"

using namespace std;

int main()
{
    cout << "Welcome to Terminal Space!" << endl;
    Game gm;

    while(gm.running) {
        gm.Listen();
        // using if loop cause switch does not recognize strings
        // look into pointers
        if((gm.input == "q") || (gm.input == "quit")) {
            gm.running = false;
            // end the loop
        } else if((gm.input == "c") || (gm.input == "create")) {
            ts_system sys1;
            // create a system
        } else {
            // default handler
            cout << "You entered: " << gm.input << endl;
            cout << "Command currently not recognized. Enter q to quit." << endl;
        }
    }
    return 0;
}
