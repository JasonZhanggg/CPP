#include <iostream>
#include <cstring>

using namespace std;

class VideoGame {
 public:
  VideoGame(char[], int, char[], int);
  char[] getTitle();
  int getYear();
  char[] getPublisher();
  int getRating();
 private:
  char title[];
  int year;
  int rating;
  char publisher[];
};
