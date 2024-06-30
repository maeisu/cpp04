#include "Dog.hpp"

Dog::Dog():Animal("Dog") {
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& dog):Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.getType();
	// deep copy
	if (this->brain != NULL) {
		delete this->brain;
	}
	this->brain = new Brain(*dog.getBrain());
}

Dog &Dog::operator=(const Dog& dog) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog) {
		this->type = dog.getType();
		// deep copy
		if (this->brain != NULL) {
			delete this->brain;
		}
		this->brain = new Brain(*dog.getBrain());
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}