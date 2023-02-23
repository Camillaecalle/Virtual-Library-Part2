
#include "Manual.hpp"

Manual::Manual(){

    url_ = ""; 
    device_ = "";
    visual_ = false;
    website_ = false;
}

Manual::Manual(const std::string& title,const std::string& author,const int page_count,const std::string& device, bool is_digital,const std::string& url, bool visual_aid):
Book(title, author, page_count, is_digital){
    
    device_ = device;
    visual_ = visual_aid;
    const std::string regexPattern("https?://www.[a-zA-Z0-9-~:/?#@!$&+,;%=]+.[a-zA-Z0-9-~:/?#@!$&+,;%=]{2,}");
    std::regex regexRule(regexPattern);
    bool valid = regex_match(url,regexRule);
    if (valid == true) 
    {
        url_ = url;
        website_ = true;
    }
    else if(valid == false)
    {
        url_ = "";
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
  
bool Manual::setWebsite (const std::string& url) {
    std::string const regexPattern=("https?://www\\.[a-zA-Z0-9-~:/?#@!$&+,;%=]+\\.[a-zA-Z0-9-~:/?#@!$&+,;%=]{2,}");
    std::regex regexRule(regexPattern);
    bool valid = regex_match(url, regexRule);
    if (valid == true) {
        url_ = url;
        website_ = true;
    }
    else if (valid==false){       ///Might have to fix const in regexPattern.
        url_ = "Broken Link";
    }
        website_=true; //false before
        return website_;
    }

std::string Manual::getWebsite() const{
    return url_;
}


void Manual::setVisualAid(const bool& visual_aid) {
    visual_ = visual_aid;
}


bool Manual::hasVisualAid() const{
    return visual_;
}

bool Manual::hasWebsite() const{
    return website_;

}
