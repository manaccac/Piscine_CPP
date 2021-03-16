#ifndef	ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
public:
	Enemy(int s_hp, std::string const &s_type);
	Enemy(Enemy const &enem);
	Enemy &operator=(Enemy const &enem);
	virtual ~Enemy();

	const std::string	getType() const;
	int			getHP() const;
	virtual void takeDamage(int amount);
protected:
	Enemy();
	int			_HP;
	std::string	_Type;
};

#endif
