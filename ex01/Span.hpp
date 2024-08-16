/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:03:31 by justindaly        #+#    #+#             */
/*   Updated: 2024/08/16 22:27:34 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>
# include <limits>

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


		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		//to print the numbers
		int		getSize() const {
			return _N;
		}

		std::vector<int> getNumbers() const {
			return _numbers;
		}
		
		void	printNumbers()  const;

		
};

#endif // SPAN_HPP