/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:03:53 by justindaly        #+#    #+#             */
/*   Updated: 2024/06/28 18:57:05 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	_numbers.reserve(N); // reserve space for N elements, more efficient minimize reallocations
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_numbers = rhs._numbers;
	}
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (_numbers.size() >= _N)
	{
		throw std::out_of_range("Span is full");
	}
	_numbers.push_back(n); // add n to the end of the vector
}

int		Span::shortestSpan() const
{
	if (_numbers.size() < 2)
	{
		throw std::runtime_error("Not enough numbers to calculate span");
	}
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max(); 
	for (size_t i = 1; i < sorted.size(); ++i)
	{
		minSpan = std::min(minSpan, sorted[i] - sorted[i - 1]);
	}
	return minSpan;
}

int	Span::longestSpan() const
{
	if (_numbers.size() < 2)
	{
		throw std::runtime_error("Not enough numbers to calculate span");
	}
	std::vector<int>::const_iterator min = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::const_iterator max = std::max_element(_numbers.begin(), _numbers.end());

	return *max - *min;

}