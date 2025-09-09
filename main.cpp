#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook myPhonebook;

	
	std::string prompt;
	while (1)
	{
		std::cout << "ADD to add a contact | SEARCH by index of th entry | EXIT to quit\n";
		std::cin >> prompt;

		if (prompt == "ADD")
			myPhonebook.add();
		else if (prompt == "SEARCH")
			myPhonebook.search();
		else if (prompt == "EXIT")
			break ;
	}
}