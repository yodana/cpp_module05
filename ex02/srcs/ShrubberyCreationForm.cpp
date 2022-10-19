 #include "../includes/Bureaucrat.hpp"
 #include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("default_name", 145, 137){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):Form(name, 145, 137){
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