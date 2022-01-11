#include "Node.h"
#include "Student.h"

Node::Node(Student* newStudent){
NodeStudent = newStudent;
next = NULL;
}

Node::~Node(){
delete NodeStudent;
next = NULL;
}

void Node::setNext(Node* newNext){
    next = newNext;
}

Node* Node::getNext(){
    return next;
}

Student* Node::getStudent(){
return NodeStudent;
}
