//date.h

#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <string>

class Date{
  protected:
    std::string* givenDate;
  public:
    Date();
    Date(std::string givenDate);
    ~Date();
    std::string getGivenDate();
    void setGivenDate(std::string givenDate);
    //std::string getDay();
    //void setDay(std::string day);
    //std::string getMonth();
    //void setMonth(std::string month);
    //std::string getYear();
    //void setYear(std::string year);
};//end class def


#endif
