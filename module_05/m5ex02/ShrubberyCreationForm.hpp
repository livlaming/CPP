//
// Created by Lisa Vlamings on 8/15/22.
//

#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form{
private:
    std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

    void execute(Bureaucrat const & executor) const;
};


#endif //CPP_SHRUBBERYCREATIONFORM_HPP
