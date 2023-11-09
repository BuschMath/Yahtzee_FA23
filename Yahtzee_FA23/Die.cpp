#include "Die.h"

#include <cstdlib>
#include <ctime>

Die::Die() : m_numSides(6), m_value(1)
{
	srand(time(NULL));
}

Die::Die(int numSides) : m_numSides(numSides), m_value(1)
{
	srand(time(NULL));
}

int Die::roll()
{
	return m_value = rand() % m_numSides + 1;
}

int Die::getValue()
{
	return m_value;
}

int Die::getNumSides()
{
	return m_numSides;
}

void Die::setNumSides(int numSides)
{
	m_numSides = numSides;
}
