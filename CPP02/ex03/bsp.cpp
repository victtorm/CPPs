/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:43:03 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/06 16:40:57 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   area(Point a, Point b, Point c)
{

    Fixed A;
    A = ((a.get_x() * b.get_y()) + (a.get_y() * c.get_x()) + (c.get_y() * b.get_x())) - ((b.get_y() * c.get_x()) + (a.get_y() * b.get_x()) + (a.get_x() * c.get_y()));
    return (std::abs(A.toFloat() / 2));

}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float totalArea  = 0.0;
    float a_area = 0.0;
    float b_area = 0.0;
    float c_area = 0.0;
    
    totalArea = area(a, b, c);
    a_area = area(point, b, c);
    b_area = area(a, point, c);
    c_area = area(a, b, point);

    if (a_area == 0 || b_area == 0 || c_area == 0)
        return (false);
    if (totalArea == a_area + b_area + c_area)
        return (true);
    else 
        return (false);
}
