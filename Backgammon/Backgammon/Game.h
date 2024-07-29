#pragma once

#ifndef GAME_H
#define GAME_H

#include <iostream>

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
	bool currentTurn;

	int whitePieces[BOARD_SIZE];
	int blackPieces[BOARD_SIZE];

	int countWhtieEaten;
	int countBlackEaten;

	int dice1;
	int dice2;

};
#endif // !GAME_H
