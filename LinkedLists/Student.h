#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student{
 public:
  Student(char*,char*, int, float);
  char* getFirstName();
  char* getLastName();
  int getId();
  float getGpa();
 private:
  char* firstName;
  char* lastName;
  int id;
  int gpa;
};
#endif
