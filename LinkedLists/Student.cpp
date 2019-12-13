#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student(char* newFirst, char* newLast, int newId, float newGpa){
  firstName = new char[strlen(newFirst)+1];
  lastName = new char[strlen(newLast)+1];
  strcpy(firstName, newFirst);
  strcpy(lastName, newLast);
  id = newId;
  gpa = newGpa;
}
char* Student::getFirstName(){
  return firstName;
}
char* Student::getLastName(){
  return lastName;
}
int Student::getId(){
  return id;
}
float Student::getGpa(){
  return gpa;
}
