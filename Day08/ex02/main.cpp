#include "Mutantstack.hpp"

#include <iostream>

int main()
{
	{
		MutantStack<int> mstack;
		std::cout << "push 5" << std::endl;
		mstack.push(5); // 5
		std::cout << "push 17" << std::endl;
		mstack.push(17); // 5 17
		std::cout << "top = ";
		std::cout << mstack.top() << std::endl;

		std::cout << "pop 5" << std::endl;
		mstack.pop(); // 5
		std::cout << "size = ";
		std::cout << mstack.size() << std::endl;


		std::cout << "\npush 3 5 737 0";
		mstack.push(3); // 5 3
		mstack.push(5); // 5 3 5
		mstack.push(737); // 5 3 5 737
		mstack.push(0); // 5 3 5 737 0


		std::cout << std::endl << "Normal iteration" << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "print list from start to the end" << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		MutantStack<int> mstack;
		std::cout << "\npush 5 17 25";
		mstack.push(5); // 5
		mstack.push(17); // 5 17
		mstack.push(25); // 5 17 25

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << std::endl;
		while(it != ite)
		{
			std::cout << *it << " + 1 = ";
			*it +=1;
			std::cout << *it << std::endl ;
			++it;
		}
	}
	return 0;
}