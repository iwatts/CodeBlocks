#include <iostream>
#include "Game.h"
#include "System.h"

using namespace std;

Game::Game()
{
    //ctor
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
