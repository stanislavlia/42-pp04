#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     Animal* j = new Dog();
//     Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     std::cout << "\n========Same but with Wrong Cat included==========\n" << std::endl;

//     const WrongAnimal* meta2 = new WrongAnimal();
//     Animal* j2 = new Dog();
//     WrongAnimal* i2 = new WrongCat();

//     std::cout << j2->getType() << " " << std::endl;
//     std::cout << i2->getType() << " " << std::endl;
//     i2->makeSound(); //will output the cat sound!
//     j2->makeSound();
//     meta2->makeSound();

//     return 0;
// }

#include "Brain.hpp"
int main()
{

	Cat c;
	Cat c2;

	c = c2;

	Cat c3(c2);

	

	return 0;
};