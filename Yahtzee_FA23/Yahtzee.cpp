#include "Yahtzee.h"
#include <iostream>

Yahtzee::Yahtzee()
{
	dice.resize(5);

	scoreCards.resize(10);

	setupScoreCards();
}

void Yahtzee::playGame()
{
for (int i = 0; i < scoreCards.size(); i++)
	{
		//roll dice
		rollDice();

		//display dice
		displayDice();

		//display score card
		DisplayScoreCard();

		//choose category
		int category = chooseCategory();

		//calculate score
		int score = calculateScore(category);

		//update score card
		scoreCards[i].UpdateScoreCard(category, score);
	}
}

void Yahtzee::setupScoreCards()
{
	for (int i = 0; i < scoreCards.size(); i++)
	{
		scoreCards[i].AddCategory(CategoryType::ACES, "Aces");
		scoreCards[i].AddCategory(CategoryType::TWOS, "Twos");
		scoreCards[i].AddCategory(CategoryType::THREES, "Threes");
		scoreCards[i].AddCategory(CategoryType::FOURS, "Fours");
		scoreCards[i].AddCategory(CategoryType::FIVES, "Fives");
		scoreCards[i].AddCategory(CategoryType::SIXES, "Sixes");
		scoreCards[i].AddCategory(CategoryType::THREE_OF_A_KIND, "Three of a Kind");
		scoreCards[i].AddCategory(CategoryType::FOUR_OF_A_KIND, "Four of a Kind");
		scoreCards[i].AddCategory(CategoryType::FULL_HOUSE, "Full House");
		scoreCards[i].AddCategory(CategoryType::SMALL_STRAIGHT, "Small Straight");
		scoreCards[i].AddCategory(CategoryType::LARGE_STRAIGHT, "Large Straight");
		scoreCards[i].AddCategory(CategoryType::YAHTZEE, "Yahtzee");
		scoreCards[i].AddCategory(CategoryType::CHANCE, "Chance");
	}
}

void Yahtzee::rollDice()
{
	for (int i = 0; i < dice.size(); i++)
	{
		dice[i].roll();
	}
}

void Yahtzee::displayDice()
{
	for (int i = 0; i < dice.size(); i++)
	{
		std::cout << dice[i].getValue() << " ";
	}
	std::cout << std::endl;
}

void Yahtzee::DisplayScoreCard()
{
	for (int i = 0; i < scoreCards.size(); i++)
	{
		std::cout << "Score Card " << i + 1 << std::endl;
		
		for (int i = 0; i < scoreCards[i].GetNumberOfCategories(); i++)
		{
			switch (i) {
				case 0:
					std::cout << "Aces: ";
					std::cout << scoreCards[i].GetScore(CategoryType::ACES) << std::endl;
					break;
				case 1:
					std::cout << "Twos: ";
					std::cout << scoreCards[i].GetScore(CategoryType::TWOS) << std::endl;
					break;
				case 2:
					std::cout << "Threes: ";
					std::cout << scoreCards[i].GetScore(CategoryType::THREES) << std::endl;
					break;
				case 3:
					std::cout << "Fours: ";
					std::cout << scoreCards[i].GetScore(CategoryType::FOURS) << std::endl;
					break;
				case 4:
					std::cout << "Fives: ";
					std::cout << scoreCards[i].GetScore(CategoryType::FIVES) << std::endl;
					break;
				case 5:
					std::cout << "Sixes: ";
					std::cout << scoreCards[i].GetScore(CategoryType::SIXES) << std::endl;
					break;
				case 6:
					std::cout << "Three of a Kind: ";
					std::cout << scoreCards[i].GetScore(CategoryType::THREE_OF_A_KIND) << std::endl;
					break;
				case 7:
					std::cout << "Four of a Kind: ";
					std::cout << scoreCards[i].GetScore(CategoryType::FOUR_OF_A_KIND) << std::endl;
					break;
				case 8:
					std::cout << "Full House: ";
					std::cout << scoreCards[i].GetScore(CategoryType::FULL_HOUSE) << std::endl;
					break;
				case 9:
					std::cout << "Small Straight: ";
					std::cout << scoreCards[i].GetScore(CategoryType::SMALL_STRAIGHT) << std::endl;
					break;
				case 10:
					std::cout << "Large Straight: ";
					std::cout << scoreCards[i].GetScore(CategoryType::LARGE_STRAIGHT) << std::endl;
					break;
				case 11:
					std::cout << "Yahzee: ";
					std::cout << scoreCards[i].GetScore(CategoryType::YAHTZEE) << std::endl;
					break;
				case 12:
					std::cout << "Chance: ";
					std::cout << scoreCards[i].GetScore(CategoryType::CHANCE) << std::endl;
					break;
			}
		}
	}
}
