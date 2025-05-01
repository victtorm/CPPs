/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:50:03 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/06 16:40:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{	
    Point a(4, 4);
    Point b(1, 2);
    Point c(8, 1);
    Point point(5, 2);

    if (bsp(a, b, c, point))
        std::cout << "The Point is inside of this triangle" << std::endl;
    else 
         std::cout << "The Point is NOT inside of this triangle" << std::endl;
    return (0);
}