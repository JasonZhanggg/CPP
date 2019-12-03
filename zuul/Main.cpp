/*
Jason Zhang
10/30/2019
Student List
*/

#include <iostream>
#include <vector>
#include <cstring>
#include "Item.h"
#include "Room.h"
using namespace std;

void grab(vector<Item*>*, Room*);
void drop(vector<Item*>*, Room*);
Room* go(Room*);

int main(){
  map<char*, Room*>* mm = new map<char*, Room*>;
  (*mm)["Power plant"] = new Room("Power plant", "A nuclear power plant that generates the cities electricity. The air is very dusty.");
  (*mm)["McDonalds"] = new Room("McDonalds", "The delicious smell of burgers floats over to your nose.");
  (*mm)["Gym"] = new Room("Gym", "Where you exercise.");
  (*mm)["Electronic store"] = new Room("Electronic store", "Full of expensive electronics. You dont want to break anything.");
  (*mm)["Townhall"] = new Room("Townhall", "Where the mayor lives.");
  (*mm)["Elementary school"] = new Room("Elementary school", "Full of loud children throwing food.");
  (*mm)["High school"] = new Room("High school", "Half the students are yelling at eachother, the other half on their phone.");
  (*mm)["Middle school"] = new Room("Middle school", "All the students are in class.");
  (*mm)["DMV"] = new Room("DMV", "You enter and get told the line is 10 hours long");
  (*mm)["Hospital"] = new Room("Hospital", "You hear a cough.");
  (*mm)["Expo center"] = new Room("Expo center", "The large facility is empty.");
  (*mm)["Grocery store"] = new Room("Grocery store", "Full of fresh and cheap foods");
  (*mm)["Dentist"] = new Room("Dentist", "The help desk is empty. Nothing to see");
  (*mm)["Pub"] = new Room("Pub", "Bang! You see two drunk people fighting");
  (*mm)["Movie theater"] = new Room("Movie theater", "A very old movie is playing");
  
  (*mm)["Power plant"] -> addExit("SOUTH", (*mm)["McDonalds"]);
  (*mm)["McDonalds"] -> addExit("SOUTH", (*mm)["Gym"]);
  (*mm)["McDonalds"] -> addExit("EAST", (*mm)["Electronic store"]);
  (*mm)["Gym"]->addExit("NORTH", (*mm)["McDonalds"]);
  (*mm)["Electronic store"]->addExit("WEST", (*mm)["McDonalds"]);
  (*mm)["Electronic store"]->addExit("EAST", (*mm)["Townhall"]);
  (*mm)["Townhall"]->addExit("WEST", (*mm)["Electronic store"]);
  (*mm)["Townhall"]->addExit("SOUTH", (*mm)["Elementary school"]);
  (*mm)["Townhall"]->addExit("EAST", (*mm)["Expo center"]);
  (*mm)["Elementary school"]->addExit("NORTH", (*mm)["Townhall"]);	
  (*mm)["Elementary school"]->addExit("SOUTH", (*mm)["Middle school"]);
  (*mm)["Middle school"]->addExit("NORTH", (*mm)["Elementary school"]);
  (*mm)["Middle school"]->addExit("EAST", (*mm)["Hospitals"]);
  (*mm)["Middle school"]->addExit("SOUTH", (*mm)["DMV"]);
  (*mm)["Middle school"]->addExit("WEST", (*mm)["High school"]);
  (*mm)["High school"]->addExit("EAST", (*mm)["Middle school"]);
  (*mm)["DMV"]->addExit("NORTH", (*mm)["Middle school"]);
  (*mm)["Hospital"]->addExit("WEST", (*mm)["Middle school"]);
  (*mm)["Expo center"]->addExit("WEST", (*mm)["Townhall"]);
  (*mm)["Expo center"]->addExit("NORTH", (*mm)["Dentist"]);
  (*mm)["Expo center"]->addExit("EAST", (*mm)["Grocery store"]);
  (*mm)["Grocery store"]->addExit("WEST", (*mm)["Expo center"]);
  (*mm)["Dentist"]->addExit("SOUTH", (*mm)["Expo center"]);
  (*mm)["Dentist"]->addExit("NORTH", (*mm)["Pub"]);
  (*mm)["Pub"]->addExit("SOUTH", (*mm)["Dentist"]);
  (*mm)["Pub"]->addExit("WEST", (*mm)["Movie theater"]);
  (*mm)["Movie theater"]->addExit("EAST", (*mm)["Pub"]);
  (*mm)["DMV"]->addItem(new Item("Waiting ticket"));
  (*mm)["Electronic store"] -> addItem(new Item("Computer"));
  (*mm)["Grocery store"] -> addItem(new Item("Apple"));
  (*mm)["McDonalds"] -> addItem(new Item("Burger"));
  (*mm)["Hospital"] -> addItem(new Item("Medicine"));
  (*mm)["Townhall"]->addItem(new Item("test"));
  char blank[80] = "";
  cout<<"Mayor: Hello! I am the mayor of this town. If you do not mind, could you do a task for me?(press enter to continue)"<<endl;
  cin.getline(blank, 999);
  cout<<"Mayor: I need you to get a waiting ticket from the DMV, my son needs it for his permit!"<<endl;
  cin.getline(blank, 999);
  cout<<"Mayor: I also need you to grab a new computer from the electronic store."<<endl;
  cin.getline(blank, 999);
  cout<<"Mayor: Also if you don't mind, go to the grocery store and get an apple."<<endl;
  cin.getline(blank, 999);
  cout<<"Mayor: Also get a burger from McDonalds for I am very hungrey"<<endl;
  cin.getline(blank, 999);
  cout<<"Mayor: Finaly, cout you grab me some medicine. My wife is sick."<<endl;
  cin.getline(blank, 999);
  cout<<"Once you are done, just return here, the townhall! Agan, thank you!"<<endl;
  Room* current = (*mm)["Townhall"];
  vector<Item*>* inventory = new vector<Item*>;
  while(true){
    cout<<"You are currently in a: "<<current->getName()<<endl;
    cout<<"Description: "<<current->getDescription()<<endl;
    map<char*, Room*>* exits = current -> getExits();
    cout<<"Exits: "<<endl;
    map<char*, Room*>::iterator ei;
    for(ei = exits->begin(); ei!=exits->end(); ei++){
      cout<<ei->first<<" has " <<ei->second->getName()<<endl;
    }
   

    cout<<"Items in this room: ";
    vector<Item*>* items = current->getItems();
    vector<Item*>::iterator ii;
    for(ii = items->begin(); ii!=items->end();ii++){
      cout<<(*ii)->getName()<<" ";
    }
    cout<<endl;
    cout<<"Your inventory has: ";
    vector<Item*>::iterator inventoryi;
    for(inventoryi = inventory->begin(); inventoryi!=inventory->end(); inventoryi++){
      cout<<(*inventoryi)->getName()<<" ";
    }
    cout<<endl;
    cout<<"Would you like to GRAB, DROP, or GO"<<endl;
    char input[80];
    cin.getline(input, sizeof(input));
    if(strcmp(input, "GRAB") == 0){
      grab(inventory, current);
    }
    else if(strcmp(input, "DROP") == 0){
      drop(inventory,, current);
    }
    else if(strcmp(input, "GO") == 0){
      current = go(current);
    }
    cout<<"_________________________________________________________"<<endl;
  }
}

