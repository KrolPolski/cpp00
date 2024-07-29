#include <cstring>
#include <iostream>

class Contacts
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};
class PhoneBook 
{
    Contacts contact[8];
    public: void add()
    {
        std::cout << "Adding is fun" << std::endl;
    }
    public: void search()
    {
        std::cout << "Searching is fun" << std::endl;
    }
};



int main(void)
{
    PhoneBook MyPhoneBook;
    std::string input;

    std::cout << "You have traveled back in time to 1995, and get to use a phone book." << std::endl;
    std::cout << "Your phone book is currently empty." << std::endl;
    std::cout << "You can ADD, SEARCH, or EXIT." <<std::endl;
    std::cout << "MyPhoneBook: ";
    std::cin >> input;
    while (input != "EXIT")
    {
        if (input == "ADD")
            MyPhoneBook.add();
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