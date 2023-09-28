//main.cpp

#include <iostream>
#include <sstream>
#include <fstream>
#include "date.h"
#include "address.h"
#include "student.h"

int main() {

  //create needed variables and stringstream
  std::string studentInfo;
  std::string first;
  std::string last;
  std::string address1;
  std::string address2;
  std::string city;
  std::string state;
  std::string zipcode;
  std::string birth;
  std::string graduation;
  std::string gpa;
  std::string credits;
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream ss;
  int i = 0;

  //create 50 students
  //for some reason, s is not considered a pointer
  //it could be because an array is a pointer, so s is not pointing to an array but another pointer
  Student *s = new Student[50];

  //open the students.dat file and start readins each line until the file ends
  inFile.open("students.txt");
  while(getline(inFile, currentLine)){
    //clean the stringstream
    ss.clear();
    ss.str("");

    //give the string stream the entire current line
    ss.str(currentLine);

    //fill in each of the variables with the corresponding student information
    getline(ss, last, ',');
    getline(ss, first, ',');
    getline(ss, address1, ',');
    getline(ss, address2, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    getline(ss, zipcode, ',');
    getline(ss, birth, ',');
    getline(ss, graduation, ',');
    getline(ss, gpa, ',');
    getline(ss, credits);



    s[i].setLastName(last);
    s[i].setFirstName(first);
    s[i].getAddress()->setAddressOne(address1);
    s[i].getAddress()->setAddressTwo(address2);
    s[i].getAddress()->setCity(city);
    s[i].getAddress()->setState(state);
    s[i].getAddress()->setZipcode(zipcode);
    s[i].getBirthDate()->setGivenDate(birth);
    s[i].getGraduationDate()->setGivenDate(graduation);
    s[i].setGpa(gpa);
    s[i].setCreditHours(credits);
    
    //send the current student data to the output files
    s[i].fullReport();
    s[i].shortReport();

    //increase i by one
    i++;


  }//end while
 
  //close infile
  inFile.close();
 
 //delete the students
 delete[] s;

}//end main
