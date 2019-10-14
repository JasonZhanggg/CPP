#include <iostream>
 #include <vector>
using namespace std;
struct student{
  char firstName[];
  char lastname[];
  int id;
  float gpa;
};
int main(){
  // char input[80];
  // cout<<"Input"<<endl;
  // cin.getline(input, sizeof(input));
  student* studentStruct = new student();
  // studentStruct->id = 1234;
  // print(studentStruct->id);
  vector<student*>*sVec;
  sVec->push_back(studentStruct);
  sVec->at(1)->id = 1234;
  // cout<<sVec->at(0)->id<<endl;
  
}
  
