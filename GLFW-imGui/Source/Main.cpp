#include "Game.h"


int main()
{
    Game game;

    if (game.Init())
    {
        game.RunMainLoop();
    }

    return 0;
}