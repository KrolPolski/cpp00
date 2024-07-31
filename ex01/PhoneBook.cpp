/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:54:09 by rboudwin          #+#    #+#             */
/*   Updated: 2024/07/31 09:45:44 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <limits>
#include <iomanip>

class Contacts
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};
class PhoneBook 
{
    Contacts contact[8];
    public: void add(int index)
    {
        std::cout << "Let's add a contact." << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "First Name: ";
        std::getline(std::cin, contact[index].first_name);
        std::cout << "Last Name: ";
        std::getline(std::cin, contact[index].last_name);
        std::cout << "Nickname: ";
        std::getline(std::cin, contact[index].nickname);
        std::cout << "Phone Number: ";
        std::getline(std::cin, contact[index].phone_number);
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, contact[index].darkest_secret);
    }
    private: int pick_index()
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
    public: void search()
    {
        int index;
        std::string input;

        std::cout << "     Index | First Name |  Last Name |   Nickname" << std::endl;
     
        for (int i = 0; i < 8; i++)
        {
            
            std::cout << std::setw(10) << std::right << std::setfill(' ') << i
                << " | ";
            if (contact[i].first_name.length() > 10)
              std::cout << std::setw(10) << contact[i].first_name.substr(0, 9) + ".";
            else
                std::cout << std::setw(10) << contact[i].first_name;
            std::cout << " | " ;
            if (contact[i].last_name.length() > 10)
              std::cout << std::setw(10) << contact[i].last_name.substr(0, 9) + ".";
            else
                std::cout << std::setw(10) << contact[i].last_name;
            std::cout << " | " ;
            if (contact[i].nickname.length() > 10)
              std::cout << std::setw(10) << contact[i].nickname.substr(0, 9) + ".";
            else
                std::cout << std::setw(10) << contact[i].nickname;
            std::cout << std::endl;
        }
        index = pick_index();
        std::cout << "First Name: " << contact[index].first_name << std::endl;
        std::cout << "Last Name: " << contact[index].last_name << std::endl;
        std::cout << "Nickname: " << contact[index].nickname << std::endl;
        std::cout << "Phone Number: " << contact[index].phone_number << std::endl;
        std::cout << "Darkest Secret: " << contact[index].darkest_secret << std::endl;
    }

};



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