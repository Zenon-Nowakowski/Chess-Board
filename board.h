#include <iostream> 
#include <ctype.h>

#ifndef H_board
#define H_board

class Board
{
    public:
    Board();                                                    //Default constructor
    void generateboard();
    void displayboard(); 
    protected: 
    char table[8][8];                                           //Game board will be a 2d array, or matrix
};

Board::Board()
{}


void Board::generateboard()
{
    //temp values used to cut down on bloat
    int temp = 3;
    int temp2 = 7;

    for(int i = 0; i <= 7; i++)
    {
        for(int j = 0; j <= 7; j++)
        {
            if(i == 0)                                          //the 0th or first row, is filled with special pieces
            {
                 if(j <= 4)
                {
                    switch (j)
                    {
                    case 0:
                        table[i][j] = 'R';
                        break; 
                    case 1:
                        table[i][j] = 'H';
                        break;
                    case 2:
                        table[i][j] = 'B';
                        break;
                    case 3:
                        table[i][j] = 'Q';
                        break;
                    case 4:
                        table[i][j] = 'K';
                        break;
                    }
                }
                else
                {
                table[i][j] = table[i][j-temp];                 //to cut down on reliance on loops within loops, this simply mirrors the other part of the board before Q
                temp+=2;
                }
            }
            else if(i == 1 || i == 6)
            {
                table[i][j] = 'P';
                if(i == 6)
                    table[i][j] = 'p';                          //If on bottom side set to lower case
            }
            else if(i == 7)
            { 
                table[i][j] = tolower(table[0][temp2]);         //Mirrors row 0 to row 7 to cut down on bloat, sets this side as lowercase
                temp2--;

            }
            else
                table[i][j]= '-';                               //Default perameter, fills as a blank space.
        }
    }
}

void Board::displayboard()
{
    std::cout << "  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7  \n";
    for(int i = 0; i <= 7; i++)
    {
        std::cout << i << " | ";
        for(int j = 0; j <= 7; j++)
        {
            std::cout << table[i][j];
            std::cout << "   ";
        }
        std::cout << std::endl;
    }
}
#endif