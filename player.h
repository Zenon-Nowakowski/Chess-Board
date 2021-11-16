#include <iostream> 
#include "board.h"

#ifndef H_piece
#define H_piece

class Player : public Board
{
    public: 
    Player();                                            //default constructor
    char PieceType(int x, int y);                       //Check to see what kind of piece is being selected
    bool ValidateMove(char piece, int newx, int newy);  //validate the move of the piece, if not reset to picking a piece
    void Move(int x, int y, int newx, int newy);                            //Moves the selected piece
}; 

    Player::Player()                                    //default constructor
    {}

    char Player::PieceType(int x, int y)
    {
        return GameBoard.table[y][x];
    }

    bool Player::ValidateMove(char piece, int newx, int newy)
    {   
        return true;
    }

    void Player::Move(int x, int y, int newx, int newy)
    { 
        GameBoard.table[newy][newx] = GameBoard.table[y][x];
        GameBoard.table[y][x] = '-';
    }

#endif