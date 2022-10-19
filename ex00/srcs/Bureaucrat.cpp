 #include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default_name"), _grade(150){
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade){
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
    this->_grade = this->_grade + 1;
}

void Bureaucrat::incrementation(){
    this->_grade = this->_grade - 1;
}

std::ostream & operator<<(std::ostream& o, Bureaucrat const & i){
    o << i.getName() << ", bureaucrat grade" << i.getGrade() << ".";
    return o;
}