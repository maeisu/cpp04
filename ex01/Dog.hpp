#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog& Dog);
		Dog& operator=(const Dog& dog);
		void makeSound() const;
};

#endif