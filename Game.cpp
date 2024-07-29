#include "Game.h"

/*
Function initializes the board of the white pieces
*/

void Game::initWhiteBoard()
{
	int i = 0;
	for (i = 0; i < BOARD_SIZE; i++)
	{
		this->_whitePieces[i] = 0;
	}

	this->_whitePieces[0] = 2;
	this->_whitePieces[11] = 5;
	this->_whitePieces[16] = 3;
	this->_whitePieces[18] = 5;
}

/*
Function initializes the board of the black pieces
*/
void Game::initBlackBoard()
{
	int i = 0;
	for (i = 0; i < BOARD_SIZE; i++)
	{
		this->_blackPieces[i] = 0;
	}

	this->_blackPieces[23] = 2;
	this->_blackPieces[12] = 5;
	this->_blackPieces[7] = 3;
	this->_blackPieces[5] = 5;
}

/*
C'tor - Function initializes the class variables
*/
Game::Game() : _currentTurn(WHITE), _countWhiteEaten(0), _countBlackEaten(0), _dice1(0), _dice2(0)
{
	this->initWhiteBoard();
	this->initBlackBoard();
}

Game::~Game()
{
}

/*
Function raffles a number between 1-6 (possible options of a dice)
output: The number that got raffled
*/
int Game::rollDice()
{
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> dis(1, 6);

	return dis(gen);
}

void Game::printBoard()
{
	const std::string reset = "\033[0m";
	const std::string cyan = "\033[36m";
	const std::string bright_yellow = "\033[93m";

	int i = 0;

	std::cout << "====================================================" << std::endl;
	std::cout << "||";
	for (i = BOARD_SIZE - 1; i >= BOARD_SIZE / 2; i--)
	{
		if (i == BOARD_SIZE / 4 * 3 - 1)
		{
			std::cout << "|";
		}
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
			std::cout << "   |";
		}
	}
	std::cout << "|" << std::endl;
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
	for (i = 0; i < BOARD_SIZE / 2; i++)
	{
		if (i == BOARD_SIZE / 4)
		{
			std::cout << "|";
		}
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
			std::cout << "   |";
		}
	}
	std::cout << "|" << std::endl;
	std::cout << "====================================================" << std::endl;
}