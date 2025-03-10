/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:34:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/03/08 16:00:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
    int number;
};

class Serializer
{
    private:
            Serializer();
            Serializer(const Serializer &original);
            Serializer& operator=(const Serializer &original);
            ~Serializer();

    public:
            static uintptr_t serialize(Data* ptr);
            static Data* deserialize(uintptr_t raw);
};

#endif