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
    return userInputValue;
};