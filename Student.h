#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>

using namespace std;

class Student{
public:
char name[100];
float GPA;
Student(char* newName);
~Student();
void setGPA(float newGPA);
char* getName();
};

#endif