#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm: public Form{
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm(PresidentialPardonForm const &src); 
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif