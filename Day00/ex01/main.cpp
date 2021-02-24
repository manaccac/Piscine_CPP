/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:36:53 by manaccac          #+#    #+#             */
/*   Updated: 2021/02/24 15:12:17 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::cout << "Hello welcome to your PhoneBook" << std::endl;
	std::cout << "Enter ADD for create new contact you can't have more that 8 contact" << std::endl;
	std::cout << "Enter SEARCH will display a list of all your available contacts" << std::endl;
	std::cout << "Enter EXIT for exit the program and the contacts are lost forever" << std::endl;
	std::cout << std::endl;
	PhoneBook instance;
	instance.index = 0;
	while (1)
	{
		std::getline(std::cin, instance.exec);
		if (instance.exec.compare("ADD") == 0)
			instance.add();
		else if (instance.exec.compare("SEARCH") == 0)
			instance.search();
		else if (instance.exec.compare("EXIT") == 0)
			break;
		std::cout << std::endl;
		std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
