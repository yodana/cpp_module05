 #include "../includes/Bureaucrat.hpp"
 #include "../includes/Form.hpp"

Bureaucrat::Bureaucrat():_name("default_name"), _grade(150){
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade){
    if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
        this->_grade = 150;
    }
    else if(grade < 1){
        throw Bureaucrat::GradeTooHighException();
        this->_grade = 1;
    }
    return ;
}

Bureaucrat::~Bureaucrat(void){
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs){
    if (this != &rhs){
        this->_name = rhs._name;
        this->_grade = rhs._grade;
    }
    return *this;
}
        
const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "The grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "The grade is too low";
}

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

void Bureaucrat::decrementation(){
    if (this->_grade + 1 > 150){
        throw Bureaucrat::GradeTooLowException();
        return ;
    }
    this->_grade = this->_grade + 1;
}

void Bureaucrat::incrementation(){
      if (this->_grade - 1 < 1){
        throw Bureaucrat::GradeTooHighException();
        return ;
    }
    this->_grade = this->_grade - 1;
}

void Bureaucrat::signForm(const Form &f) const{
    if (f.getSign())
        std::cout << this->_name << " signed " << f.getName() << std::endl;
    else{
        std::cout << this->_name << " couldn’t sign " << f.getName() << " because gradeExec too low." << std::endl;
    }
}

std::ostream & operator<<(std::ostream& o, Bureaucrat const & i){
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
    return o;
}