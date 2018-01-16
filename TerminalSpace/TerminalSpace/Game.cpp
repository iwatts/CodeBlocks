#include <string>
#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{
    //ctor
    bool running = true;
    string input;

}

Game::Listen()
{
    // Listens for user input and sets it to input var
    cout << "Awaiting command:" << endl;
    cin >> input;
}

Game::~Game()
{
    //dtor
    cout << "Destructor called" << endl;
}
