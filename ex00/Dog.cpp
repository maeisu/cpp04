#include "Dog.hpp"

Dog::Dog():Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& dog):Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.getType();
}

Dog &Dog::operator=(const Dog& dog) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog) {
		this->type = dog.getType();
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
}