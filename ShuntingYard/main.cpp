#include <iostream>
#include <cstring>
#include "Node.h"
#include "List.h"

using namespace std;

int main(){
  List* list = new List("5");
  list->push("+");
  list->push("2");
  cout<<list->s_peek()->getVal()<<endl;
  cout<<list->q_peek()->getVal()<<endl;
  return 0;
}
