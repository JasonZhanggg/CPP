#include <iostream>
#include <cstring>

using namespace std;

class Item{
 public:
  Item(char*);
  char* getName();
 private:
  char* name;

};
