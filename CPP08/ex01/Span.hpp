/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:44:47 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/21 14:03:47 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <limits>
#include <list>

class Span
{
    private:
            unsigned int    _n;
            std::list<int>  numbers;

            Span();

    public:
            Span(unsigned int n);
            ~Span();
            Span(const Span &original);
            Span&operator=(const Span &original);

            void addNumber(int num);
            

        	void addManyNumbers(int begin, int end);

            unsigned int shortestSpan() const;
            unsigned int longestSpan() const;

            void printArray();
};

#endif
