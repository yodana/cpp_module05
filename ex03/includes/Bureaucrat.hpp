#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "../includes/Form.hpp"

class Form;

class Bureaucrat{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat & operator=(Bureaucrat const & rhs);
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw();

        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        std::string getName() const;
        int getGrade() const;
        void decrementation();
        void incrementation();
        void signForm(Form const &f) const;
        void executeForm(Form const & form);

    private:
        std::string _name;
        int _grade;
};

std::ostream & operator<<(std::ostream& o, Bureaucrat const & i);
#endif