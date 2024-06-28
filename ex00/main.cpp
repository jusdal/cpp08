/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:41:09 by justindaly        #+#    #+#             */
/*   Updated: 2024/06/28 17:59:19 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int>	v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	std::list<int>		l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);


	try
	{
		std::vector<int>::iterator itVec = easyfind(v, 3);
		std::cout << "Found " << *itVec << std::endl;

		itVec = easyfind(v, 10); // should throw exception
	}
	catch (std::exception &e)
	{ 
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator itList = easyfind(l, 30);
		std::cout << "Found " << *itList << std::endl;

		itList = easyfind(l, 100); // should throw exception
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}