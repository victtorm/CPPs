/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:13:45 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/15 13:45:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T *array, size_t len, void(*f)(T&))
{
    size_t i = 0;

    if (array == NULL || f == NULL)
        return;
    while (i < len)
    {
        f(array[i]);
        i++;
    }

};

#endif