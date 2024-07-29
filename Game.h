#pragma once

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <random>

#define BOARD_SIZE 24
#define WHITE true
#define BLACK !WHITE

class Game
{
public:
	Game();
	~Game();
	
	bool startGame();
	int rollDice();
	void printBoard();
	

private:
	bool _currentTurn;

	int _whitePieces[BOARD_SIZE];
	int _blackPieces[BOARD_SIZE];

	int _countWhiteEaten;
	int _countBlackEaten;

	int _dice1;
	int _dice2;

	void initWhiteBoard();
	void initBlackBoard();
};
#endif // !GAME_H
