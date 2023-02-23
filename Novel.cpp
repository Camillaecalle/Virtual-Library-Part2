#include "Novel.hpp"

Novel::Novel() {
    genre_ = "";
    rating_={0.0};
    has_film_adaptation_=false;
} 

//Parameterized Constructor

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool film_adaptation):
Book(title, author, page_count, is_digital) {
    genre_=genre;
    has_film_adaptation_ = film_adaptation;

}

std::string Novel::getGenre() const {
    return genre_;
}

void Novel::setGenre(const std::string& genre) {
    genre_ = genre;
}

std::vector<char> Novel::getCharacterlist()const{ 
    return character_list_; 
}

 //   character_list_.erase(character_list_.back());

std::string Novel::getCharacterListString() const{ 
    std::string result = "";
    for(int i = 0; i < character_list_.size(); i++){
        result += character_list_[i] + " ";     
    } 
    return result;  //NEED TO CHECKKKKKKKKKKKKKKKKKKKKKKKKKKKK
}

void Novel::addCharacter(const std::string& character_list) {
    character_list_.push_back(character_list);
}

 bool Novel::hasFilmAdaptation() const{
    return has_film_adaptation_;
 }

void Novel::setFilmAdaptation(const bool& has_film_adaptation){
    
     has_film_adaptation_ = true;
 }

 double Novel::getAverageRating()const{ //the value of the average rating private member STILL NEED TO WRITE!!!
    
    return average_rating_;
 }



////THIS DOWN NEEDS TO BE CHECKED


/**
  @param    : a reference to floating point number (double) indicating
              the score of the  review
  @param    : a reference to string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
//createReview

std::vector<review> Novel::createReview(const double& review, std::string& rating){

     return reviews_.rating_;

 }

/**
  @param  : a reference to review object
  @post   : inserts the review argument into the reviews_ vector
**/


void Novel::addReview(const std::vector<review> &review){ //NEED TO CHECK
    reviews_.insert(review);
}


// void Novel::calculateAverageRating(const double& average_rating){
//     int review;
//     for (int i = 0; i < average_rating_.size; i++){
//         review = review + average_rating_[i];
//     }
//    // average_rating_ = review/average_rating_.size();
//     return average_rating_;
// }













