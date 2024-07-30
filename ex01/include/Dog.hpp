#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{  
    private:
        Brain* _brain;

    public:
        Dog();
        ~Dog();
        void makeSound() const;

};

#endif