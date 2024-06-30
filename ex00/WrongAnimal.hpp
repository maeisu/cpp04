#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string name);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
		void makeSound() const;
		std::string getType() const;
};

#endif