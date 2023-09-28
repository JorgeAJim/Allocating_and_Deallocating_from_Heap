//date.cpp

#include "date.h"

Date::Date() {
  Date::givenDate = new std::string("");
}//end null constructor

Date::Date(std::string givenDate){
  Date::givenDate = new std::string(givenDate);

}//end initializer constructor

Date::~Date(){
  delete givenDate;
}//end distructor

std::string Date::getGivenDate(){
  return *givenDate;
}//end getGivenDate

void Date::setGivenDate(std::string givenDate){
  *Date::givenDate = givenDate;
}//end setGivenDate

