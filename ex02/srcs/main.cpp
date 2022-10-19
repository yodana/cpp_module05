#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main( void ) {
    try
    {
        Bureaucrat a("name", 150);
        Form f("form_name", 1, 1);
        std::cout << a << std::endl;
        std::cout << f << std::endl;
        a.signForm(f);
        f.beSigned(&a);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a("name", 1);
        Form f("form_name", 1, 1);
        std::cout << a << std::endl;
        std::cout << f << std::endl;
        f.beSigned(&a);
        a.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form f("form_name", -1, 1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a("name", 1);
        Form f("form_name", 1, 2);
        std::cout << a << std::endl;
        std::cout << f << std::endl;
        f.beSigned(&a);
        a.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}