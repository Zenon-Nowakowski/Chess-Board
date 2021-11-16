#include <iostream>
#include "board.h"
#include "player.h"

int main()
{
    //Initial declarations 
    bool checkmate = false; 
    int x = 0, y = 0, newx = 0, newy = 0;
    char piece = '-', fill;
    //Initialize game
    Player p1;
    GameBoard.generateboard();
    std::cout << "Welcome to Chessgame the rules are standard chess\nInput is done as follows: input the x value, a \",\" and the y value. \nExample: \"0,7\" will select the Rook, or R, on your left side.\n";

    while(checkmate == false)       //Basic game engine
    {
        GameBoard.displayboard();

        std::cout << "\nPickup a piece:";
        std::cin >> x >> fill >> y;
        piece = p1.PieceType(x, y); 

        if(piece == '-') 
        {
            std::cout << "No piece at selected location\n";
        }
        else
        {
        std::cout << "\nYou picked up a " << piece << ", pick where to move:";
        std::cin >> newx >> fill >> newy;
        }

        if(!p1.ValidateMove(piece,x,y))
        {
            std::cout << "\nNot a valid move try again\n";
        }
        else
        {
            p1.Move(x,y,newx,newy);
        }

        GameBoard.displayboard();

        checkmate = true;
    }

    return 0;
}