#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm():Form("robotomy request", 72, 45), _target("default_target"){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("robotomy request", 72, 45), _target(target){
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):Form(src.getName(), src.getGradeSign(), src.getGradeExec()){
    *this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
    if (this != &rhs){
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    srand((unsigned) time(NULL));
    if (this->getSign() == 1 && this->getGradeExec() >= executor.getGrade()){
        std::cout << "Brzz Brzz" << std::endl;
        if ((rand() % 2) == 0)
            std::cout  << this->_target << " is robotised SUCCESS." << std::endl;
        else
            std::cout << this->_target << " is not robotised FAILED." << std::endl;
    }
    else if (this->getSign() == 0)
        throw Form::FormNotSignedException();
    else
        throw Form::GradeTooLowException();
}
