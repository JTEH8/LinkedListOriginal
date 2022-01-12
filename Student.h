//Header Guard
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>

using namespace std;
//Student Class
class Student{
public:
//Variables
char name[100];
float GPA;
//Constructor
Student(char* newName);
//Destructor
~Student();
//Set GPA
void setGPA(float newGPA);
//Return the Student's name
char* getName();
};

#endif