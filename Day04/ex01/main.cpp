#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Bouftou.hpp"
#include "Fleche_explo.hpp"

int main() {
    Character* moi = new Character("moi");
    std::cout << *moi;

    Enemy* b = new RadScorpion();
    Enemy* m = new SuperMutant();
    Enemy* B = new bouftou();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* F_e = new Fleche_explo();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    moi->attack(m);
    std::cout << *moi;

    moi->attack(b);
    std::cout << *moi;

    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();

    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;

    std::cout << "Mutant life : " << m->getHP() << std::endl;

    moi->recoverAP();
	std::cout << *moi;
    moi->recoverAP();
	std::cout << *moi;
    moi->recoverAP();
	std::cout << *moi;
    moi->recoverAP();

    std::cout << *moi;
	moi->equip(pf);
    moi->attack(m);
	moi->attack(m);
	moi->attack(m);
	moi->attack(m);
	std::cout << *moi;
	moi->attack(m);
	std::cout << *moi;
	moi->attack(m);
    std::cout << *moi;


    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();

    moi->equip(F_e);
    std::cout << *moi;
    moi->attack(B);
	std::cout << *moi;
	moi->attack(B);
	std::cout << *moi;
	moi->attack(B);
    std::cout << *moi;

    delete moi;

    delete pr;
    delete pf;
    delete F_e;

    return (0);
}
