#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	int			_phone_number;
	std::string	_darkest_secret;
public:
	Contact();
	~Contact();

	void	set_first_name( std::string first_name);
	void	set_last_name( std::string last_name);
	void	set_phone_number(int phone_number);
	void	set_nickname( std::string nickname);
	void	set_darkest_secret( std::string darkest_secret);

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	int			get_phonNumber() const;
	std::string	get_darkest_secret() const;
	
};

#endif