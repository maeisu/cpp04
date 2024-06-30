#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Dog* j = new Dog();
	const Cat* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "--------------------" << std::endl;

	j->getBrain()->setIdeas(4, "dog");
	i->getBrain()->setIdeas(4, "cat");
	std::cout << j->getBrain()->getIdeas(3) << " " << std::endl;
	std::cout << j->getBrain()->getIdeas(4) << " " << std::endl;
	std::cout << j->getBrain()->getIdeas(5) << " " << std::endl;
	std::cout << i->getBrain()->getIdeas(3) << " " << std::endl;
	std::cout << i->getBrain()->getIdeas(4) << " " << std::endl;
	std::cout << i->getBrain()->getIdeas(5) << " " << std::endl;

	std::cout << "--------------------" << std::endl;

	const Dog tmp = *j;
	j->getBrain()->setIdeas(4, "dog2");
	std::cout << j->getBrain()->getIdeas(4) << " " << std::endl;
	std::cout << tmp.getBrain()->getIdeas(4) << " " << std::endl;

	std::cout << "--------------------" << std::endl;

	delete meta;
	delete j;
	delete i;

	return 0;
}

// #include <stdlib.h>
// __attribute__((destructor)) static void destructor(void) {
//     system("leaks -q Animal");
// }