#include "Node.h"
#include "Student.h"
//Constructor
Node::Node(Student* newStudent){
//Setting the node's student to the inputted student
NodeStudent = newStudent;
//Setting the next node to null
next = NULL;
}

Node::~Node(){
cout << "You're Deleting ... " << endl;
//Deleting the node's student
delete NodeStudent;
//Setting the next node to null
next = NULL;
}
//Setting the next node
void Node::setNext(Node* newNext){
    next = newNext;
}
//Returning the next node
Node* Node::getNext(){
    return next;
}
//Returning the node's student
Student* Node::getStudent(){
return NodeStudent;
}
