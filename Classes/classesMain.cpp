/*
Jason Zhang
10/30/2019
Classes
*/

#include <iostream>
#include <vector>
#include <cstring>
#include <VideoGame.h>
using namespace std;
//void add();
//void search();
//void deleteItem();
int main(){
  char input[80];
  vector<VideoGame> vect;
  cin>>input;
  vect.push_back(new VideoGame(input, 2, {'a', 'b'}, 2));
  vect.at(0).getTitle();
  //make the vector
  /*
  while(true){
    //take in the users input
    char input[80];
    cout<<"Input ADD to add a item, SEARCH search for a item, DELETE to delete a item, and QUIT to exit the program."<<endl;
    cin.getline(input, sizeof(input));
    //set it to upper case
    for(int i = 0; i<sizeof(input); i++){
      input[i] = toupper(input[i]);
    }
    //if they inputed ADD
    if(strcmp(input, "ADD") == 0){
      //call add
      add();
      cin.ignore(1000, '\n');
    }
    else if(strcmp(input, "SEARCH") == 0){
      search();
      cin.ignore(1000, '\n');
    }
    //if they inputed DELETE
    else if(strcmp(input, "DELETE") == 0){
      //run delete
      deleteItem();
      cin.ignore(1000, '\n');
    }
    //if they inputed QUIT
    else if(strcmp(input, "QUIT") == 0){
      //return 0, exiting the program
      return 0;
    }
    else{
      cout<<"That is invalid."<< endl;
    }
  }
  */
}
