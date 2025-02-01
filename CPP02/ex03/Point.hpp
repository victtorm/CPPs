/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:12:06 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 19:34:01 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
            const Fixed x;
            const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &original);
        Point& operator=(const Point& original);
        ~Point();

}
    
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif