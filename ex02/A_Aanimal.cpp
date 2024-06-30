#include "A_Animal.hpp"

A_Animal::A_Animal()
{
	this->type = "animal";
	std::cout << "A_Animal default constructor called" << std::endl;
}

A_Animal::~A_Animal()
{
	this->type = "animal";
	std::cout << "A_Animal destructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal &animal)
{
	std::cout << "A_Animal copy constructor called" << std::endl;
	this->type = animal.type;
}

A_Animal &A_Animal::operator=(const A_Animal &animal)
{
	std::cout << "A_Animal copy assignment operator called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return (*this);
}

std::string A_Animal::getType() const{
	return this->type;
}