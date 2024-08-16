/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:00:29 by justindaly        #+#    #+#             */
/*   Updated: 2024/08/16 21:41:10 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "--------MUTANT STACK--------" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl; //top of stack is 17

	mstack.pop(); //remove 17

	std::cout << mstack.size() << std::endl; //should be 1 in the stack

	mstack.push(3);		//5 3
	mstack.push(5);		//5 3 5
	mstack.push(737);	//5 3 5 737
	//[...]
	mstack.push(0);		//5 3 5 737 0

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "-------- LIST --------" << std::endl;
	std::list<int> list;

    list.push_back(5);
    list.push_back(17);

    std::cout << list.back() << std::endl;

	list.pop_back();

    std::cout << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    //[...]
    list.push_back(0);

    std::list<int>::iterator itList = list.begin();
    std::list<int>::iterator iteList = list.end();

    ++it;
    --it;
    while (itList != iteList)
    {
        std::cout << *itList << std::endl;
        ++itList;
    }
    std::list<int> listCopy(list);
    return 0;
}