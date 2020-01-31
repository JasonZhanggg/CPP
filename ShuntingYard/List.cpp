/*
Jason Zhang
*/
#include <iostream>
#include <cstring>
#include "Node.h"
#include "List.h"

using namespace std;

List::List(char* newVal){
  head = new Node(newVal);
}

void List::push(char* newVal){
  if(head == NULL){
    head = new Node(newVal);
    return;
  }
  if(head->getNext() == NULL){
    head->setNext(new Node(newVal));
    return;
  }
  head = head->getNext();
  push(newVal);
}

Node* List::s_pop(){
  Node* temp = head->getNext();
  delete head;
  head = temp;
  return head;
}
Node* List::q_pop(){
  if(head->getNext()->getNext() == NULL){
    Node* temp = head->getNext();
    delete temp;
    return head->getNext();
  }
  head = head->getNext();  
}
Node* List::s_peek(){
  return head;
}
Node* List::q_peek(){
  if(head->getNext() == NULL){
    return head;
  }
  head = head->getNext();
} 
List::~List(){
  delete head;
}