#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>


class Game
{
    public:
        std::string input;
        bool running;
        Game();
        Listen();
        virtual ~Game();

    protected:

    private:
};

#endif // GAME_H
