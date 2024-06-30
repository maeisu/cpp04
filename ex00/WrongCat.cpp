#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) {
	this->type = wrongCat.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& wrongCat) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if(this != &wrongCat) {
		this->type = wrongCat.type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "nya nya" << std::endl;
}