//
// Created by Lisa Vlamings on 8/15/22.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

    void execute(Bureaucrat const & executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
