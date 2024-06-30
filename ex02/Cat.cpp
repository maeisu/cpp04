#include "Cat.hpp"

Cat::Cat():Animal() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& cat):Animal() {
	this->type = cat.type;
	// deep copy
	if (this->brain != NULL) {
		delete this->brain;
	}
	this->brain = new Brain(*cat.brain);
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
		this->brain = new Brain(*cat.brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "nya nya" << std::endl;
}