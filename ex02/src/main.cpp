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

    // It won't compile since Animal - Absttract class now

    //Animal  a1 = Animal(); 

    delete i;
    delete j;

    return 0;
}
