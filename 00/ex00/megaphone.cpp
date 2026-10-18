/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albegar2 <albegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:31:34 by albegar2          #+#    #+#             */
/*   Updated: 2026/10/17 20:11:10 by albegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int j = 0;
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(argv[i])
	{
		std::string str = argv[i];
		while(str[j])
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
		i++;
		j = 0;
	}	
	std::cout << std::endl;	
	return (0);
}