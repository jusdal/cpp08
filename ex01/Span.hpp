/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:03:31 by justindaly        #+#    #+#             */
/*   Updated: 2024/06/28 18:56:49 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>

class Span
{
	private:
		//attributes
		unsigned int	_N;
		std::vector<int> _numbers;

		Span();


	public:
		Span(unsigned int N);
		Span(Span const &copy);
		Span &operator=(Span const &rhs);

		~Span();

		//methods
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
		
};

#endif // SPAN_HPP