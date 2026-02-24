#include "Game.hpp"
#include <iostream>
#include <string>
#include <algorithm>

Game::Game() {};

/**
 * @brief
 *
 */
std::string Game::saveUserInput()
{
    std::string userInputValue;
    std::cout
        << "Entrer la case: ";
    std::cin >> userInputValue;
    std::transform(userInputValue.begin(), userInputValue.end(), userInputValue.begin(), ::toupper);
    this->userInput = userInputValue;
    return userInputValue;
};

bool Game::UserInputIsValid(std::string userInputValue)
{

    bool inputIsValid = false;
    bool isInputTwoCharLong = userInputValue.length() == 2;
    if (!isInputTwoCharLong)
    {
        return inputIsValid;
    }
    if (userInputValue[0] >= 'A' && userInputValue[0] <= 'H')
    {
        if (userInputValue[1] >= '1' && userInputValue[1] <= '8')
        {
            inputIsValid = true;
        }
    }
    return inputIsValid;
}

bool Game::convertEntryintoCoordonnees(std::string userInputValue, int &row, int &col)
{
    int firstCharIntoAscii = int(userInputValue[0]);
    int firstCharIntoCoodonate = firstCharIntoAscii - 'A';
    int secondCharIntoAscii = int(userInputValue[1]);
    int secondCharIntoCoodonate = secondCharIntoAscii - '1';
    return true;
}