#include <string>
class Game
{
public:
    std::string userInput;

    Game(); // constructor
    std::string saveUserInput();
    bool UserInputIsValid(std::string);
};