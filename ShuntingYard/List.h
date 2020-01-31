#include <iostream>
#include <cstring>
#include "Node.h"
#ifndef LIST_H
#define LIST_H

using namespace std;

class List{
 public:
  List(char*);
  void push(char*);
  Node* s_pop();
  Node* q_pop();
  Node* s_peek();
  Node* q_peek();
  ~List();
 private:
  Node* head;
};
#endif