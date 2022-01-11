#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;
void add(Node* currentNode,int newValue);
void print(Node* currentNode, Node* next);

int main(){
char StudentName[100] = "Jeffrey";
char StudentName2[100] = "Ian";
Student* Jeffrey = new Student(StudentName);
Node* NumberOne = new Node(Jeffrey);
Student* Ian = new Student(StudentName2);
Node* NumberTwo = new Node(Ian);
NumberOne->setNext(NumberTwo);
NumberTwo->setNext(NumberOne);
if(NumberOne->getNext() == NumberTwo){
    cout << "Getting and setting works (At least for node #1)!" << endl;
}
if(NumberTwo->getNext() == NumberOne){
    cout << "Getting and setting works (For node #2)!" << endl;
}
if(NumberOne->getStudent() == Jeffrey){
    cout << "Getting students works! (At least for node #1)!" << endl;
}
if(NumberTwo->getStudent() == Ian){
    cout << "Getting students works! For node #2)!" << endl;
}
delete NumberOne;
delete NumberTwo;
if((NumberTwo == NULL) && (NumberOne == NULL)){
    cout << "Deleting works!" << endl;
}
/*
add(temp,1);
print(temp, head);
print(head, temp);
*/
}
/*
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
*/

