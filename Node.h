//Header Guard
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"
using namespace std;

class Node{
//Student to be set by constructor
Student* NodeStudent;    
//Next Node
Node* next;
public:
//Constructor
Node(Student* newStudent);  
//Destructor
~Node();
//Setting the next node
void setNext(Node* newNext);
//Getting the next node
Node* getNext();
//Getting the student from the node
Student* getStudent();
};

#endif