#include "ScoreCard.h"

ScoreCard::ScoreCard()
{
}

ScoreCard::~ScoreCard()
{
}

void ScoreCard::AddCategory(CategoryType type, std::string name)
{
    Category temp;
    temp.m_type = type;
    temp.m_name = name;
	temp.m_score = -1;

    m_categories.push_back(temp);
}

// Rules need to be enforced before setting score
void ScoreCard::SetScore(CategoryType type, int score)
{
	for (int i = 0; i < m_categories.size(); i++)
	{
		if (m_categories[i].m_type == type)
		{
			m_categories[i].m_score = score;
		}
	}
}

int ScoreCard::GetScore(CategoryType type) const
{
	for (int i = 0; i < m_categories.size(); i++)
	{
		if (m_categories[i].m_type == type)
			return m_categories[i].m_score;
	}
}

// Rules need to be enforced before getting total score
int ScoreCard::GetTotalScore() const
{
	int total = 0;

	for (int i = 0; i < m_categories.size(); i++)
	{
		total += m_categories[i].m_score;
	}

    return 0;
}

int ScoreCard::GetNumberOfCategories() const
{
	return m_categories.size();
}
