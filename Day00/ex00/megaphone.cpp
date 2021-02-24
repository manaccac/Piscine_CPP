/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:21:45 by manaccac          #+#    #+#             */
/*   Updated: 2021/02/24 12:25:45 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; j != argc; j++)
			for (int i = 0; argv[j][i] != '\0'; i++)
				std::cout << (char)toupper(argv[j][i]);
		std::cout << std::endl;
	}
	return (0);
}
