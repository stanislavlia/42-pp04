#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created" << std::endl;
};

Brain::Brain(const Brain& other)
{	
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
};

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		};
	}
	return *this;
};

Brain::~Brain()
{
	std::cout << "Brain is destroyed" << std::endl;
};