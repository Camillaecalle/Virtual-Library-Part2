#include "Novel.hpp"

Novel::Novel() {
    genre_ = "";
    averagerating_ = 0;
    has_film_adaptation_=false;
} 

//Parameterized Constructor

Novel::Novel(const std::string& title,const std::string& author,const int page_count,const std::string& genre, bool is_digital, bool film_adaptation):
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

std::vector<std::string> Novel::getCharacterlist()const{ 
    return character_list_; 
}


std::string Novel::getCharacterListString() const{
    std::string character_list_string = "";
    for(int i=0; i< character_list_.size();i++) {
            character_list_string = character_list_string + character_list_[i] + " ";
        else{
            character_list_string = character_list_string + character_list_[i];
        }
    }
    return character_list_string;
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

 double Novel::getAverageRating()const{ 
    
    return averagerating_;
 }

review Novel::createReview(const double& score, std::string& rating){  //Look back at data type
    review r; 
    r.score_ = score; 
    r.rating_ = rating;
    return r;

 }

void Novel::addReview(const review& review){
    reviews_.push_back(review);
}

 void Novel::calculateAverageRating(){ //reviews_ vector
    if (reviews_.size() == 0){
        averagerating_ = 0;
        return ;
    } else {
    double storage = 0; 
    for(int i = 0; i < reviews_.size(); i++){
        storage += reviews_[i].score_; //goes through the vector and all of the elements scores and puts into storage. 
    }
    storage = storage/reviews_.size();
    }
 }











