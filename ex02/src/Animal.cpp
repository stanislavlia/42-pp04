#include "Animal.hpp"

Animal::Animal() : type("Default")
{
    std::cout << "Base Animal Default constructor is created" << std::endl;
};


Animal::Animal(const Animal& other) : type(other.type)
{
    std::cout << "Base Animal copy constructor is called" << std::endl;
};

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Base Animal copy assignment is called" << std::endl;
    type = other.type;
    
    return *this;
};

Animal::~Animal()
{
    std::cout << "Base Animal instance is destroyed" << std::endl;
};

std::string Animal::getType() const
{
    return type;
};