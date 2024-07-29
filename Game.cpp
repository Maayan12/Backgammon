#include "Game.h"

void Game::printBoard()
{
	const std::string reset = "\033[0m";
	const std::string cyan = "\033[36m";
	const std::string bright_yellow = "\033[93m";

	int i = 0;

	std::cout << "====================================================" << std::endl;
	std::cout << "||";
	for (i = BOARD_SIZE-1; i >= BOARD_SIZE/2; i--)
	{
		if (this->_whitePieces[i] != 0)
		{
			std::cout << " " << bright_yellow << _whitePieces[i] << reset << " |";
		}
		else if (this->_blackPieces[i] != 0)
		{
			std::cout << " " << cyan << _blackPieces[i] << reset << " |";
		}
		else
		{
			std::cout << "    ";
		}
	}
	std::cout << "|" << std::endl;
	std::cout << "|| 5 |   |   |   |   |   || 5 |   |   |   |   |   ||" << std::endl;
	std::cout << "||   |   |   |   |   |   ||   |   |   |   |   |   ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||                       ||                       ||" << std::endl;
	std::cout << "||   |   |   |   |   |   ||   |   |   |   |   |   ||" << std::endl;
	std::cout << "||";
	for ( i = BOARD_SIZE/2-1; i >= 0; i--)
	{
		if (this->_whitePieces[i] != 0)
		{
			std::cout << " " << bright_yellow << _whitePieces[i] << reset << " |";
		}
		else if (this->_blackPieces[i] != 0)
		{
			std::cout << " " << cyan << _blackPieces[i] << reset << " |";
		}
		else
		{
			std::cout << "    ";
		}
	}
	std::cout << "|" << std::endl;
	std::cout << "====================================================" << std::endl;
}