#include <iostream>
#include "board.h"

int main()
{
    //Initialize game
    Board GameBoard;
    int temp;
    bool checkmate = false; 

    GameBoard.generateboard();

    while(checkmate == false)       //Basic game engine
    {
        GameBoard.displayboard();

        std::cin >> temp;
    }

    return 0;
}