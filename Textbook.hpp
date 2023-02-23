

#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_
#include "Book.hpp"
#include <iostream>
#include <string>

enum grade_level { NONE, ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook : public Book {
    private: 
    std::string subject_;
    grade_level grade_; 
    bool review_questions_;

    public:
    Textbook();
    Textbook(const std::string& title, const std::string& author,const int page_count, const std::string& subject, bool is_digital = false, const grade_level& grade = NONE, bool review_questions = false);  
    void setSubject(const std::string& subject);
    std::string getSubject() const;
    void setGradeLevel(const grade_level& grade);
    std::string getGradeLevel() const;
    void setReviewQuestions();
    bool checkReviewQuestions() const;

};
#endif