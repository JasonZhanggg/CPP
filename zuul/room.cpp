
#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include "Room.h"
#include "Item.h"

using namespace std;

Room::Room(char* newName, char* newDescription){
  name = new char [strlen(newName)+1]; 
  description = new char [strlen(newDescription)+1];
  strcpy(description, newDescription);
  strcpy(name, newName);
  exits = new map<char*, Room*>();
  items = new vector<Item*>();
}
char* Room::getDescription(){
  return description;
}
vector<Item*>* Room::getItems(){
  return items;
}
void Room::addItem(Item* item){
  items->push_back(item);
}
char* Room:: getName(){
  return name;
}
void Room::removeItem(Item* item){
  vector<Item*>::iterator i;
  for(i=items->begin(); i!= items->end();i++){
    if(strcmp((*i)->getName(), item->getName()) == 0){
      delete *i;
      i = items->erase(i);
      return;
    }
  }
}
void Room::addExit(char* dir, Room* room){
  (*exits)[dir] = room;
}
map<char*, Room*>* Room::getExits(){
  return exits;
}
