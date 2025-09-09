#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void) : _contacts_size(0)
{
	std::cout << "Constructor PhoneBook called\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook called\n";
}

std::string	PhoneBook::getInput( std::string prompt )
{
	std::string input;
	std::cout << prompt;

	while (true)
	{
		if (!std::getline(std::cin, input))
			return ("null");
		if (!input.empty())
			return (input);
	}
}

void	PhoneBook::add( void )
{
	Contact contact;

	std::string first_name = getInput("First Name: ");
	contact.set_first_name(first_name);

	std::string last_name = getInput("Last Name: ");
	contact.set_last_name(last_name);

	std::string nickname = getInput("Nickname: ");
	contact.set_nickname(nickname);

	std::string	phone_number = getInput("Phone Number: ");
	contact.set_phone_number(std::atoi(phone_number.c_str()));

	std::string	darkest_secret = getInput("Darkest Secret: ");
	contact.set_darkest_secret(darkest_secret);

	if (_contacts_size < 8)
		_contacts[_contacts_size] = contact;
	else
		_contacts[0] = contact;

	_contacts_size++;
}

void	PhoneBook::printColumn(std::string str) const
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}

void	PhoneBook::displayData( void ) const
{

	for (int i = 0; i < _contacts_size; i++)
	{
		std::string firstName =	_contacts[i].get_first_name();
		std::string lastName =	_contacts[i].get_last_name();
		std::string nickname =	_contacts[i].get_nickname();

		std::cout << std::setw(10) << i << "|";
		printColumn(firstName);
		std::cout << "|";
		printColumn(lastName);
		std::cout << "|";
		printColumn(nickname);
		std::cout << "\n";
	}
}

void	PhoneBook::search( void )
{
	int	index;

	displayData();

	std::cout << "Enter the index: ";
	std::cin >> index;

	if (index >= _contacts_size)
		std::cout << "There is not a cantact for this index\n";

	for (int i = 0; i < _contacts_size; i++)
	{
		std::string firstName =	_contacts[index].get_first_name();
		std::string lastName =	_contacts[index].get_last_name();
		std::string nickname =	_contacts[index].get_nickname();

		if (i == index)
			std::cout << firstName << "\n" << lastName << "\n" << nickname << std::endl;
		
	}
	std::cout << std::endl;
}

