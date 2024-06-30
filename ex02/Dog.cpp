#include "Dog.hpp"

Dog::Dog():Animal() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& dog):Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.type;
	// deep copy
	Brain tmp(*dog.brain);
	this->brain = &tmp;
}

Dog &Dog::operator=(const Dog& dog) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog) {
		this->type = dog.type;
		// deep copy
		if (this->brain != NULL) {
			delete this->brain;
		}
		this->brain = new Brain(*dog.brain);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "wan wan" << std::endl;
}