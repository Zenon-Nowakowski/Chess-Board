#include <iostream>
#include "board.h"
#include "player.h"

int main()
{
    //Initial declarations 
    bool checkmate = false; 
    int x = 0, y = 0;
    char piece = '-', fill, piece;
    //Initialize game
    Board GameBoard;
    Player p1;
    GameBoard.generateboard();
    std::cout << "Welcome to Chessgame the rules are standard chess\nInput is done as follows: input the x value, a \",\" and the y value. \nExample: \"0,7\" will select the tower, or t, on your left side.\n";

    while(checkmate == false)       //Basic game engine
    {
        GameBoard.displayboard();

        std::cout << "\nPickup a piece:";
        std::cin >> x >> fill >> y;
        piece = p1.PieceType(x, y); 

        std::cout << "\nYou picked up a " << piece << ", pick where to move:";
        std::cin >> x >> fill >> y;

        if(!p1.ValidateMove(piece,x,y))
        {
            std::cout << "Not a valid move try again\n";
        }

        checkmate = true;
    }

    return 0;
}