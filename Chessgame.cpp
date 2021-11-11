#include <iostream>
#include "board.h"


int main()
{
    //Initial declarations 
    bool checkmate = false; 
    //Initialize game
    Board GameBoard;
    GameBoard.generateboard();

    while(checkmate == false)       //Basic game engine
    {
        GameBoard.displayboard();

        checkmate = true;
    }

    return 0;
}