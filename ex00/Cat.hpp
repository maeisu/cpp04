#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& Cat);
		Cat& operator=(const Cat& cat);
		void makeSound () const;
};

#endif