#include "Cat.hpp"

Cat::Cat() {
	this->type = "cat";
	this->brain = new Brain();
}

Cat::~Cat() {
	delete this->brain;
}

Cat::Cat(const Cat& cat) {
	
}

Cat &Cat::operator=(const Cat& cat) {
	
}

void Cat::makeSound() const {
	std::cout << "" << std::endl;
}