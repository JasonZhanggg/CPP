/*
Jason Zhang
1/8/2020
LinkedLists part 2
*/

#include <iostream>
#include <cstring>
#include <math.h>
#include "Student.h"
#include "Node.h"
using namespace std;
//student struct
void print(Node*, Node*);
void printStudent(Student*);
void add(Student*, Node**);
void deleteStudent(vector<student*>*sVec);
void printVec(vector<student*>*sVec);
int main(){
  //make the vector
  Node* head;
  while(true){
    //take in the users input
    char input[80];
    cout<<"Input ADD to add a student, PRINT to print the students, DELETE to delete a student, and QUIT to exit the program."<<endl;
    cin.getline(input, sizeof(input));
    //set it to upper case
    for(int i = 0; i<sizeof(input); i++){
      input[i] = toupper(input[i]);
    }
    //if they inputed ADD
    if(strcmp(input, "ADD") == 0){
      //call add
      cout<<""
      add();
      cin.ignore(1000, '\n');
    }
    //if they inputed PRINT
    else if(strcmp(input, "PRINT") == 0){
      //call print
      printVec(sVec);
    }
    //if they inputed DELETE
    else if(strcmp(input, "DELETE") == 0){
      //run delete
      deleteStudent(sVec);
      cin.ignore(1000, '\n');
    }
    //if they inputed QUIT
    else if(strcmp(input, "QUIT") == 0){
      //return 0, exiting the program
      return 0;
    }
    else{
      cout<<"That is invalid."<< endl;
    }
  }
}
void deleteStudent(vector<student*>*sVec){
  //ask for id
  int newId;
  cout<<"What is the studenst's Id?"<<endl;
  cin>>newId;
  //loop through vector
  vector<student*>::iterator i;
  for(i = sVec->begin(); i!=sVec->end();i++){
    //if the id is found
    if(newId == (*i)->id){
      //erease it
      sVec->erase(i);
      //return
      return;
    }
  }
  //if student is not found, tell the user
  cout<<"Student not found"<<endl;
}
  
void printVec(vector<student*>*sVec){
  vector<student*>::iterator i;
  //loop through vector
  for(i=sVec->begin();i!=sVec->end();i++){
    //print first name, last name, id, and the gpa
    cout<<(*i)->firstName<<" "<<(*i)->lastName<<", "<<(*i)->id<<", "<<((float)((int)(((*i)->gpa)*100)))/100<<endl;
  }
}
void add(Student* newStudent, Node** head){
  //make a copy of head
  Node** current = head;
  //if the head is null, declare it
  if(*head == NULL){
    *head = new Node(newStudent);
    return;
  }
  //loop through the list until you reach the end
  if((*current)->getNext() != NULL){
    Node* temp = (*current)->getNext();
    current = &temp;
    add(newStudent, &temp);
  }
  //add the new student at the end of the list
  (*current)->setNext(new Node(newStudent));
}
void print(Node* next, Node* head){
  //print List if it is the first iteration
  if(head == next){
    cout<<"List: "<<endl;
  }
  //otherwise
  if(next != NULL){
    //print the student
    printStudent(next->getStudent());
    //recall print with next student in list
    print(next->getNext(), head);
  }
}
//print student formating
void printStudent(Student* student){
  cout<<"Student: "<<student->getFirstName()<<" "<<student->getLastName()<< ", Id: "<<student->getId()<<", GPA: "<<student->getGpa()<<endl;
}
