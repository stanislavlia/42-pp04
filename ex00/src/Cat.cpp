#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat is created via Default constructor" <<  std::endl;
    type = "Cat";
};

Cat::~Cat()
{
    std::cout << "Cat is destroyed" <<  std::endl;
};

void Cat::makeSound() const
{
    std::cout << "Cat: **MEOW MEOW MEOW**" << std::endl;
};