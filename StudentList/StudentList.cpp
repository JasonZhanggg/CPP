#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
struct student{
  char firstName[80];
  char lastName[80];
  int id;
  float gpa;
};
void add(vector<student*>*sVec);

int main(){
  vector<student*>*sVec = new vector<student*>;
  char input[80];
  cout<<"Input"<<endl;
  cin.getline(input, sizeof(input));
  if(strcmp(input, "ADD") == 0){
    add(sVec);
  }
  cout<<sVec->at(0)->firstName<<endl;
  cout<<sVec->at(0)->lastName<<endl;
  cout<<sVec->at(0)->id<<endl;
  cout<<sVec->at(0)->gpa<<endl;
}
void add(vector<student*>*sVec){
  sVec->push_back(new student());
  cout<<"What is the frst name of the student?"<<endl;
  cin.getline(sVec->at(sVec->size()-1)->firstName, 80);
  cout<<"What is the last name of the student?"<<endl;
  cin.getline(sVec->at(sVec->size()-1)->lastName, 80);
  cout<<"What is the student's id?"<<endl;
  cin>>sVec->at(sVec->size()-1)->id;
  cout<<"What is the student's gpa?"<<endl;
  cin>>sVec->at(sVec->size()-1)->gpa;
}
  
