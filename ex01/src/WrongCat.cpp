#include "WrongCat.hpp"

WrongCat::WrongCat()
{   
    std::cout << "WrongCat default constructor is called" << std::endl;
    type = "WrongCat";
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat  is destroyed" << std::endl;
};

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: **WRONG MEOW MEOW**" << std::endl;
};