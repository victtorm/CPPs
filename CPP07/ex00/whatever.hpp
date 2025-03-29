/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:34:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/15 13:09:29 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &first, T &second)
{
    T tmp;

    tmp = first;
    first = second;
    second = tmp;
}

template <typename T>

T const &min(T &first, T &second)
{
    return ((first < second) ? first : second);
}

template <typename T>

T const &max(T &first, T &second)
{
    return ((first > second) ? first : second);
}

#endif