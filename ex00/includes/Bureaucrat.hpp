#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

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

    private:
        std::string _name;
        int _grade;
};

std::ostream & operator<<(std::ostream& o, Bureaucrat const & i);
#endif