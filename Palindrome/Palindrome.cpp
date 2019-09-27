/*
Name: Jason Zhang
Date: 9/27/2019
Class: C++
Period: 4
This program checks if a number or sentence is a palindrme.
 */

#include <iostream>
#include <cstring>
using namespace std;
int main(){
  //char array for input
  char input[80];
  char newInput[80];
  cout<<"Input"<<endl;
  //take in char array and include spaces
  cin.getline(input, sizeof(input));
  //loop through the input array
  for(int i = 0, k = 0; i<sizeof(input); i++){
    //if it is not punctuation
    if(!(ispunct(input[i]) || input[i] == ' ' || input[i] == '"')){
      //add it to a new array
      newInput[k] = tolower(input[i]);
      k++;
    }
  }
  //loop through the the first and second half of the array
  for(int i = 0, k = strlen(newInput)-1; i < k ; i++, k--){
    //if the first digit and the last digit equal, check if the second digit and the second last digit are equal, etc
    if(newInput[i] != newInput[k]){
      //if they are not equal, print not a palindrome and return
      cout << "Not Palindrome";
      return 0;
    }
    //if they are a palindrome print Palindrome and return
    cout << "Palindrome";
    return 0;
  }
}
