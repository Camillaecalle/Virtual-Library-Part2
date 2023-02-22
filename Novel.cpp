#include "Novel.hpp"

Novel::Novel(){
    genre_ = "";
    has_film_adaptation_ = false;
}

//Parameterized Constructor

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool film_adaptation):
Book(title, author, page_count, is_digital) {
    genre_=genre;
    has_film_adaptation_ = film_adaptation;
}


void Novel::setGenre(const std::string& genre) {
    genre_ = genre;
}


std::string Novel::getGenre() const {
    return genre_;
}


std::vector<char> Novel::getCharacterlist()const{ //NOT SURE IF I WROTE THIS CORRECTLY
    return character_list_; 
}

std::string Novel::getCharacterListString() const{ //is this supposed to be string? //NEED TO WRITE STILL!!!
    std::string result = "";
    for(int i = 0; i < character_list_.size(); i++){
        result += character_list_[i] + " "; 
    } 
    return result;  //NEED TO CHECKKKKKKKKKKKKKKKKKKKKKKKKKKKK
}

void Novel::addCharacter(const std::string& character){ //NEED TO WRITE STILL!!!
    /**
  @param  : a reference to string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
//addCharacter
}


bool Novel::hasFilmAdaptation() const{
    return has_film_adaptation_;
}

void Novel::setFilmAdaptation(const bool& has_film_adaptation){
    
    has_film_adaptation_ = true;
}

double Novel::getAverageRating()const{ //the value of the average rating private member STILL NEED TO WRITE!!!

    return 0;
}


std::vector<review> Novel::createReview(const double& review){
    return reviews_;
}



/**
  @param    : a reference to floating point number (double) indicating
              the score of the  review
  @param    : a reference to string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
//createReview


void Novel::addReview(const std::vector<review> &review){ //NEED TO CHECK
    //reviews_.insert(review);
}


void Novel::calculateAverageRating(const double& average_rating){ //Need to finish!!!
}


/**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
//calculateAverageRating










