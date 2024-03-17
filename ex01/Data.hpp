/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:31:38 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/17 00:52:56 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
#define DATA_HPP
class Data{
    private:
        int value;
    public:
        Data();
        Data(int val);
        Data(const Data &src);
        Data &operator=(const Data &src);
        int getValue() const;
        ~Data();
};
#endif