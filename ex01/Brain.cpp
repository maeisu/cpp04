#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "default";
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    int length = brain.ideas->length();
    for(int i = 0; i < length; i++) {
        this->ideas[i] = brain.getIdeas(i);
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    int length = brain.ideas->length();
    if (this == &brain) {
        for(int i = 0; i < length; i++) {
            this->ideas[i] = brain.getIdeas(i);
        }
    }
    return (*this);
}

std::string Brain::getIdeas(const int i) const {
    return this->ideas[i];
}

void Brain::setIdeas(const int i, const std::string idea) {
    this->ideas[i] = idea;
}