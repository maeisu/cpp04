#include "Cat.hpp"

Cat::Cat():Animal("Cat") {
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& cat):Animal() {
	this->type = cat.getType();
	// deep copy
	if (this->brain != NULL) {
		delete this->brain;
	}
	this->brain = new Brain(*cat.getBrain());
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& cat) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if(this != &cat) {
		this->type = cat.type;
		// deep copy
		if (this->brain != NULL) {
			delete this->brain;
		}
		this->brain = new Brain(*cat.getBrain());
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}

Brain* Cat::getBrain() const {
	return this->brain;
}