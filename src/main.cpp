#include "Board.hpp"
#include "Game.hpp"
#include <string>

int main()
{
    Board board;
    Game game;
    board.display();
    game.saveUserInput();
}
