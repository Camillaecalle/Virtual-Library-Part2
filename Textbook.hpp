

#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_
#include "Book.hpp"

#include <string>

enum grade_level { NONE, ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook : public Book {
    private: 
    std::string subject_;
    grade_level grade_; 
    bool review_questions_;

    public:
    Textbook();
    Textbook(std::string title, std::string author, int page_count, std::string subject, bool review_questions, grade_level grade = NONE, bool is_digital = false);
    void setSubject(const std::string& subject);
    std::string getSubject() const;
    void setGradeLevel(const grade_level& grade);
    std::string getGradeLevel() const;
    void setReviewQuestions(const bool& review_questions);
    bool checkReviewQuestions() const;

};
#endif