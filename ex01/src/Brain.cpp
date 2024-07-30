#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
};

Brain::Brain(const Brain& other) : _ideas(other._ideas)
{	
	std::cout << "Brain copy constructor called" << std::endl;
	
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