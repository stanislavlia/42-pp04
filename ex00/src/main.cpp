#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "\n========Same but with Wrong Cat included==========\n" << std::endl;

    const WrongAnimal* meta2 = new WrongAnimal();
    Animal* j2 = new Dog();
    WrongAnimal* i2 = new WrongCat();

    std::cout << j2->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;
    i2->makeSound(); //will output the wrong animal instead of wrong Cat
    j2->makeSound();
    meta2->makeSound();

    std::cout << "\n========CLEANING==========\n" << std::endl;
    delete meta;
    delete i;
    delete j;
    delete i2;
    delete j2;
    delete meta2;

    return 0;
}