#ifndef	CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <string>

class	ContactClass
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNbr;
		std::string	DarkestSecret;
	public:
		ContactClass(void);
		~ContactClass(void);
		void			AddContact(void);
		void			DisplayContacts(int index);
		void			TruncateAttributes(void);
		void			DisplayFullInfo(int index);
};

#endif
