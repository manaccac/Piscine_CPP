#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"

int	main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	std::cout << std::endl << "************************* GIVEN TEST" \
		" **************" << std::endl << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}

	std::cout << std::endl << "TEST 1): empty squad"\
		<< std::endl;
	{
		Squad Bataillion;
		std::cout << Bataillion.getCount() << std::endl;
		std::cout << Bataillion.getUnit(-1) << std::endl;
		std::cout << Bataillion.getUnit(0) << std::endl;
		std::cout << Bataillion.getUnit(1) << std::endl;
	}
	std::cout << std::endl << "TEST 2): adding to squad 1 recruit"\
		<< std::endl;
	{
		Squad Bataillion;
		ISpaceMarine *boby = new TacticalMarine;
		Bataillion.push(boby);
	}
	std::cout << std::endl << "TEST 3): adding to squad clone recruits only"\
		<< std::endl;
	{
		Squad Bataillion;
		ISpaceMarine *jhonny = new AssaultTerminator;
		Bataillion.push(jhonny->clone());
		Bataillion.push(jhonny->clone());
		Bataillion.push(jhonny->clone());
		Bataillion.push(jhonny->clone());
		std::cout << std::endl;
		delete jhonny;
	}
	std::cout << std::endl << "TEST 4): adding to a squad twice the" \
		" same unit, or NULL" << std::endl;
	{
		Squad Bataillion;
		ISpaceMarine *jhonny = new AssaultTerminator;
		Bataillion.push(jhonny);
		Bataillion.push(jhonny);
		Bataillion.push(jhonny->clone());
		Bataillion.push(NULL);
		std::cout << std::endl;
	}
	std::cout << std::endl << "TEST 5): creating a squad by copy" \
		"" << std::endl;
	{
		ISpaceMarine *jhonny = new AssaultTerminator;
		Squad Bataillion1;
		Bataillion1.push(jhonny->clone());
		Bataillion1.push(jhonny->clone());
		Squad Bataillion2 = Bataillion1;
		std::cout << std::endl;
		delete jhonny;
	}
	std::cout << std::endl << "TEST 6): assignation"\
		<< std::endl;
	{
		Squad Bataillion;
		ISpaceMarine *boby = new TacticalMarine;
		Bataillion.push(boby);
		Bataillion.push(boby->clone());
		std::cout << std::endl;
		Squad Bataillion1(Bataillion);
		Bataillion1.getCount();
		std::cout << std::endl;
	}
	return (0);
}
