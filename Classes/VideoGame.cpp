#include <iostream>
#include "VideoGame.h"
#include <cstring>
using namespace std;

VideoGame::VideoGame(char[] newTitle, int newYear, char[] newPublisher, in newRating){
  title = newtitle;
  year = newYear;
  publisher = newPublisher;
  rating = newRating;
}
char VideoGame:: getTitle(){
  return title;
}
int VideoGame:: getYear(){
  return year;
}
char VideoGame:: getPublisher(){
  return publisher;
}
int VideoGame:: getRating(){
  return rating;
}

