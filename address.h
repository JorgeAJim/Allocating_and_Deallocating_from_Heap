//address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <string>

class Address {
  protected:
    std::string* addressOne;
    std::string* addressTwo;
    std::string* city;
    std::string* state;
    std::string* zipcode;

  public:
    Address();
    Address(std::string addressOne, std::string addressTwo, std::string city, std::string state, std::string zipcode);
    ~Address();
    std::string getAddressOne();
    void setAddressOne(std::string addressOne);
    std::string getAddressTwo();
    void setAddressTwo(std::string addressTwo);
    std::string getCity();
    void setCity(std::string city);
    std::string getState();
    void setState(std::string state);
    std::string getZipcode();
    void setZipcode(std::string zipcode);

};//end class definition

#endif
