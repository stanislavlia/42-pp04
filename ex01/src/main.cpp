#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; //shouldn't create leak
    delete i;


    Animal* animals[4];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();

    for (int j = 2; j < 4; j++)
        animals[j] = new Cat();

    for (int k = 0; k < 4; k++)
        delete animals[k]; 

    return 0;
}
