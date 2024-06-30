#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& Cat);
		Cat& operator=(const Cat& cat);
		void makeSound () const;
		Brain* getBrain() const;
};

#endif