 #include "../includes/Bureaucrat.hpp"
 #include "../includes/PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5), _target("default_target"){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5), _target(target){
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):Form(src.getName(), src.getGradeSign(), src.getGradeExec()), _target(src._target){
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
    if (this != &rhs){
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (this->getSign() == 1 && this->getGradeExec() <= executor.getGrade()){
        std::ofstream f;
        f.open(this->_target + "_shrubbery.txt");
        f << "\\/ \\/ \\/     \\/  \\/ \\/" << std::endl;
        f << " |   |   |       |    |   |" << std::endl;
        f << " \\  |   /       \\   |   /" << std::endl;
        f << "   \\| /            \\| /" << std::endl;
        f << "     |                | " << std::endl;
        f.close();
    }
}