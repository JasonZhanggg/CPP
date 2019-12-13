#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"

using namespace std;

//Constructor
Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}

Student* Node:: getStudent(){
  return student;
}
void Node::setNext(Node* newNext){
  next = newNext;
}

Node* Node::getNext(){
  return next;
}
Node::~Node(){
  delete student;
  next = NULL;
}
