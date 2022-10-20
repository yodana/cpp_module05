#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main( void ) {
    /*try
    {
        // not possible gradeExec too low
        Bureaucrat a("name", 140);
        Form *b = new ShrubberyCreationForm("target_schrubbery");
        std::cout << a << std::endl;
        std::cout << *b << std::endl;
        b->beSigned(&a);
        a.executeForm(*b);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }*/
    /*try
    {
        //possible Shrubbery
        Bureaucrat a("name", 50);
        Form *b = new ShrubberyCreationForm("target_schrubbery");
        std::cout << a << std::endl;
        std::cout << *b << std::endl;
        b->beSigned(&a);
        std::cout << *b << std::endl;
        a.executeForm(*b);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }*/
    try
    {
        // ne fonctionne pas
        Bureaucrat a("name", 140);
        Form *b = new RobotomyRequestForm("target_robotomy");
        std::cout << a << std::endl;
        std::cout << *b << std::endl;
        b->beSigned(&a);
        b->execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        // fonctionne
        Bureaucrat a("name", 1);
        Form *b = new RobotomyRequestForm("target_robotomy");
        std::cout << a << std::endl;
        std::cout << *b << std::endl;
        b->beSigned(&a);
        b->execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        //Bureaucrat a("name", 6);
        Bureaucrat a("name", 5);
        Form *f = new PresidentialPardonForm("target_presidential");
        std::cout << a << std::endl;
        std::cout << *f << std::endl;
        f->beSigned(&a);
        f->execute(a);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}