#ifndef YAHTZEE_H
#define YAHTZEE_H

#include "Die.h"
#include "ScoreCard.h"

#include <vector>

class Yahtzee
{
public:
	Yahtzee();

	void playGame();

private:
	std::vector<Die> dice;
	std::vector<ScoreCard> scoreCards;

	void setupScoreCards();
	void rollDice();
	void displayDice();
	void DisplayScoreCard();
};

#endif // !YAHTZEE_H




