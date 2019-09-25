#include <iostream>
#include <cstring>
using namespace std;
struct moves {
  int row;
  int col;
};
void printBoard(char board[3][3]){ 
  char letters[3] = {'a', 'b', 'c'};

  cout<<"  1 2 3"<<endl;
  for(int i =0;i<3;i++){
    cout <<letters[i];
    for(int k = 0; k<3; k++){
      cout<<" "<<board[i][k];
    }
    cout<<endl;
  }
}
bool checkWin(char player, char board[3][3]){
  for(int i = 0; i<3;i++){
    if(board[i][0] == player && board[i][1] == player && board[i][2]){
      return true;
    }
    if(board[0][i] == player && board[1][i] == player && board[2][i]){
      return true;
    }
  }
  if(board[0][0] == player && board[1][1] == player && board[2][2]){
    return true;
  }
  if(board[0][2] == player && board[1][1] == player && board[2][0]){
    return true;
  }
  return false;
}
void markBoard(char board[3][3], char player){
  moves move;
  char playerMove[2];
  do{
    cout<<"What is your move?"<<endl;
    cin>>playerMove;
    move.row = (int)playerMove[0]-97;
    move.col = (int) playerMove[1]-49;
  }
  while(board[move.row][move.col] == 'X' || board[move.row][move.col] == 'O' ||
	playerMove[0] != 'a' || playerMove[0] != 'b' || playerMove[0] !='c' ||
	playerMove[1] != '1'|| playerMove[1] != '2' || playerMove[1] != '3');
  
  board[move.row][move.col] = player;
}
int main(){
  char player = 'X';
  char board[3][3];
  while(true){
    printBoard(board);
    markBoard(board, player);
    if(checkWin(player, board)){
      cout<<player<<" Wins!"<<endl;
      break;
    }
    if(player == 'X')
      player = 'O';
    else
      player = 'X';
  }
}

