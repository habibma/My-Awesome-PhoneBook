#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook( void );
	~PhoneBook();

	void	add( void );
	void	search( void );

private:
	Contact _contacts[8];
	int		_count;

	std::string	getInput( std::string prompt );
	void		displayData( void ) const;
	void		printColumn(std::string str) const;

};

#endif