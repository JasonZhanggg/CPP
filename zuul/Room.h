#include <iostream>
#include <cstring>
#include <vector>
#include "Item.h"
using namespace std;
class Room:
{
 public:
  Room(char*, char*);
  vector<Item*>* getItems();
  char* getDescription();
  char* getName();
  void removeItem(Item*);
  void addItem(Item*);
  map<char*, >
 private:
  vector<Item*>* items;
  char* description;
}
