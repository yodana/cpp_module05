#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main( void ) {
    Bureaucrat* a("name", 150);
    std::cout << a << std::endl;
    try
    {
        a->decrementation();
    }
    catch (std::exception & e)
    {
        e.what();
    }
}