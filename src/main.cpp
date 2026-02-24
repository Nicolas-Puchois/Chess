#include "Board.hpp"
#include "Game.hpp"
#include <string>

int main()
{
    int row, col;
    Board board;
    Game game;
    board.display();
    game.saveUserInput();
    game.UserInputIsValid(game.userInput);
    game.convertEntryintoCoordonnees(game.userInput, row, col);
}
