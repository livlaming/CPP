//
// Created by Lisa Vlamings on 8/15/22.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
    std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
