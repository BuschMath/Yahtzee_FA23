#ifndef SCORE_CARD_H
#define SCORE_CARD_H

#include <string>
#include <vector>

enum class CategoryType
{
	ACES,
	TWOS,
	THREES,
	FOURS,
	FIVES,
	SIXES,
	THREE_OF_A_KIND,
	FOUR_OF_A_KIND,
	FULL_HOUSE,
	SMALL_STRAIGHT,
	LARGE_STRAIGHT,
	YAHTZEE,
	CHANCE
};

struct Category
{
	std::string m_name;
	CategoryType m_type;
	int m_score;
};

class ScoreCard
{
public:
	ScoreCard();
	~ScoreCard();

	void AddCategory(CategoryType type, std::string name);
	void SetScore(CategoryType type, int score);
	int GetScore(CategoryType type) const;
	int GetTotalScore() const;
	int GetNumberOfCategories() const;

private:
	std::vector<Category> m_categories;
};

#endif // !SCORE_CARD_H



