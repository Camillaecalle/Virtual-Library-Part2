//Camilla Calle
//Febuary 15, 2023
//Manual.hpp
//This is the implementation file used to implement the functions I defined in the interface file.
//Here I used inheritance and worked with the Book class I created in the previous project. 

#include "Manual.hpp"

Manual::Manual(){

    url_ = "";
    device_ = "";
    visual_ = false;
    website_ = false;

}

/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The name of the device (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : The URL that is in the format
                'https://www.something.something'
                or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                with DEFAULT VALUE empty string (a string)
  @param     : A Boolean indicating the presence of a visual aid
                with DEFAULT VALUE False
  @post      : The private members are set to the values of the
                corresponding parameters.
                If a URL is provided, the website flag is set to True.
                If the URL is ill-formatted, the website is set to
                empty string and the website flag is set to False.
*/

Manual::Manual(std::string title, std::string author, int page_count, std::string device, bool is_digital, std::string url, bool visual):Book(title, author, page_count, is_digital){
    url_=url;
    device_=device;
    visual_=visual;

}

//Mutators and Accessor Funcitons

/**
  @param  : a reference to a string representing the device
  @post   : sets the private member variable to the value of the parameter
**/
//setDevice

void Manual::setDevice (const std::string& device){
    device_=device;
}

/**
  @return  : the variable indicating the device the manual is for
**/
//getDevice

std::string Manual::getDevice() const{
    return device_;
}
  
/**
  @param   : a reference to a website link (string) that is in the format
             'https://www.something.something'
             or 'http://www.something.something'
             with the last 'something' being at least 2 characters
  @return  : has_website_ flag (a boolean)
  @post    : If the link is not correctly formatted,
             store "Broken Link" in the link member variable (see <regex>)
             and either way set the has website flag to True
**/
//setWebsite


void Manual::setWebsite (const std::string& website, std::string& url) {
    std::string regexPattern = "https?://www^\\.[a-zA-Z]{2,}\\.[a-zA-Z]{2,}";
    std::regex regexRule(regexPattern);
    if (regex_match(url, regexRule)) {
        url_ = url;
        website_ = true;
    }
    else {
        url_ = "";
        website_=false;
    }

}



/**
  @return  : the url for the website
**/
// //getWebsite

// std::string Manual::getWebsite() const{
//     return url_;
// }

// /**
//   @param  : a reference to boolean
//   @post   : sets the private member variable indicating the presence
//             of a visual aid to the value of the parameter
// **/
// //setVisualAid()

// void setVisualAid(const std::string &visaul_aid) {
//     visual_=visual_aid;
// }
// std::string hasVisualAid() {
//     return visual_aid;
// }
// std::string hasWebsite() {
//     return website;
// }
