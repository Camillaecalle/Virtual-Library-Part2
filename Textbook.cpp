//Camilla Calle
//Febuary 18, 2023
//Textbook.cpp
//Textbook.cpp implements the functions we declared in Textbook.hpp, we use inheritance and the enum grade_level.

#include "Textbook.hpp"

/**
  Default constructor.
  Default-initializes all private members.
*/
Textbook::Textbook(){
    subject_ = "";
    grade_ = NONE;
    review_questions_ = false;
}

/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The subject of the book (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : The grade level of the book (of type grade_level)
                with DEFAULT VALUE NONE
  @param     : A boolean to indicate whether the book has review
                questions with DEFAULT VALUE False
  @post      : The private members are set to the values of the
                corresponding parameters.
*/
Textbook::Textbook(const std::string& title,const std::string& author, const int page_count,const std::string& subject, bool is_digital,const grade_level& grade, bool review_questions):
Book(title, author, page_count,is_digital){
    grade_=grade;
    subject_=subject;
    review_questions_=review_questions;
}

/**
 * setSubject
  @param  : a reference to a string representing the the subject of the book
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setSubject (const std::string& subject) {
    subject_=subject;
}

/**
 * getSubject
  @return  : the subject of the textbook
**/
std::string Textbook::getSubject() const{
    return subject_;
}

/**
 * setGradeLevel
  @param  : a reference to a grade_level
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setGradeLevel(const grade_level& grade){
    grade_ = grade;
}

/**
 * getGradeLevel
  @return  : a string representative of the grade_level
            (e.g. if the grade level is JUNIOR_HIGH,
            it returns "JUNIOR HIGH")
**/
std::string Textbook::getGradeLevel() const{
    switch(grade_){
    case 0:
    return "NONE";
    break; 
    case 1:
    return "ELEMENTARY";
    break;
    case 2:
    return "JUNIOR HIGH";
    break;
    case 3:
    return "HIGH SCHOOL";
    break;
    case 4:
    return "COLLEGE";
    break;
    }
}

/**
 * setReviewQuestions
  @post   : sets the review question flag to True
**/
void Textbook::setReviewQuestions(){ //NO CONSTANT
    review_questions_ = true;
}

/**
 * checkReviewQuestions
  @return  : the flag indicating if the texbook has review questions
**/
bool Textbook::checkReviewQuestions() const{
    return review_questions_;
}









