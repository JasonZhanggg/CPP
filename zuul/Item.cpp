#include <iostream>
#include <cstring>
#include "Item.h"

using namespace std;

Item:: Item(char* newName){
  name = new char [strlen(newName)];
  strcpy(name, newName);
}
Item:: getName(){
  return name;
}
