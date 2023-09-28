//student.cpp

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include "date.h"
#include "address.h"
#include "student.h"

Student::Student(){
  Student::firstName = new std::string("");
  Student::lastName = new std::string("");
  Student::gpa = new std::string("");
  Student::creditHours = new std::string("");
  Student::address = new Address();
  Student::birthDate = new Date();
  Student::graduationDate = new Date();
}//end null constructor

Student::Student(std::string firstName, std::string lastName, std::string gpa, std::string creditHours){
  //may need to add parameters for birthDate, graduationDate, and address
  Student::firstName = new std::string(firstName);
  Student::lastName = new std::string(lastName);
  Student::gpa = new std::string(gpa);
  Student::creditHours = new std::string(creditHours);
  Student::address = new Address();
  Student::birthDate = new Date();
  Student::graduationDate = new Date();
}//end initializer 

Student::~Student(){
  delete firstName;
  delete lastName;
  delete gpa;
  delete creditHours;
  delete address;
  delete birthDate;
  delete graduationDate;
}//end distructor

std::string Student::getFirstName(){
  return *firstName;
}//end getFirstName

void Student::setFirstName(std::string firstName){
  *Student::firstName = firstName;
}//end setFirstName

std::string Student::getLastName(){
  return *lastName;
}//end getLastName

void Student::setLastName(std::string lastName){
  *Student::lastName = lastName;
}//end setLastName

std::string Student::getGpa(){
  return *gpa;
}//end getGpa

void Student::setGpa(std::string gpa){
  *Student::gpa = gpa;
}//end setGpa

std::string Student::getCreditHours(){
  return *creditHours;
}//end getCreditHours

void Student::setCreditHours(std::string creditHours){
  *Student::creditHours = creditHours;
}//end setCreditHours

//getters for the Date and Address class instances
Address* Student::getAddress(){
  return Student::address;
}//end getAddress

Date* Student::getBirthDate(){
  return Student::birthDate;
}//end getBirthDate

Date* Student::getGraduationDate(){
  return Student::graduationDate;
}//end getGraduationDate


void Student::fullReport(){
  std::stringstream ss;
  ss << getFirstName() << ", " << getLastName() << ", " << address->getAddressOne() << ", " << address->getAddressTwo() << ", " << address->getCity() << ", " << address->getState() << ", " << address->getZipcode() << ", " << birthDate->getGivenDate() << ", " << graduationDate->getGivenDate() << ", " << getGpa() << ", " << getCreditHours();
  std::string report = ss.str();
  std::ofstream outFile;
  outFile.open("fullReport.txt", std::ios::app);
  outFile << report << std::endl;
  outFile.close();
}//end fullReport

void Student::shortReport(){
  std::stringstream ss;
  ss << getFirstName() << ", " << getLastName();
  std::string report = ss.str();
  std::ofstream outFile;
  outFile.open("shortReport.txt", std::ios::app);
  outFile << report << std::endl;
  outFile.close();
}//end shortReport

