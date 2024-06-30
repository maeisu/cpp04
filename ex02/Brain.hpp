#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	protected:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		std::string getIdeas(const int i) const;
		void setIdeas(const int i, const std::string idea); 
};

#endif