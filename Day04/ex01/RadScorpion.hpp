#ifndef	RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const& sup);
	RadScorpion &operator=(RadScorpion const& sup);
	~RadScorpion();
private:
};

#endif
