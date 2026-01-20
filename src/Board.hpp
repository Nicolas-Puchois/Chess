#include <string>
class Board
{
private:
    char grid[8][8];
    std::string userInput;

public:
    Board(); // constructeur
    void display() const;
    void getCoordonate();
};
