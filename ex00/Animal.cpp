#include "Animal.hpp"

Animal::Animal()
{
	this->type = "animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string name)
{
	this->type = name;
	std::cout << "Animal name default constructor called" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = animal.getType();
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.getType();
	}
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}