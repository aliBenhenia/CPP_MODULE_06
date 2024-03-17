/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:40:28 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/17 18:40:17 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include<iostream>
#include<string>

class Base
{
    public:
        virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif