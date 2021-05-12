#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int     main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{

        std::cout << std::endl << "************************* SUBJECT TEST" \
                " **************" << std::endl;
        {
                IMateriaSource *src = new MateriaSource();
                src->learnMateria(new Ice());
                src->learnMateria(new Cure());
                ICharacter* moi = new Character("moi");
                AMateria* tmp;
                tmp = src->createMateria("ice");
                moi->equip(tmp);
                tmp = src->createMateria("cure");
                moi->equip(tmp);
                ICharacter* bob = new Character("bob");
                moi->use(0, *bob);
                moi->use(1, *bob);
                delete bob;
                delete moi;
                delete src;
        }

        std::cout << std::endl << "************************* MY TEST" \
                " **************" << std::endl;
        std::cout << std::endl << "TEST 1): creating materia"\
                << std::endl;
        {
                AMateria *Am1 = new Cure;
                std::cout << Am1->getType() << std::endl;
                delete Am1;
        }
        std::cout << std::endl << "TEST 2): Creating 2 characters"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Character       Student("student");
                std::cout << Charlie.getName() << " & " << Student.getName() << std::endl;
        }
        std::cout << std::endl << "TEST 3): Trying to attack student"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Character       Student("student");
                Charlie.use(0, Student);
                Charlie.use(-1, Student);
                Charlie.use(4, Student);
                Charlie.use(5, Student);
        }
        std::cout << std::endl << "TEST 4): Unequiping When empty"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Charlie.unequip(0);
                Charlie.unequip(-1);
                Charlie.unequip(5);
        }
        std::cout << std::endl << "TEST 5): Equiping many times"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Charlie.equip(new Ice);
                Charlie.equip(new Ice);
                Charlie.equip(new Ice);
                Charlie.equip(new Ice);
                Cure                    Dummy;
                Charlie.equip(&Dummy);
                Charlie.equip(&Dummy);
        }
        std::cout << std::endl << "TEST 6): Equiping then unequiping"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Ice                     AMateriaIce;
                Charlie.equip(new Ice);
                Charlie.unequip(5);
                Charlie.unequip(-1);
                Charlie.unequip(0);
        }
        std::cout << std::endl << "TEST 7): Equiping 4, unequiping 1, reequiping"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Ice                     AMateriaIce;
                Charlie.equip(&AMateriaIce);
                Charlie.equip(&AMateriaIce);
                Charlie.equip(&AMateriaIce);
                Charlie.equip(&AMateriaIce);
                Charlie.unequip(2);
                std::cout << "can reequipe once !" << std::endl;
                Charlie.equip(&AMateriaIce);
                Charlie.unequip(2);
        }
        std::cout << std::endl << "TEST 8) using An Amateria, then another"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Character       Victim("Victim");
                Charlie.equip(new Ice);
                Charlie.equip(new Cure);
                Charlie.equip(new Ice);
                Charlie.use(0, Victim);
                Charlie.use(1, Victim);
                Charlie.use(2, Victim);
                std::cout << std::endl;
                Charlie.use(3, Victim);
                Charlie.use(-1, Victim);
                Charlie.use(-5, Victim);
        }
        std::cout << std::endl << "TEST 9) Constructor by copy"\
                << std::endl;
        {
                Character       Charlie("charlie");
                Charlie.equip(new Ice);
                Charlie.equip(new Cure);
                Charlie.equip(new Ice);
                Character       Victim(Charlie);
                Victim.use(1, Charlie);
        }
        std::cout << std::endl << "TEST 10) Using MateriaSource"\
                << std::endl;
        {
                MateriaSource Source;
                Ice                     AMateriaIce;
                Source.learnMateria(new Ice);
                Source.learnMateria(new Cure);
                Source.learnMateria(new Ice);
                Source.learnMateria(new Cure);
                Source.learnMateria(&AMateriaIce);
        }
        std::cout << std::endl << "TEST 11) Using MateriaSource to equip character"\
                << std::endl;
        {
                Character       Charlie("charlie");
                MateriaSource Source;
                Source.learnMateria(new Ice);
                Source.learnMateria(new Cure);
                AMateria *todel1 = Source.createMateria("Ice");
                AMateria *todel2 = Source.createMateria("Ice");
                Charlie.equip(todel1);
                Charlie.equip(todel2);
        }
        std::cout << std::endl << "TEST 12) deep copy of MAteria source"\
                << std::endl;
        {
                MateriaSource *src = new MateriaSource();
                src->learnMateria(new Ice());
                src->learnMateria(new Cure());
                std::cout << "" << std::endl;
                MateriaSource src2(*src);
                src2.learnMateria(new Ice());
                delete src;
        }
        return (0);
}
