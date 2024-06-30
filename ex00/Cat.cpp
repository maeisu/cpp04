#include "Cat.hpp"

Cat::Cat():Animal() {
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cat):Animal() {
	this->type = cat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& cat) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if(this != &cat) {
		this->type = cat.type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "nya nya" << std::endl;
}