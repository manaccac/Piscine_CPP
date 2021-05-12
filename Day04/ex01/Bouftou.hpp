#ifndef BOUFTOU_HPP
# define BOUFTOU_HPP

#include <iostream>
#include "Enemy.hpp"

class bouftou : public Enemy
{
public:
	bouftou();
	bouftou(bouftou const &s_bouftou);
	bouftou &operator=(bouftou const &s_bouftou);
	virtual ~bouftou();
private:
};

#endif
