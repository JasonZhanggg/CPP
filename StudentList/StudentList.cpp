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
void deleteStudent(vector<student*>*sVec);
void printVec(vector<student*>*sVec);
int main(){
  vector<student*>*sVec = new vector<student*>;
  while(true){
    char input[80];
    cout<<"Input"<<endl;
    cin.getline(input, sizeof(input));
    if(strcmp(input, "ADD") == 0){
      add(sVec);
    }
    else if(strcmp(input, "PRINT") == 0){
      printVec(sVec);
    }
  }
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
void deleteStudent(vector<student*>*sVec){
  int newId;
  cout<<"What is the studenst's Id?"<<endl;
  cin>>newId;
  vector<student*>::iterator i;
  for(i = sVec->begin(); i!=sVec->end();i++){
    if(newId == (*i)->id){
      delete *i;
      sVec->erase(i);
      return;
    }
  }
}
  
void printVec(vector<student*>*sVec){
  vector<student*>::iterator i;
  for(i=sVec->begin();i!=sVec->end();i++){
    cout<<(*i)->firstName<<" "<<(*i)->lastName<<", "<<(*i)->id<<", "<<(*i)->gpa<<endl;
  }
}
