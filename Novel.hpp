
#ifndef NOVEL_HPP_
#define NOVEL_HPP_
#include "Book.hpp"
#include <vector>
#include <string>


struct review {
    double score_;
    std::string rating_;
};

//   - a string indicating the genre of the novel
//   - a vector of strings storing the characters
//     in the novel (a character list)
//   - a vector of reviews (type review defined in the above struct)
//     storing the reviews for this novel
//   - a floating point number (double) storing the average rating
//   - a boolean indicating whether a film adaptation for this
//     novel exists

class Novel: public Book {
    private: 
  
    std::string genre_;
    std::vector<char> character_list_;
    std::vector<review> reviews_;
    double averagerating_;
    bool filmad_aptation_;



    public:
    Novel();

    std::string getGenre(const std::string& genre);
    void setGenre(const std::string& subject);


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

};




#endif