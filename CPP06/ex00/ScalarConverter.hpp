/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:34:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/08 16:44:33 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <limits>
#include <cctype>
#include <numbers>
#include <cstdlib>

#define INT_MIN std::numeric_limits<int>::min()
#define INT_MAX std::numeric_limits<int>::max()
#define FLOAT_MIN -(std::numeric_limits<float>::max())
#define FLOAT_MAX std::numeric_limits<float>::max()
#define DOUBLE_MIN -(std::numeric_limits<double>::max())
#define DOUBLE_MAX std::numeric_limits<double>::max()

enum e_type
{
    CHAR = 1,
    SPECIAL,
    INT,
    FLOAT,
    DOUBLE,
    NOT,
};


class ScalarConverter
{
    private:
            ScalarConverter();
            ScalarConverter(const ScalarConverter &original);
            ScalarConverter& operator=(const ScalarConverter &original);
            ~ScalarConverter();

    public:
            static void convert(std::string parameter);
};

e_type checkParameter(const std::string &parameter);

#endif