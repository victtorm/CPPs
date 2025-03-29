/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:44:32 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/17 16:41:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>

typename T::iterator easyfind(T &container, int number)
{
	typename T::iterator it = std::find(container.begin(), container.end(), number);
	if (it == container.end())
		throw std::runtime_error("No occurrence of this number!!!");
	else
		std::cout << "Number found on position: " << std::distance(container.begin(), it) << std::endl;
	return (it);
}

#endif