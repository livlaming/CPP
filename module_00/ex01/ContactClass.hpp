//
// Created by Lisa Vlamings on 12/13/21.
//
#ifndef	CONTACTCLASS_HPP
# define CONTACTCLASS_HPP
#include <iostream>
#include <string>

class	ContactClass
{
private:
        std::string	_FirstName;
        std::string	_LastName;
        std::string	_NickName;
        std::string	_PhoneNumber;
        std::string	_DarkestSecret;
    public:
        ContactClass(void);
        ~ContactClass(void);

        void    setFirstName(void);
        const   std::string &getFirstName() const;
        void    setLastName(void);
        const   std::string &getLastName() const;
        void    setNickName(void);
        const   std::string &getNickName() const;
        void    setPhoneNumber(void);
        const   std::string &getPhoneNumber() const;
        void    setDarkestSecret(void);
        const   std::string &getDarkestSecret() const;
};

#endif //CPP__PHONEBOOK_CLASS_HPP


