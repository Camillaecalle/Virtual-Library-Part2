//Camilla Calle
//Febuary 15, 2023
//Manual.hpp
//This is the interface file used to define functions. Here I used inheritance and worked with the Book class I created 
//in the previous project.


#ifndef MANUAL_HPP_
#define MANUAL_HPP_
#include "Book.hpp"
#include <iostream>
#include <string>
#include <regex>


//declare enum

class Manual : public Book {

//Private Member Variables needed
//   - a string that represents a url
//   - a string that represents the name of the device
//   - a boolean indicating whether the Manual has a visual aid
//   - a boolean indicating whether the Manual has a website
private: 
std::string url_;
std::string device_;
bool visual_;
bool website_;

public:
Manual();
Manual(std::string title, std::string author, int page_count, std::string device, bool is_digital = false, std::string url = "", bool visual_aid = false);

void setDevice (const std::string& device);

std::string getDevice() const;

void setWebsite (const std::string& website, std::string& url);

std::string getWebsite() const;

void setVisualAid(const bool& visaul_aid);
bool hasVisualAid() const;
bool hasWebsite() const;
};
#endif