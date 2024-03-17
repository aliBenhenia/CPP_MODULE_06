/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:23:14 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/17 18:23:39 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main()
{
    Base *a = new A();
    Base *b = new B();
    Base *c = new C();
    
    delete a;
    delete b;
    delete c;
    return (0);
}