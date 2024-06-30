#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string name);
		virtual ~Animal();
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif