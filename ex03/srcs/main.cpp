#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main( void ) {
    try
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Bureaucrat a("name", 1);
        rrf->beSigned(&a);
        rrf->execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("doest exist", "Bender");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat a("name", 1);
        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        rrf->beSigned(&a);
        rrf->execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}