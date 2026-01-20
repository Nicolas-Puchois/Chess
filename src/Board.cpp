#include "Board.hpp"
#include <iostream>
#include <string>
#include <algorithm>
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

void Board::getCoordonate()
{
    std::cout << "Entrer la case: ";
    std::cin >> userInput;
    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
    std::cout << "La valeur est : " << userInput;
}