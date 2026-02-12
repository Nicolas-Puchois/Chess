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
    std::cout << "La valeur est : " << userInputValue;
    this->userInput = userInputValue;
    return userInputValue;
};

bool Game::UserInputIsValid(std::string userInputValue)
{

    bool inputIsValid = false;
    bool isInputTwoCharLong = userInputValue.length() == 2;
    if (!isInputTwoCharLong)
    {
        std::cout << inputIsValid;
        return inputIsValid;
    }
    if (userInputValue[0] >= 'A' && userInputValue[0] <= 'H')
    {
        if (userInputValue[1] >= '1' && userInputValue[1] <= '8')
        {
            inputIsValid = true;
        }
    }
    std::cout << inputIsValid;
    return inputIsValid;
}