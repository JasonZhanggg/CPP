#include <iostream>
#include <cstring>
#include "Student.h"

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node{
 public:
  Node(Student*);
  Student* getStudent();
  void setNext(Node*);
  Node* getNext();
  ~Node();
 private:
  Student* student;
  Node* next;
};
#endif
