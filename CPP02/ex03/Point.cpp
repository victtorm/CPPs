/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:13:12 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/06 16:01:24 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point (){}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point& original) : x(original.x), y(original.y) {}

Point::~Point() {}

Point& Point::operator=(const Point& original) {
    
    (Fixed)this->x = original.x;
    (Fixed)this->y = original.y;
    return (*this);
}

Fixed Point::get_x() const {
    return this->x;
}

Fixed Point::get_y() const {
    return this->y;
}
