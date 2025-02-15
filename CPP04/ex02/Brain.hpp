/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:53:12 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 13:59:39 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <new>

class Brain
{
    public:
            Brain();
            ~Brain();
            Brain(const Brain &original);
            Brain&operator=(const Brain &original);

            std::string ideias[100];
};

#endif