void grab(vector<Item*>*inventory, Room* room){
  cout<<"What item would you like to grab?"<<endl;
  char input[80];
  cin.getline(input, sizeof(input));
  vector<Item*>* items = room -> getItems();
  vector<Item*>::iterator i;
  for(i = items->begin(); i!= items->end(); i++){
    if(strcmp((*i)->getName(), input) == 0){
      room->removeItem(*i);
      inventory->push_back(new Item(input));
      cout<<"The item has been added to your inventory"<<endl;
      return;
    }
  }
  cout<<"The item was not found"<<endl;
}
Room* go(Room* room){
  char input[80];
  cout<<"What direction would you like to go?"<<endl;
  cin.getline(input, sizeof(input));
  map<char*, Room*>* exits = room->getExits();
  map<char*, Room*>::iterator i;
  for(i = exits->begin(); i!= exits->end(); i++){
    if(strcmp(input, i->first) == 0){
      cout<<"Moved into the "<<i->second->getName()<<endl;
      return i->second;
    }
  }
  cout<<"Could not find that exit"<<endl;
  return room;
}

void drop(vector<Item*>*inventory, Room* room){
  cout<<"What item would you like to drop?"<<endl;
  char input[80];
  cin.getline(input, sizeof(input));
  vector<Item*>::iterator i;
  for(i = inventory->begin(); i!= inventory->end(); i++){
    if(strcmp((*i)->getName(), input) == 0){
      delete *i;
      i = inventory->erase(i);
      room->addItem(new Item(input));
      cout<<"The item has been droped"<<endl;
      return;
    }
  }
  cout<<"The item was not found"<<endl;
}
