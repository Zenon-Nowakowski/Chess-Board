#include <iostream>
#include "board.h"

int main()
{
    //Initial game launch
    bool checkmate = false; 

    GameBoard.generateboard();

    while(checkmate == false)       //Basic game engine
    {
        int array[1] = {(1,2)};
        std::cout << array[0] << std::endl;
        GameBoard.displayboard();
    }
}