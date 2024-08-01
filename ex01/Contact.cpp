/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:16:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/01 13:23:40 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

    std::string Contact::get_first_name()
    {
        return (this->first_name);
    }
    std::string Contact::get_last_name()
    {
        return (this->last_name);
    }
    std::string Contact::get_nickname()
    {
        return (this->nickname);
    }
    std::string Contact::get_phone_number()
    {
        return (this->phone_number);
    }
    std::string Contact::get_darkest_secret()
    {
        return (this->darkest_secret);
    }
    void Contact::set_first_name(std::string s)
    {
        this->first_name = s;
    }
    void Contact::set_last_name(std::string s)
    {
        this->last_name = s;
    }
    void Contact::set_nickname(std::string s)
    {
        this->nickname = s;
    }
    void Contact::set_phone_number(std::string s)
    {
        this->phone_number = s;
    }
    void Contact::set_darkest_secret(std::string s)
    {
        this->darkest_secret = s;
    }