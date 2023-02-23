
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
    std::vector<char> character_list_;
    std::vector<review> reviews_;
    double averagerating_;
    bool has_film_adaptation_;


    public:
    Novel();
    Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool film_adaptation);
    std::string getGenre() const;
    void setGenre(const std::string& genre);
    //std::vector<char> getCharacterlist()const;
    std::vector<char> getCharacterlist()const;



    std::string getCharacterListString() const; //Do i need const here? 
    void addCharacter(const std::string& character_list);




    bool hasFilmAdaptation()const;
    void setFilmAdaptation(const bool& has_film_adaptation);
    double getAverageRating()const;
    std::vector<review> createReview(const double& review, std::string& rating);
    
    void addReview(const std::vector<review> &review);
    void calculateAverageRating(const double& average_rating);

};




#endif