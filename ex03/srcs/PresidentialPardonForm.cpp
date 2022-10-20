 #include "../includes/Bureaucrat.hpp"
 #include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("presidential request", 25, 5), _target("default_target"){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("presidential request", 25, 5), _target(target){
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
    if (this->getSign() == 1 && this->getGradeExec() >= executor.getGrade()){
       std::cout << this->_target << " is forgived by Zaphod Beeblebrox." << std::endl;
    }
    else if (this->getSign() == 0)
        throw Form::FormNotSignedException(); 
    else
        throw Form::GradeTooLowException();
}