#ifndef SHRUBERRYCREATIONFORM_H
#define SHRUBERRYCREATIONFORM_H
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm: public Form{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm const &src); 
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
        void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif