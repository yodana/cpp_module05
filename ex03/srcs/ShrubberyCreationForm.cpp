#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm():Form("shrubbery request", 145, 137), _target("default_target"){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("shrubbery request", 145, 137), _target(target){
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):Form(src.getName(), src.getGradeSign(), src.getGradeExec()){
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    if (this != &rhs){
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->getSign() == 1 && this->getGradeExec() >= executor.getGrade()){
        std::ofstream f;
        f.open(this->_target + "_shrubbery.txt");
        f << " \\/ \\/ \\/        \\/  \\/ \\/" << std::endl;
        f << " |   |   |       |    |   |" << std::endl;
        f << " \\  |   /        \\   |   /" << std::endl;
        f << "   \\| /            \\| /" << std::endl;
        f << "     |               | " << std::endl;
        f.close();
    }
    else if (this->getSign() == 0)
        throw Form::FormNotSignedException();
    else
        throw Form::GradeTooLowException();
}