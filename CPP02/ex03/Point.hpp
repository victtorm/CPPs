/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:12:06 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/05 17:58:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    		Fixed get_x() const;
    		Fixed get_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif