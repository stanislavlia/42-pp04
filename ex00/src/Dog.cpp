#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog is created via Default constructor" <<  std::endl;
    type = "Dog";
};

Dog::~Dog()
{
    std::cout << "Dog is destroyed" << std::endl;
};

void    Dog::makeSound() const
{
    std::cout << "Dog: **BARKING LOUDLY...**" << std::endl;
};