#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    public:
        Form();
        ~Form(void);
        Form(std::string name, int gradeSign, int gradeExec);
        Form(Form const &src); 
        Form & operator=(Form const & rhs);
        class GradeTooHighException : public std::exception{
            public:
                 virtual const char* what() const throw();

            };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
            };
        void beSigned(Bureaucrat *a);
        bool getSign() const;
        void setSign(bool t);
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;

    private:
        std::string _name;
        bool _sign;
        const int _gradeSign;
        const int _gradeExec;
};

std::ostream & operator<<(std::ostream& o, Form const & i);
#endif