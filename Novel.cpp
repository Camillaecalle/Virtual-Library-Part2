

"Novel.hpp"


Novel::Novel(){
    genre_ = "";
    charecter_list_ = ;
    review_ = ;
    average_rating_ = ;
    has_film_adaptation_ = false;
}

//Parameterized Constructor

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool film_adaptation):
Book(title, author, page_count, is_digital) {
    genre_=genre;
    has_film_adaptation_=film_adaptation;
}


void Novel::setGenre(const std::string& subject) {
    genre_=genre;
}


std::string Novel::getGenre(const std::string& genre) {
    return genre_;
}


std::vector<char> Novel::getCharacterlist()const{ //NOT SURE IF I WROTE THIS CORRECTLY
    return character_list_;
}

std::string Novel::getCharecterListString()const{ //is this supposed to be string? //NEED TO WRITE STILL!!!
    return 0;
    /**
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
//getCharacterListString

}

void Novel::addCharecter(const std::string& charecter){ //NEED TO WRITE STILL!!!
    /**
  @param  : a reference to string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
//addCharacter
}


bool Novel::hasFilmAdaptation() const{
    return has_film_adaptation_;
}

void Novel::setFilmAdaptation() const{
    has_film_adaptation = true;
}

double Novel::getAverageRating()const{ //the value of the average rating private member STILL NEED TO WRITE!!!
    return 0;
}


std::vector<review> Novel::createReview(const float& review){
    return 0;
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
    reviews_.insert(review);
}


void Novel::calculateAverageRating(const double& average_rating){ //Need to finish!!!
    return 0;
}


/**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
//calculateAverageRating










