#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
    std::cout << "Cat is created via Default constructor" <<  std::endl;
    type = "Cat";
    
};

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat copy constructor called" <<  std::endl;
    
};

Cat& Cat::operator=(const Cat& other)
{   
    std::cout << "Cat copy assignment called" <<  std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
    
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed" <<  std::endl;
    delete _brain;
};



void Cat::makeSound() const
{
    std::cout << "Cat: **MEOW MEOW MEOW**" << std::endl;
};