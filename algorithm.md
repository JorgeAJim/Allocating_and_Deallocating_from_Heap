Jorge Jimenez

CSCI24000 - Andrew Harris

2/21/2022

A6 - A heap of Students

Goal - To create a program that takes in student information(such as: name, last name, addresses, birth dates, gpa, etc.) from an input file and re-organizes the data inside an output file into columns. The program should use classes and class instances on the heap to
manage the massive amounts of student instences that will exist. 

Input: The user is expected to have zero inputs, other than to run the program. A input file with the information of 50 students will be where the program obtains its data.

Output: The progam should update two output files, one with a full report of all the student data and another short report with the students full name.

Steps:

  Classes:

    Date class:
      Goal: To manage any given date in the form of month/day/year as a single string.
      Inputs: The setters are expected to be given parameter data, which will be provided by the program.
      Output: The getters for the dates will return the date information.

      All information should be stored as strings.

      Steps: Create setter and getters for the given date. With the getter returning a string value and the setter accepting a string parameter and updated the value of the attribute.

        The attributes should be created on the heap, thus there will be a need for a distructor to clear the heap.
        A null constructor and a initializer should also be created to provide polymorphism. 


    Address class:
      Goal: To hold five pointer parameters, that point to values stored in the heap, corresponding to the address information of the student, while also creating the appropiate setters and getters
      Input: The setters will update the values of the attributes
      Output: The getter will return the values of the attributes
      Steps: 
        Create both a null constructor and initializer for polymorphism.
        A distructor is also needed as all the attributes are pointers to the heap, so whatever they point to must be deleted.
        Create the setters and getters for each attribute, so they can be used by the Student class.

    Student Class:
      Goal: To hold all needed attributes of the student, and their corresponding setters and getters, while also opening the needed output files and giving them their required information.
      Input: The setters will update the values of the attributes
      Output: The getters will return the values of the attributes
      Steps:
        There seems to be two ways to give the Student class the attributes and methods of the Date and Address class. Either make instances of them inside the Student class or let the Student class use both Date and Address as parent classes which will allow it to
        inherit their attributes and methods.

        I believe that for this project inheritence is not allowed, so the Student class will have instances of the Date and Address classes. With two insances of Date, one for the birth date and another for the graduation date.
        
        To access the setters and getters of the Date and Address instances within itself, it could be possible to make a getter for those instances. So when that getter is called then the instance will be open/accessable which will then allow the program to use 
        pointers to access the methods of the given class.

        In order to make the full and short report methods, both the fstream and sstream libaries will be needed. A stringstream within the report methods will hold all the information needed, so for full report all the student information is needed but only 
        the first and last name are needed for the short report. That stringstream will be turned into a string and be sent to the outFile after the outFile is opened and the desired file is named. After the stringstream is added, then the outFile will have
        to be closed.

    main.cpp:
      Goal: to create 50 instances of students and fill all their attributes with the information stored within students.dat. Aftwerwards, call the full and short report methods to update the fullReport.txt and shortReport.txt files.
      Input: The file will read and take data from the given students.dat
      Output: The outside fullReport.txt and shortReport.txt should have the required information properly formated.

      Steps:
       Create the neccessary variables, a string for each piece of student information, a variable to hold the current line, an inFile ifstream, and a string stream. Finally, an integer that gets the value zero.

       Then create an array of 50 students on the heap.

       open the students.dat file with the inFile and proceed to use a while loop to read line for line until the end of the students.dat file.
       
         In the while loop, clear the string stream and then give it the value of the current line. 

         Then read the string stream using the getline method with a delimiter of a ',', which will split the current line into pieces everytime there is a comma. Those pieces will be stored into the correct variables.

         When all the variables relating to the student information are updated, the program will then use the integer to find the current student. Using the integer as a couting variable, without the for loop, will allow the program to index through all 50 students.
         When the current student is selected, then the student setters to update the student attributes. To update the attributes of the class instances, the program will use the special getters 
         made to give direct access to the instance. Then we use the instance, which is a pointer itself, to call their respected setters for their personal attributes.

       Finally, the current fullReport and shortReport methods for the current student will be called which will update the corresponding output textfiles. AND the integer variable should be increased by 1 each time the while loop runs.

       The inFile should be closed and the array of 50 students, built on the heap, should be deleted to prevent any data leaks.
