#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>
#include <string>

class A_Animal {
	protected:
		std::string type;
	public:
		A_Animal();
		virtual ~A_Animal();
		A_Animal(const A_Animal& animal);
		A_Animal& operator=(const A_Animal& animal);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif