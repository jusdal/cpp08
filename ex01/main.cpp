/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:03:47 by justindaly        #+#    #+#             */
/*   Updated: 2024/06/28 19:00:51 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// intra main
// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

int main() {
    Span sp = Span(5);

    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // This should throw an exception
        sp.addNumber(10);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test addRange
    Span sp2 = Span(10000);
    std::vector<int> vec;
    for (int i = 0; i < 10000; ++i) {
        vec.push_back(i);
    }

    // try {
    //     sp2.addRange(vec.begin(), vec.end());
    //     std::cout << sp2.shortestSpan() << std::endl;
    //     std::cout << sp2.longestSpan() << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    return 0;
}