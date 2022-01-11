#include <iostream>
#include "Node.h"

using namespace std;
void add(Node* currentNode,int newValue);
void print(Node* currentNode, Node* next);

int main(){
Node* temp = new Node();
Node* head = new Node();
add(head,1);
add(temp,1);
print(temp, head);
print(head, temp);
}

void add(Node* currentNode,int newValue){
    Node* current = currentNode;
    if(current == NULL){
    currentNode = new Node();
    currentNode->setValue(newValue);
    }
    else{
        while(currentNode->getNext() != NULL){
            current = currentNode->getNext();
        }
        current->setNext(new Node());
        current->getNext()->setValue(newValue);
    }
}

void print (Node* currentNode,Node* next){
    if(currentNode == next){
        cout << "Student List: " ;
    }
    if(next != NULL){
        cout << next->getValue() << " ";
        print(next->getNext(),next->getNext());
    }else{
    //go running
} 
}
