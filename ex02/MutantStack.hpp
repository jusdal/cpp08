/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:11:13 by justindaly        #+#    #+#             */
/*   Updated: 2024/08/16 21:54:10 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template < typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public:

		MutantStack() {};
		MutantStack(MutantStack const & src) { *this = src; };
		~MutantStack() {};

		MutantStack&	operator=(MutantStack const & src)
		{
			if (this != &src)
				this->c = src.c;
			return (*this);
		}

		//Iterator Definitions
		typedef typename C::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
    };

#endif // MUTANTSTACK_HPP
