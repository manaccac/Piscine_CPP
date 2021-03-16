#include "Bouftou.hpp"

bouftou::bouftou() : Enemy(50, "Bouftou lvl 6 ")
{
	std::cout << "Bouftou lvl 6 appears in your zone " << std::endl;
}

bouftou::bouftou(bouftou const &s_bouftou) : Enemy(s_bouftou.getHP(), s_bouftou.getType())
{
	std::cout << "Bouftou lvl 6 appears in your zone " << std::endl;
}

bouftou	&bouftou::operator=(bouftou const &s_bouftou)
{
	Enemy::operator=(s_bouftou);
	std::cout << "Bouftou lvl 6 appears in your zone " << std::endl;
	return (*this);
}

bouftou::~bouftou()
{
	std::cout << "You killed the bouftou lvl 6 you gain a level " << std::endl;
}
