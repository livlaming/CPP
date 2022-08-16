//
// Created by Lisa Vlamings on 8/15/22.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    PresidentialPardonForm(const PresidentialPardonForm &copy);

    void execute(Bureaucrat const & executor) const;

    class ImpossibleToSign : public std::exception {
    public:
        virtual const char * what() const throw()
        {
            return ("has NOT been pardoned by Zaphod Beeblebrox.");
        }
    };
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
