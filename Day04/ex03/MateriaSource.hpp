#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &s_matsource);
	MateriaSource &operator=(MateriaSource const &s_matsource);
	~MateriaSource();

	void learnMateria(AMateria* s_spell);
	AMateria* createMateria(std::string const & type);
private:
	AMateria *_spell[4];
};

#endif
