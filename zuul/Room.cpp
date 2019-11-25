#include <iostream>
#include <cstring>
#include <Room.h>
using namespace std;

Room::Room(char* newItems, char* newDescription){
  items = new char [strlen(newItems)+1];
  description = new char [strlen(newItem)+1];
  strcpy(description, newDescription);
  strcpy(items, newItems);
}
Room::getDescription(){
  return description;
}
Room::getItems(){
  return items;
}
Room::addItem(Item* item){
  
}
