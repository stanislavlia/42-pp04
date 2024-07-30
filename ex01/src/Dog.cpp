#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
    std::cout << "Dog is created via Default constructor" <<  std::endl;
    type = "Dog";
};

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog copy constructor called" <<  std::endl;
};

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment called" <<  std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
    
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog is destroyed" << std::endl;
};

void    Dog::makeSound() const
{
    std::cout << "Dog: **BARKING LOUDLY...**" << std::endl;
};