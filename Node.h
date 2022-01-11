#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"
using namespace std;

class Node{
    Student* NodeStudent;
    Node* next;
public:
Node(Student* newStudent);  
~Node();
void setNext(Node* newNext);
Node* getNext();
Student* getStudent();
};

#endif