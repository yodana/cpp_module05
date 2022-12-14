#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main( void ) {
    try
    {
        Bureaucrat a("name", 150);
        std::cout << a << std::endl;
        a.decrementation();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a("name", -1);
        std::cout << a << std::endl;

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a("name", 1);
        a.incrementation();
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}