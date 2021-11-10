#include <iostream>
#include "board.h"

int main()
{
    //Initialize game
    Board GameBoard;
    bool checkmate = false; 

    GameBoard.generateboard();

    while(checkmate == false)       //Basic game engine
    {
        GameBoard.displayboard();
    }

    return 0;
}