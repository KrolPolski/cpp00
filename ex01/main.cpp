/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:07:08 by rboudwin          #+#    #+#             */
/*   Updated: 2024/07/31 14:22:40 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
    PhoneBook MyPhoneBook;
    std::string input;
    int index;

    index = 0;

    std::cout << "You have traveled back in time to 1995, and get to use a phone book." << std::endl;
    std::cout << "Your phone book is currently empty." << std::endl;
    std::cout << "You can ADD, SEARCH, or EXIT." <<std::endl;
    std::cout << "MyPhoneBook: ";
    std::cin >> input;
    while (input != "EXIT")
    {
        if (input == "ADD")
        {
            MyPhoneBook.add(index);
            if (index == 7)
                index = 0;
            else
                index++;
        }
        else if (input == "SEARCH")
            MyPhoneBook.search();
        else
        {   
            std::cout << "Nope. You can only ADD, SEARCH, or EXIT." << std::endl;
            
        }
        std::cout << "MyPhoneBook: ";
        std::cin >> input;
    }
    {
        std::cout << "Farewell, enjoy your trip back to the future." << std::endl;
        exit(0);
    }
}