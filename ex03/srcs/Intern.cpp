#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern(){
    return ;
}

Intern::~Intern(void){
    return ;
}

Intern::Intern(Intern const &src){
    *this = src;
}

Intern& Intern::operator=(Intern const & rhs){
    if (this != &rhs){
    }
    return *this;
}

Form* Intern::makeForm(std::string name, std::string target){
    Form *form[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    Form* tmp = NULL;
    std::string names[3] = {"presidential request", "robotomy request", "shrubbery request"};
    for (int i = 0; i <= 2; i++){
        if (name == names[i]){
            tmp = form[i];
        }
        else{
            delete form[i];
        }
    }
    if (tmp == NULL)
        throw NameNotExistException();
    std::cout << "Intern creates " << target << std::endl;
    return tmp;
}

const char* Intern::NameNotExistException::what() const throw(){
    return "Name's form doesn't exist.";
}