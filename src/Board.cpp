#include "Board.hpp"
#include <iostream>
#include <string>
#include <algorithm>

/**
 * @brief set the board display
 *
 * @param grid[row][col]: set an array with row and col
 * @param row : number of row of the array
 * @param col: number of column of the array
 */
Board::Board()
{
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            grid[row][col] = '-';
        }
    }
}
/**
 * @brief manage display of row number and column letter
 *
 * @param row : number of row of the array
 * @param col: number of column of the array
 *
 * @return void
 */
void Board::display() const
{
    std::cout << "  A B C D E F G H\n";
    for (int row = 0; row < 8; row++)
    {
        std::cout << 8 - row << " ";

        for (int col = 0; col < 8; col++)
        {
            std::cout << grid[row][col] << " ";
        }
        std::cout << "\n";
    }
}
