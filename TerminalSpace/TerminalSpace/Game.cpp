#include <string>
#include <iostream>
#include "Game.h"
#include "ts_System.h"

using namespace std;

Game::Game()
{
    //ctor
    bool running = true;
    string input;
    System sys1;


}

Game::Listen()
{
    cout << "Awaiting command:" << endl;
    cin >> input;
}

Game::~Game()
{
    //dtor
    cout << "Destructor called" << endl;
}
