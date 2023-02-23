
#ifndef NOVEL_HPP_
#define NOVEL_HPP_
#include "Book.hpp"
#include <vector>
#include <iostream>
#include <string>



struct review {
    double score_;
    std::string rating_;
};

class Novel: public Book {
    private: 

    std::string genre_;
    std::vector<std::string> character_list_; //vector
    std::vector<review> reviews_; //vector
    double averagerating_;
    bool has_film_adaptation_;
    public:
    Novel();
    Novel(const std::string& title,const std::string& author,const int page_count,const std::string& genre, bool is_digital = false, bool film_adaptation = false);
    std::string getGenre() const;
    void setGenre(const std::string& genre);
    std::vector<std::string> getCharacterList()const;

    std::string getCharacterListString() const;
    void addCharacter(const std::string& character_list);
    bool hasFilmAdaptation()const;
    void setFilmAdaptation(const bool& has_film_adaptation);
    double getAverageRating()const;
    review createReview(const double& score,const std::string& rating);
    
    void addReview(const review& review);
    void calculateAverageRating();

};




#endif