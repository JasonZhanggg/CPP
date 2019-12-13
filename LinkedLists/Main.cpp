#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"
using namespace std;
void print(Node**);
void printStudent(Student*);
void add(Student*, Node**);

int main(){
  Node* head;
  add(new Student("Joe", "Mama", 2134, 2.4), &head);
  print(&head);
  add(new Student("Gregory", "Feng", 14214, 1.1), &head);
  print(&head);
  
}

void add(Student* newStudent, Node** head){
  Node** current = head;
  if(*head == NULL){
    *head = new Node(newStudent);
    //    cout<<head->getStudent()->getFirstName()<<endl;
    return;
  }
  
  while((*current)->getNext() != NULL){
    *current = (*current)->getNext();
  }
  add(newStudent, current);
  return;
}
void print(Node** head){
  Node** next = head;
  if(*head == *next){
    cout<<"List: "<<endl;
  }
  if(*next != NULL){
    printStudent((*next)->getStudent());
    Node** temp = (*next)->getNext();
    print(&temp);
  }
}
void printStudent(Student* student){
  cout<<"Student: "<<student->getFirstName()<<" "<<student->getLastName()<< ", Id: "<<student->getId()<<", GPA: "<<student->getGpa()<<endl;
}

