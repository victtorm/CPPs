/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:21:48 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/15 16:42:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
    private:
            T*              _array;
            unsigned int    _size;
    public:
            Array();
            Array(unsigned int n);
            Array(const Array &original);
            Array &operator=(const Array &original);
            ~Array();

            unsigned int size() const;
            T& operator[](unsigned int i) const;

            class out : public std::exception
            {
                public:
                        virtual const char *what() const throw()
                        {
                            return("Out of bounds!!!");
                        }
            };

};

#include "Array.tpp"


#endif