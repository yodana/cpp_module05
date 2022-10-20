 #include "../includes/Bureaucrat.hpp"
 #include "../includes/Form.hpp"

Form::Form():_name("default_name"), _gradeSign(150), _gradeExec(150){
    return ;
}

Form::Form(std::string name, int gradeSign, int gradeExec):_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec){
    if (gradeSign > 150 || gradeExec > 150){
        throw Form::GradeTooLowException();
    }
    else if(gradeSign < 1 || gradeExec < 1){
        throw Form::GradeTooHighException();
    }
    return ;
}

Form::~Form(void){
    return ;
}

Form::Form(Form const &src):_gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()){
    *this = src;
}

Form& Form::operator=(Form const & rhs){
    if (this != &rhs){
        this->_name = rhs._name;
        const_cast<int &>(this->_gradeSign) = rhs._gradeSign;
        const_cast<int &>(this->_gradeExec) = rhs._gradeExec;
    }
    return *this;
}
        
const char* Form::GradeTooHighException::what() const throw(){
    return "The grade is too high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "The grade is too low";
}

const char* Form::FormNotSignedException::what() const throw(){
    return "The form is not signed";
}

int Form::getGradeSign() const{
    return this->_gradeSign;
}

int Form::getGradeExec() const{
    return this->_gradeExec;
}

bool Form::getSign() const{
    return this->_sign;
}

void Form::setSign(bool t){
    this->_sign = t;
}

std::string Form::getName() const{
    return this->_name;
 }

void Form::beSigned(Bureaucrat *a){
    if (this->getGradeSign() < a->getGrade())
        throw Form::GradeTooLowException();
    this->setSign(true);
}

std::ostream & operator<<(std::ostream& o, Form const & i){
    o << i.getName() << ", Form gradeSign " << i.getGradeSign() << " Form gradeExec " << i.getGradeExec() << " Signature = " << i.getSign() << ".";
    return o;
}