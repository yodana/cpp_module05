 #include "../includes/Bureaucrat.hpp"
 #include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("default_name", 72, 45){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name):Form(name, 72, 45){
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