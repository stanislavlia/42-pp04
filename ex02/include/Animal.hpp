#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal(); //Making base class destructor virtual guarantees 
                           // that the object of derived class is destructed properly,
                           // i.e., both base class and derived class destructors are called
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);

        virtual void makeSound() const = 0; //now pure-virtual
        std::string getType() const;

};

#endif