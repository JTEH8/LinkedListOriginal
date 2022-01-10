#include "Node.h"

Node::Node(){
value = 0;
next = NULL;
}

Node::~Node(){
delete &value;
next = NULL;
}

void Node::setValue(int newValue){
    value = newValue;
}

int Node::getValue(){
    return value;
}

void Node::setNext(Node* newNext){
    next = newNext;
}

Node* Node::getNext(){
    return next;
}