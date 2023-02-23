
#include "Textbook.hpp"

Textbook::Textbook(){
    review_questions_ = false;
    grade_ = NONE;
    subject_ = "";

}

Textbook::Textbook(const std::string& title,const std::string& author, const int page_count,const std::string& subject, bool is_digital,const grade_level& grade, bool review_questions):
Book(title, author, page_count,is_digital){

    subject_=subject;
    grade_=grade;
    review_questions_=review_questions;
}


void Textbook::setSubject (const std::string& subject) {
    subject_=subject;
}

std::string Textbook::getSubject() const{
    return subject_;
}

void Textbook::setGradeLevel(const grade_level& grade){
    grade_ = grade;
}

std::string Textbook::getGradeLevel() const{
    switch(grade_) {
    case 0:
    return "NONE";
    break; 
    case 1:
    return "ELEMENTARY";
    break;
    case 2:
    return "JUNIOR_HIGH";
    break;
    case 3:
    return "HIGH_SCHOOL";
    break;
    case 4:
    return "COLLEGE";
    break;
    }
}

void Textbook::setReviewQuestions(){ //NO CONSTANT
    review_questions_ = true;
}

bool Textbook::checkReviewQuestions() const{
    return review_questions_;
}









