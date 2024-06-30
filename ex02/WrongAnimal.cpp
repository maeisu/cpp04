#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "wrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name)
{
	this->type = name;
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	this->type = "wrongAnimal";
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = wrongAnimal.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &wrongAnimal)
	{
		this->type = wrongAnimal.getType();
	}
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}