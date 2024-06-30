#include "Cat.hpp"

Cat::Cat():Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cat):Animal() {
	this->type = cat.getType();
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& cat) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if(this != &cat) {
		this->type = cat.getType();
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}