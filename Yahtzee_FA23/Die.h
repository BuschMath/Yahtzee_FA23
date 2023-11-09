#ifndef DIE_H
#define DIE_H

class Die
{
public:
	Die();
	Die(int numSides);

	int roll();
	int getValue();
	int getNumSides();
	void setNumSides(int numSides);

private:
	int m_numSides;
	int m_value;
};

#endif // !DIE_H

