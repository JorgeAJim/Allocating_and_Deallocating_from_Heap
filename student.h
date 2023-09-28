//student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "date.h"
#include "address.h"

class Student {
  protected:
    std::string* firstName;
    std::string* lastName;
    std::string* gpa;
    std::string* creditHours;
    Date* birthDate;
    Date* graduationDate;
    Address* address;

  public:
    Student();
    Student(std::string firstName, std::string lastName, std::string gpa, std::string creditHours);
    ~Student();
    std::string getFirstName();
    void setFirstName(std::string firstName);
    std::string getLastName();
    void setLastName(std::string lastName);
    std::string getGpa();
    void setGpa(std::string gpa);
    std::string getCreditHours();
    void setCreditHours(std::string creditHours);
    //setters and getters may be needed for the Date and Address instances
    Address* getAddress();
    Date* getBirthDate();
    Date* getGraduationDate();
    void fullReport();
    void shortReport();

};//end class definition

#endif
