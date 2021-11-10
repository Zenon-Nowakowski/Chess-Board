#include <iostream> 

#ifndef H_board
#define H_board

struct Board
{
    public:
    Board();                //Default constructor
    void generateboard();
    void displayboard(); 
};

Board::Board()
{}


void Board::generateboard()
{
    char array[8][8];       //Game board will be a 2d array, or matrix
    std::cout << "\ntodo";
}

void Board::displayboard()
{
    std::cout << "\ntodo";
}
#endif