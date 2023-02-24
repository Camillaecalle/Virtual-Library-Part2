//Camilla Calle
//Febuary 22, 2023
//Novel.cpp
//Novel.cpp is the implementation of the functions in the interaface file, Novel.hpp.

#include "Novel.hpp"

/**
  Default constructor.
  Default-initializes all private members.
*/
Novel::Novel(){
    genre_ = "";
    averagerating_ = 0;
    has_film_adaptation_=false;
    character_list_= {};
    reviews_ ={};
} 

/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The genre of the novel (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : A flag indicating whether there is a film adaptation
                for this novel with DEFAULT VALUE False (a Boolean)
*/   
Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool film_adaptation):
Book(title, author, page_count, is_digital) {
    genre_ = genre;
    has_film_adaptation_ = film_adaptation;
}

/**
 * setGenre
  @param  : a reference to string indicating the genre of the book
  @post   : sets genre_ private member to the
              value of the parameter
**/
void Novel::setGenre(const std::string& genre) {
    genre_ = genre;
}

/**
 * getGenre
  @return   : the value of the genre private member
**/
std::string Novel::getGenre() const{
    return genre_;
}

/**
 * getCharacterList
  @return   : the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList()const{ 
    return character_list_; 
}

/**
 * getCharacterListString
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
std::string Novel::getCharacterListString() const{
    std::string character_list_strings = "";
    for(int i=0; i< character_list_.size();i++) {
        if(i != character_list_.size() -1)
        character_list_strings = character_list_strings + character_list_[i] + " ";
        else {
            character_list_strings = character_list_strings + character_list_[i];
        }
    }
    return character_list_strings;
}

/**
 * addCharacter
  @param  : a reference to string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
void Novel::addCharacter(const std::string& character_name) {
    character_list_.push_back(character_name);
}

/**
 * hasFilmAdaptation
  @return   : the value of the film_adaptation_ private member
**/
bool Novel::hasFilmAdaptation() const{
    return has_film_adaptation_;
 }

/**
 * setFilmAdaptation
  @post   : sets has_film_adaptation_ private member to true
**/
void Novel::setFilmAdaptation(){  
     has_film_adaptation_ = true;
 }

/**
 * getAverageRating
  @return   : the value of the average rating private member
**/
 double Novel::getAverageRating()const{  
    return averagerating_;
 }

/**
 * createReview
  @param    : a reference to floating point number (double) indicating
              the score of the  review
  @param    : a reference to string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
review Novel::createReview(const double& score,const std::string& rating){  //Look back at data type
    review create; 
    create.score_ = score; 
    create.rating_ = rating;
    return create;
 }

/**
 * addReview
  @param  : a reference to review object
  @post   : inserts the review argument into the reviews_ vector
**/
void Novel::addReview(const review& object){
    reviews_.push_back(object);
}

/**
 * calculateAverageRating
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
void Novel::calculateAverageRating(){
    if(reviews_.empty()) {
        averagerating_ = 0;
        return ;
    }
    else {
        double stor = 0;
        for(int i = 0; i == reviews_.size(); i++){ 
            stor += reviews_[i].score_; //goes through the vector and all of the elements scores and puts into storage. 
        }
        averagerating_ = stor/reviews_.size();
    }
}





