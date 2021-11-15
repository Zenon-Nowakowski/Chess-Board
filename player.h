#include <iostream> 
#include "board.h"

#ifndef H_piece
#define H_piece

class Player : protected Board
{
    public: 
    Player();                                            //default constructor
    char PieceType(int x, int y);                       //Check to see what kind of piece is being selected
    bool ValidateMove(char piece, int newx, int newy);  //validate the move of the piece, if not reset to picking a piece
    void Move(int x, int y);                            //Moves the selected piece
}; 

    Player::Player()
    {}

    char Player::PieceType(int x, int y)
    {
        char piece = '-';                                   //Default value to ensure lack of colisions
        table[y][x] = piece;
        switch(piece)
            {
                case 'P':
                case 'p':
                    if(y == 6 || y == 1)
                        {
                            return 'P';                     //Signify first pawn move, meaning they can move one or two spaces
                        }
                    else
                        return 'p';                         //default perameter of a pawn piece


                case 'T':
                case 't':

                case 'H':
                case 'h':

                case 'B':
                case 'b':

                case 'Q':
                case 'q': 

                case 'K':
                case 'k':

                default: 
                std::cout << "\nNo piece at coordinate location...\n";
                return 'i';                                                 //i will be error code for invalid
            }

        return piece;
    }

    bool Player::ValidateMove(char piece, int newx, int newy)
    {   
        
    }

    void Player::Move(int x, int y)
    { 
        
    }

#endif