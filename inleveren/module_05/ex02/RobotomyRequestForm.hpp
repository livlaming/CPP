#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form{
private:
    std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

    void execute(Bureaucrat const & executor) const;
    class RobotomyFailed : public std::exception {
    public:
        virtual const char * what() const throw()
        {
            return ("The robotomy failed");
        }
    };
};


#endif
