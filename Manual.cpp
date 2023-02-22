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

Manual::Manual(std::string title, std::string author, int page_count, std::string device, bool is_digital, std::string url, bool visual_aid):Book(title, author, page_count, is_digital){
    
    device_ = device;
    visual_ = visual_aid;
    std::string regexPattern = "https?://www.[a-zA-Z0-9-~:/?#@!$&+,;%=]+.[a-zA-Z0-9-~:/?#@!$&+,;%=]{2,}";
    std::regex regexRule(regexPattern);
    bool works = regex_match(url,regexRule);
    if (works == true) 
    {
        url_ = url;
        website_ = true;
    }
    else if(works == false)
    {
        url = "";
        website_ = false;
    }
}

//Mutators and Accessor Funcitons

void Manual::setDevice (const std::string& device){
    device_=device;
}

std::string Manual::getDevice() const{
    return device_;
}
  
void Manual::setWebsite (const std::string& website, std::string& url) {
    std::string regexPattern = "https?://www^\\.[a-zA-Z]{2,}\\.[a-zA-Z]{2,}";
    std::regex regexRule(regexPattern);
    if (regex_match(url, regexRule)) {
        url_ = url;
        website_ = true;
    }
    else {
        url_ = "";
        website_=false; //false before
    }

}

std::string Manual::getWebsite() const{
    return url_;
}

void Manual::setVisualAid(const bool& visual_aid) {
    visual_ = visual_aid;
}


bool Manual::hasVisualAid() const{
    return visual_;
    return true;
}

bool Manual::hasWebsite() const{
    return website_;
    return true;
}
