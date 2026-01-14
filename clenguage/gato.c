#include <stdio.h>
#include <stdlib.h>

char board[9]; //0-8 for the 3x3 board

void clearScreen(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

//Initialize board with numbers
void resetBoard(){
  for(int i=0; i<9; i++){
    board[i] = '1' + i;
  }
}

//Display ASCII board
void printBoard(){
  printf("\n");
  for(int i=0; i<9; i++){
    printf(" %c ", board[i]);
    if((i+1)%3==0){
      printf("\n");
      if(i<6) printf("---+---+---\n");
    } else {
      printf("|");
    }
  }
  printf("\n");
}

char checkWinner(){
  int wins[8][3] = {
  {0,1,2}, {3,4,5}, {6,7,8}, //vertical win cases
  {0,3,6}, {1,4,7}, {2,5,8}, //horizontal win cases
  {0,4,8}, {2,4,6} //diagonal win cases
  };

  for(int i=0; i<8; i++){
    int a = wins[i][0];
    int b = wins[i][1];
    int c = wins[i][2];
    if(board[a] == board[b] && board[b]== board[c]){
      return board[a]; // 'X' or 'O'
    }
  }
  return ' '; //No winner yet
}

int main(){
  char playAgain;
  do{
    char currentPlayer = 'X'; //Start with X
    int turn = 0; //Count total moves
    resetBoard();
    while(1){
      clearScreen();
      printBoard();
      int move; //Player input
      printf("Player %c, enter a number (1-9): ", currentPlayer);
      scanf("%d", &move);

      //Validate input range
      if(move < 1 || move > 9){
        printf("Invalid move. Try again.\n");
        continue;
      }

      //Check if the spot is already taken
      if(board[move-1]=='X' || board[move-1] == 'O'){
        printf("That spot is already taken. Try again.\n");
        continue;
      }

      //Apply move
      board[move-1] = currentPlayer;

      //Count the move
      turn++;


      //Check winner
      char winner = checkWinner();
      if(winner == 'X' || winner == 'O'){
        printBoard();
        printf("Player %c wins!\n", winner);
        break;
      }

      //Break after 9 moves
      if(turn == 9){
        printBoard();
        printf("Game over! It's a draw.\n");
        break;
      }
      //Switch player
      currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    printf("Play again? (y/n): ");
    scanf(" %c", &playAgain);
  } while(playAgain == 'y' || playAgain == 'Y');
  printf("Thanks for playing!\n");
  return 0;
}

