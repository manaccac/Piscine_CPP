/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:36:53 by manaccac          #+#    #+#             */
/*   Updated: 2021/02/25 12:26:04 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string exec;
	int			index;
	std::cout << "Hello welcome to your PhoneBook" << std::endl;
	std::cout << "Enter ADD for create new contact you can't have more that 8 contact" << std::endl;
	std::cout << "Enter SEARCH will display a list of all your available contacts" << std::endl;
	std::cout << "Enter EXIT for exit the program and the contacts are lost forever" << std::endl;
	std::cout << std::endl;
	PhoneBook instance[8];
	index = 0;
	while (1)
	{
		std::getline(std::cin, exec);
		if (exec.compare("ADD") == 0)
			index = instance[index].add(index);
		else if (exec.compare("SEARCH") == 0)
			instance[index].search(instance, index);
		else if (exec.compare("EXIT") == 0)
			break;
		std::cout << std::endl;
		std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
