/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:54:09 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/01 13:37:49 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

    void PhoneBook::add(int index)
    {
        std::string input;
        
        std::cout << "Let's add a contact." << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "First Name: ";
        std::getline(std::cin, input);
        while (input.length() == 0)
        {
            std::cout << "Empty inputs are not allowed. Try again" << std::endl;
            std::cout << "First Name: ";
            std::getline(std::cin, input);
        }
        MyContacts[index].set_first_name(input);
        std::cout << "Last Name: ";
        std::getline(std::cin, input);
        while (input.length() == 0)
        {
            std::cout << "Empty inputs are not allowed. Try again" << std::endl;
            std::cout << "Last Name: ";
            std::getline(std::cin, input);
        }
        MyContacts[index].set_last_name(input);
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        while (input.length() == 0)
        {
             std::cout << "Empty inputs are not allowed. Try again" << std::endl;
             std::cout << "Nickname: ";
             std::getline(std::cin, input);
        }
        MyContacts[index].set_nickname(input);
        std::cout << "Phone Number: ";
        std::getline(std::cin, input);
        while (input.length() == 0)
        {
            std::cout << "Empty inputs are not allowed. Try again" << std::endl;
            std::cout << "Phone Number: ";
            std::getline(std::cin, input);
        }
        MyContacts[index].set_phone_number(input);
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, input);
        while (input.length() == 0)
        {
            std::cout << "Empty inputs are not allowed. Try again" << std::endl;
            std::cout << "Darkest Secret: ";
            std::getline(std::cin, input);
        }
        MyContacts[index].set_darkest_secret(input);
    }
    int PhoneBook::pick_index()
    {
        int index;
        index = 42;
        std::string input;

        while (index < 0 || index > 7)
        {
            std::cout << "Please select the contact you want by index: ";
            std::cin >> input;
            try
            {
                index = std::stoi(input);
            }
            catch(const std::invalid_argument&)
            {
                std::cerr << "That wasn't a valid index. Try again" << std::endl;
                continue;
            }
            if (index < 0 || index > 7)
                std::cerr << "That index is out of range. Try again" << std::endl;
        }
        return index;
    }
    void PhoneBook::search()
    {
        int index;
        std::string input;

        std::cout << "     Index | First Name |  Last Name |   Nickname" << std::endl;
     
        for (int i = 0; i < 8; i++)
        {
            
            std::cout << std::setw(10) << std::right << std::setfill(' ') << i
                << " | ";
            if (MyContacts[i].get_first_name().length() > 10)
              std::cout << std::setw(10) << MyContacts[i].get_first_name().substr(0, 9) + ".";
            else
                std::cout << std::setw(10) << MyContacts[i].get_first_name();
            std::cout << " | " ;
            if (MyContacts[i].get_last_name().length() > 10)
              std::cout << std::setw(10) << MyContacts[i].get_last_name().substr(0, 9) + ".";
            else
                std::cout << std::setw(10) << MyContacts[i].get_last_name();
            std::cout << " | " ;
            if (MyContacts[i].get_nickname().length() > 10)
              std::cout << std::setw(10) << MyContacts[i].get_nickname().substr(0, 9) + ".";
            else
                std::cout << std::setw(10) << MyContacts[i].get_nickname();
            std::cout << std::endl;
        }
        index = pick_index();
        std::cout << "First Name: " << MyContacts[index].get_first_name() << std::endl;
        std::cout << "Last Name: " << MyContacts[index].get_last_name() << std::endl;
        std::cout << "Nickname: " << MyContacts[index].get_nickname() << std::endl;
        std::cout << "Phone Number: " << MyContacts[index].get_phone_number() << std::endl;
        std::cout << "Darkest Secret: " << MyContacts[index].get_darkest_secret() << std::endl;
    };



