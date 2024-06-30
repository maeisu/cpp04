#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    for(int i; i < brain.ideas->length(); i++) {
        this->ideas[i] = brain.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this == &brain) {
        for(int i; i < brain.ideas->length(); i++) {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return (*this);
}
