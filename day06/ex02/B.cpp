/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:40:08 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/09 19:06:33 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{

}

B::B(const B& over)
{
    *this = over;
}

B::~B()
{

}

B& B::operator=(const B& over)
{
    (void)over;
    return (*this);
}