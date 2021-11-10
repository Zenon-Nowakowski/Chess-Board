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
    char table[8][8];       //Game board will be a 2d array, or matrix
    for(int i = 0; i > 7; i++)
    {
        for(int j = 0; j > 7; j++)
        {
            if(i == 0)
            {
                switch (j)
                {
                case 0:
                    table[i][j] = 'T';
                    break; 
                case 1:
                    table[i][j] = 'H';
                    break;
                case 2:
                    table[i][j] = 'B';
                    break;
                case 3:
                    table[i][j] = 'K';
                    break;
                case 4:
                    table[i][j] = 'Q';
                    break;
                }
                table[i][j] = table[i][j-j%4-2];
            }
            else if(i == 7)
            {

            }
            else 
            {
                table[i][j]= '-';
            }
        }
    }
}

void Board::displayboard()
{
    std::cout << "\ntodo";
}
#endif