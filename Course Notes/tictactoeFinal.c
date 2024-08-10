#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <dos.h>
#include <conio.h>

char board[3][3]; //game board as a 2D array
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';
const char COMPUTER = 'O';

char player1name[64];
char player2name[64];

void resetBoard();
void printBoard();

int checkFreeSpaces();
void player1Move();
void player2Move();
void computerMove();

char checkWinner();
void printWinner(char, int);

int main(){

    char winner = ' ';
    char playerResponse;
    char initialize;
    int gameMode;

    printf("\n//TICTACTOE GAME//\n\n");

    
    printf("Initialize? (Y/N): ");
    scanf("%c",&initialize);
    initialize = toupper(initialize);

  //while(playerResponse == 'Y'){

    if(initialize == 'Y'){

      playerResponse ='Y';
      while(playerResponse == 'Y'){

        printf("Select your game mode:\n\n(1) Two-Player    (2) VS Computer\n");
        scanf("%d",&gameMode);

        if(gameMode == 1){ //Playing against PLAYER2
            
            printf("Choose player 1 (x) name: ");
            scanf("%s", &player1name);

            printf("Choose player 2 (o) name: ");
            scanf("%s", &player2name);

            winner = ' ';

            resetBoard();

            while(winner == ' ' && checkFreeSpaces() != 0){
                    
                printBoard();
                player1Move();
                winner = checkWinner();

                if(winner != ' '|| checkFreeSpaces == 0){
                    break;
                }

                printBoard();
                player2Move();
                winner = checkWinner();

                if(winner != ' '|| checkFreeSpaces == 0){
                    break;
                }
            }
        }
        else if(gameMode == 2){ //Playing against COMPUTER

            winner = ' ';

            resetBoard();

            while(winner == ' ' && checkFreeSpaces() != 0){
                
                printBoard();
                player1Move();
                winner = checkWinner();

                if(winner != ' '|| checkFreeSpaces == 0){
                    break;
                   }

                computerMove();
                winner = checkWinner();

                if(winner != ' '|| checkFreeSpaces == 0){
                    break;
                }
            }
        }

        printBoard();
        printWinner(winner, gameMode);

        printf("\nWould you like to play again? (Y/N): ");
        scanf("%c");
        scanf("%c", &playerResponse);
        playerResponse = toupper(playerResponse);

      /*if(playerResponse != 'Y' && playerResponse == 'N'){

        printf("Thanks for playing!");
        break;
        }*/
      }

    }else{

        printf("Closing Program.");
    }

  /*if(playerResponse != 'Y' && playerResponse == 'N'){

    printf("Thanks for playing!");
    break;
    }
  }*/

return 0;
}

void resetBoard(){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            board[i][j] = ' '; //When reset function is called, every space is set to empty.
        }
    }
}

void printBoard(){

    printf(" %c | %c | %c \n---|---|---\n", board[0][0], board[0][1], board[0][2]);
    printf(" %c | %c | %c \n---|---|---\n", board[1][0], board[1][1], board[1][2]);
    printf(" %c | %c | %c\n",               board[2][0], board[2][1], board[2][2]);
}

int checkFreeSpaces(){

    int freeSpaces = 9;

    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 3; j++){
            
            if(board[i][j] != ' '){

                freeSpaces--;
            }
        }
    }

return freeSpaces;
}

void player1Move(){

    int i;
    int j;

    do{

        printf("P1 enter row (1 - 3): ");
        scanf("%d",&i);
        i--;

        printf("P1 enter column (1 - 3): ");
        scanf("%d",&j);
        j--;

        if(board[i][j] != ' '){

            printf("Space is occupied.");
        }else{

            board[i][j] = PLAYER1;
            break;
        }

    }while(board[i][j] != ' ');
}

void player2Move(){

    int i;
    int j;

    do{

        printf("P2 enter row (1 - 3): ");
        scanf("%d",&i);
        i--;

        printf("P2 enter column (1 - 3): ");
        scanf("%d",&j);
        j--;

        if(board[i][j] != ' '){

            printf("Space is occupied.");
        }else{

            board[i][j] = PLAYER2;
            break;
        }

    }while(board[i][j] != ' ');
}

void computerMove(){

    srand(time(0));
    int i;
    int j;

    if(checkFreeSpaces() > 0){

        do{

            i = rand() % 3;
            j = rand() % 3;
        }while(board[i][j] != ' ');

        board[i][j] = COMPUTER;
    }else{

        printWinner(' ', 2);
    }
}

char checkWinner(){

    //Checking rows
    for(int i = 0; i < 3; i++){

        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){

            return board[i][0];
        }
    }


    //Checking columns
    for(int i = 0; i < 3; i++){

        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){

            return board[0][i];
        }
    }

    //Checking diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){

        return board[0][0];
    }
    
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){

        return board[0][2];
    }

return ' ';
}

void printWinner(char winner, int gameMode){

if(gameMode == 1){

        if(winner == PLAYER1){

            printf("%s WINS", player1name);
        }
        else if(winner == PLAYER2){

            printf("%s WINS", player2name);
        }
        else{

            printf("DRAW");
        }
}else if(gameMode == 2){

        if(winner == PLAYER1){

            printf("PLAYER WINS");
        }
        else if(winner == COMPUTER){

            printf("COMPUTER WINS");
        }else{

            printf("DRAW");
        }
    }
}

//log1: Names work, game does not allow for replay rn.
//log2: Come back, bug fix this stupid no replay thing.
//log3: Try putting initialize statement inside the replay while loop.


//3:45:00
