#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor is called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.getType())
{
    std::cout << "WrongAnimal copy constructor is called" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy assignment is called" << std::endl;
    type = other.getType();
    return *this;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal  is destroyed" << std::endl;
};

std::string WrongAnimal::getType() const
{
    return type;
};

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal: **SOME WRONG ANIMAL's SOUND**" << std::endl;
};