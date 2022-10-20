#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "../includes/Form.hpp"
class Intern{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &src); 
        Intern & operator=(Intern const & rhs);
        Form* makeForm(std::string name, std::string target);
        class NameNotExistException : public std::exception{
            public:
                 virtual const char* what() const throw();
            };
};

#endif