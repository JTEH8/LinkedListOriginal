#include "Student.h"
#include <cstring>

Student::Student(char* newName){
strcpy(newName,name);
}

Student::~Student(){

}

void Student::setGPA(float newGPA){
    GPA = newGPA;
}

char* Student::getName(){
    return name;
}


Student* getStudent(){

}
