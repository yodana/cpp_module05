#ifndef SHRUBERRYCREATIONFORM_H
#define RobotomyRequestForm_H
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm: public Form{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(std::string name);
        RobotomyRequestForm(RobotomyRequestForm const &src); 
        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
        void execute(Bureaucrat const & executor) const;
        
    private:
        std::string _target;
};

#endif