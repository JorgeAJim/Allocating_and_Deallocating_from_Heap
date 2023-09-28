//address.cpp

#include "address.h"

Address::Address(){
  Address::addressOne = new std::string("");
  Address::addressTwo = new std::string("");
  Address::city = new std::string("");
  Address::state = new std::string("");
  Address::zipcode = new std::string("");
}//end null construtor

Address::Address(std::string addressOne, std::string addressTwo, std::string city, std::string state, std::string zipcode){
  Address::addressOne = new std::string(addressOne);
  Address::addressTwo = new std::string(addressTwo);
  Address::city = new std::string(city);
  Address::state = new std::string(state);
  Address::zipcode = new std::string(zipcode);

}//end initializer constructor

Address::~Address(){
  //since instances of address will be created on the heap and be given data from the heap
  //the class may need it's own distructor
  delete addressOne;
  delete addressTwo;
  delete city;
  delete state;
  delete zipcode;
}//end distructor

void Address::setAddressOne(std::string addressOne){
  *Address::addressOne = addressOne;
}//end setAddressOne

std::string Address::getAddressOne(){
  return *addressOne;
}//end getAddressOne

std::string Address::getAddressTwo(){
  return *addressTwo;
}//end getAddressTwo

void Address::setAddressTwo(std::string addressTwo){
  *Address::addressTwo = addressTwo;
}//end setAddressTwo

std::string Address::getCity(){
  return *city;
}//end getCity

void Address::setCity(std::string city){
  *Address::city = city;
}//end setCity

std::string Address::getState(){
  return *state;
}//end getState

void Address::setState(std::string state){
  *Address::state = state;
}//end setState

std::string Address::getZipcode(){
  return *zipcode;
}//end getZipcode

void Address::setZipcode(std::string zipcode){
  *Address::zipcode = zipcode;
}//end setZipcode
