/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:03:47 by justindaly        #+#    #+#             */
/*   Updated: 2024/06/28 19:52:50 by justindaly       ###   ########.fr       */
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

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <ctime> // for time()
#include <cstdlib> // for srand() and rand()

int main() {
    //srand(time(0)); // Seed random number generator

    // Test 1: Empty Span
    try {
        Span sp1(0);
        std::cout << sp1.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception (Empty Span): " << e.what() << std::endl;
    }

    // Test 2: Single Element Span
    try {
        Span sp2(1);
        sp2.addNumber(42);
        std::cout << sp2.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception (Single Element Span): " << e.what() << std::endl;
    }

    // Test 3: Span with Maximum Capacity
    try {
        Span sp3(5);
        sp3.addNumber(6);
        sp3.addNumber(3);
        sp3.addNumber(17);
        sp3.addNumber(9);
        sp3.addNumber(11);
        std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp3.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test 4: Adding to a Full Span
    try {
        Span sp4(5);
        sp4.addNumber(6);
        sp4.addNumber(3);
        sp4.addNumber(17);
        sp4.addNumber(9);
        sp4.addNumber(11);
        sp4.addNumber(10); // This should throw an exception
    } catch (const std::exception& e) {
        std::cout << "Exception (Full Span): " << e.what() << std::endl;
    }

    // Test 5: Large Span with Random Numbers
    try {
        Span sp5(10000);
        for (int i = 0; i < 10000; ++i) {
            sp5.addNumber(rand() % 100000); // Add random numbers
        }
        std::cout << "Shortest Span (Large): " << sp5.shortestSpan() << std::endl;
        std::cout << "Longest Span (Large): " << sp5.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Span sp6(10);
        int numbersToAdd[] = {15, 8, 22, -3, 0};
        std::vector<int> numbersVector(numbersToAdd, numbersToAdd + 5);

        std::cout << "Attempting to add range of size: " << std::distance(numbersVector.begin(), numbersVector.end()) << std::endl;
        std::cout << "Remaining capacity in Span: " << (sp6.getSize() - sp6.getNumbers().size()) << std::endl;

        std::cout << "Before addRange: ";
        sp6.printNumbers(); // Print before addRange

        sp6.addRange(numbersVector.begin(), numbersVector.end());

        std::cout << "After addRange: ";
        sp6.printNumbers(); // Print after addRange

        std::cout << "Shortest Span (addRange): " << sp6.shortestSpan() << std::endl;
        std::cout << "Longest Span (addRange): " << sp6.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception (addRange Sufficient Space): " << e.what() << std::endl;
    }

    // Test 7: addRange with Insufficient Space (C++98 compliant)
    try {
        Span sp7(3);
        int numbersToAdd[] = {15, 8, 22, -3, 0};
        std::vector<int> numbersVector(numbersToAdd, numbersToAdd + 5);

        std::cout << "Attempting to add range of size: " << std::distance(numbersVector.begin(), numbersVector.end()) << std::endl;
        std::cout << "Remaining capacity in Span: " << (sp7.getSize() - sp7.getNumbers().size()) << std::endl;

        std::cout << "Before addRange: ";
        sp7.printNumbers(); // Print before addRange

        sp7.addRange(numbersVector.begin(), numbersVector.end()); // Should throw an exception
    } catch (const std::exception& e) {
        std::cout << "Exception (addRange Insufficient Space): " << e.what() << std::endl;
    }

    return 0;
}
