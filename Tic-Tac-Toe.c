// This program is an unbeatable ai tic tac toe game against the user
// note* not finished will resume tba
// author: Ericka H.
#include<stdio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; // initiate display squares for turn placement
void displayBoard(); // displayboard void
void aiMoves(); // logic to move against player
void markBoard(); // marks 'X' for user 'O' for ai
int checkAIWin(); // check if computer ai wins
int checkWin(); // check for game winner
void playAgain(); // prompt user to play again

int main (void) {
// global variables to use within the game
int choice; // players space choice (1-9)
int player = 1; // return functions back to game or player
int ai_player = 2;
int i; // initialize player win
int j; // initialize ai win
int counter = 0; // turn counter
char mark; // 'x' for player(user)
char ai; //  'o' for ai(computer)

do  {
displayBoard();

printf("\n\t\t\tENTER A NUMBER: ");
scanf("%d", &choice);

mark = 'X';
markBoard(choice, mark);

ai = 'O';
aiMoves(choice, ai);

i = checkWin();
  //checkAIWin();
//counter++;


} while( i == -1);
displayBoard();

if (i == 2)//{
printf("\n\t\tCongratulations!! You have beat our AI!");
//}
if ( i == 1) //{
//else
    printf("\n\t\tAI has won!");
//}
if (i == 0)
printf("\n\t\tThis Game is a Draw.");


playAgain();


return 0;
}
displayBoard()  {
system("cls"); // to clear screen for one displaying board
printf("\t\t\t Welcome to Tic-Tac-Toe!\n\n");
printf("\n\n");
  printf("\t\t\t      |        |      \n");
  printf("\t\t\t   %c  |    %c   |   %c  \n", square[1], square[2], square[3]);
  printf("\t\t\t______|________|______\n");
  printf("\t\t\t      |        |      \n");
  printf("\t\t\t   %c  |    %c   |   %c   \n", square[4], square[5], square[6]);
  printf("\t\t\t______|________|______\n");
  printf("\t\t\t      |        |      \n");
  printf("\t\t\t   %c  |    %c   |   %c   \n", square[7], square[8], square[9]);
  printf("\t\t\t      |        |      \n\n");

}

markBoard(int choice, char mark)    {

if (choice == 1 && square[1]=='1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("\n\t\t\tInvalid move!");
            getch();
        }
}

aiMoves(int choice, char ai)  {
//char ai = 'O';

// ai moves against center
if (choice == 5 && square[1]=='1')
            square[1] = ai;
        else if (choice == 5 && square[3]=='3')
            square[3] = ai;
        else if (choice == 5 && square[7]=='7')
            square[7] = ai;
        else if (choice == 5 && square[9]=='9')
            square[9] = ai;

// ai moves against corners
        //else if (choice == 1 || choice == 3 || choice == 7 || choice == 9 && square[5] == '5')
           // square[5] = ai;
        else if (choice == 1 && square[5]=='5')
            square[5] = ai;
        else if (choice == 1 && square[9]=='9')
            square[9] = ai;
        else if (choice == 1 && square[2]=='2')
            square[2] = ai;
        else if (choice == 1 && square[4]=='4')
            square[4] = ai;
        else if (choice == 3 && square[5]=='5')
            square[5] = ai;
        else if (choice == 3 && square[7]=='7')
            square[7] = ai;
        else if (choice == 3 && square[2]=='2')
            square[2] = ai;
        else if (choice == 3 && square[4]=='4')
            square[4] = ai;
        else if (choice == 7 && square[5]=='5')
            square[5] = ai;
        else if (choice == 7 && square[3]=='3')
            square[3] = ai;
        else if (choice == 7 && square[4]=='4')
            square[4] = ai;
        else if (choice == 7 && square[8]=='8')
            square[8] = ai;
        else if (choice == 9 && square[5]=='5')
            square[5] = ai;
        else if (choice == 9 && square[1]=='1')
            square[1] = ai;
        else if (choice == 9 && square[8]=='8')
            square[8] = ai;
        else if (choice == 9 && square[6]=='6')
            square[6] = ai;

// ai moves against sides
        //else if (choice == 4 || choice == 2 || choice == 6 || choice == 8 && square[5] == '5')
            //square[5] = ai;
        else if (choice == 4 && square[5]=='5')
            square[5] = ai;
        else if (choice == 4 && square[1]=='1')
            square[1] = ai;
        else if (choice == 4 && square[7]=='7')
            square[7] = ai;
        else if (choice == 2 && square[5]=='5')
            square[5] = ai;
        else if (choice == 2 && square[1]=='1')
            square[1] = ai;
        else if (choice == 2 && square[3]=='3')
            square[3] = ai;
        else if (choice == 6 && square[5]=='5')
            square[5] = ai;
        else if (choice == 6 && square[3]=='3')
            square[3] = ai;
        else if (choice == 6 && square[9]=='9')
            square[9] = ai;
        else if (choice == 6 && square[5]=='5')
            square[5] = ai;
        else if (choice == 8 && square[5]=='5')
            square[5] = ai;
        else if (choice == 8 && square[7]=='7')
            square[7] = ai;
        else if (choice == 8 && square[9]=='9')
            square[9] = ai;

// horizontal move against player
else if (choice == 1 && choice == 2 && square[3]=='3')
      square[3] = ai;
      else if (choice == 1 && choice == 3 && square[2]=='2')
      square[2] = ai;
      else if (choice == 3 && choice == 2 && square[1]=='1')
      square[1] = ai;

      //ai
      else if (ai == square[1] && ai == square[2] && square[3]=='3')
      square[3] = ai;
      else if (ai == square[1] && ai == square[3] && square[2]=='2')
      square[2] = ai;
      else if (ai == square[3] && ai == square[2] && square[1]=='1')
      square[1] = ai;

      else if (choice == 4 && choice == 6 && square[5]=='5')
      square[5] = ai;
      else if (choice == 4 && choice == 5 && square[6]=='6')
      square[6] = ai;
      else if (choice == 5 && choice == 6 && square[4]=='4')
      square[4] = ai;

      // ai
      else if (ai == square[4] && ai == square[6] && square[5]=='5')
      square[5] = ai;
      else if (ai == square[4] && ai == square[5] && square[6]=='6')
      square[6] = ai;
      else if (ai == square[5] && ai == square[6] && square[4]=='4')
      square[4] = ai;

      else if (choice == 7 && choice == 8 && square[9]=='9')
      square[9] = ai;
      else if (choice == 8 && choice == 9 && square[7]=='7')
      square[7] = ai;
      else if (choice == 7 && choice == 9 && square[3]=='8')
      square[8] = ai;

      // ai
      else if (ai == square[7] && ai == square[8] && square[9]=='9')
      square[9] = ai;
      else if (ai == square[8] && ai == square[9] && square[7]=='7')
      square[7] = ai;
      else if (ai == square[7] && ai == square[9] && square[3]=='8')
      square[8] = ai;

      // vertical move against player
      else if (choice == 1 && choice == 4 && square[7]=='7')
      square[7] = ai;
      else if (choice == 7 && choice == 4 && square[1]=='1')
      square[1] = ai;
      else if (choice == 1 && choice == 7 && square[4]=='4')
      square[4] = ai;

      //ai
      else if (ai == square[1] && ai == square[4] && square[7]=='7')
      square[7] = ai;
      else if (ai == square[7] && ai == square[4]&& square[1]=='1')
      square[1] = ai;
      else if (ai == square[1] && ai == square[7] && square[4]=='4')
      square[4] = ai;

      else if (choice == 5 && choice == 2 && square[8]=='8')
      square[8] = ai;
      else if (choice == 8 && choice == 2 && square[5]=='5')
      square[5] = ai;
      else if (choice == 5 && choice == 8 && square[2]=='2')
      square[2] = ai;

      //ai
       else if ( ai == square[5] && ai == square[2] && square[8]=='8')
      square[8] = ai;
      else if (ai == square[8] && ai == square[2] && square[5]=='5')
      square[5] = ai;
      else if (ai == square[5] && ai == square[8] && square[2]=='2')
      square[2] = ai;

      else if (choice == 3 && choice == 6 && square[9]=='9')
      square[9] = ai;
      else if (choice == 6 && choice == 9 && square[3]=='3')
      square[3] = ai;
      else if (choice == 3 && choice == 9 && square[6]=='6')
      square[6] = ai;

      // ai
      else if (ai == square[3] && ai == square[6] && square[9]=='9')
      square[9] = ai;
      else if (ai == square[6] && ai == square[9] && square[3]=='3')
      square[3] = ai;
      else if (ai == square[3] && ai == square[9] && square[6]=='6')
      square[6] = ai;

      // diagonal moves against player
      else if (choice == 1 && choice == 5 && square[9]=='9')
      square[9] = ai;
      else if (choice == 1 && choice == 9 && square[5]=='5')
      square[5] = ai;
      else if (choice == 9 && choice == 5 && square[1]=='1')
      square[1] = ai;

      //ai
       else if (ai == square[1] && ai == square[5] && square[9]=='9')
      square[9] = ai;
      else if (ai == square[1] && ai == square[9] && square[5]=='5')
      square[5] = ai;
      else if (ai == square[9] && ai == square[5] && square[1]=='1')
      square[1] = ai;

      else if (choice == 3 && choice == 5 && square[7]=='7')
      square[7] = ai;
      else if (choice == 5 && choice == 7 && square[3]=='3')
      square[3] = ai;
      else if (choice == 7 && choice == 3 && square[5]=='5')
      square[5] = ai;

      //ai
      else if (ai == square[3] && ai == square[5] && square[7]=='7')
      square[7] = ai;
      else if (ai == square[5] && ai == square[7] && square[3]=='3')
      square[3] = ai;
      else if (ai == square[7] && ai == square[3] && square[5]=='5')
      square[5] = ai;

        else
            return -1;

}

int checkWin()  {

// for horizontal win(s) {1,2,3} {4,5,6} {7,8,9}
if (square[1] == square[2] && square[2]==square[3])
return 1;
else if (square[4] == square[5] && square[5]==square[6])
return 1;
else if (square[7] == square[8] && square[8]==square[9])
return 1;

// for vertical win(s) {1,4,7} {2,5,8} {3,6,9}
else if (square[1] == square[4] && square[4]==square[7])
return 1;
else if (square[2] == square[5] && square[5]==square[8])
return 1;
else if (square[3] == square[6] && square[6]==square[9])
return 1;

// for diagonal win(s) {1,5,9} {3,5,7}
else if (square[1] == square[5] && square[5]==square[9])
return 1;
else if (square[3] == square[5] && square[5]==square[7])
return 1;

// check win for AI
// AI** horizontal win(s) {1,2,3} {4,5,6} {7,8,9}
if (square[1] == square[2] && square[2]==square[3])
return 2;
else if (square[4] == square[5] && square[5]==square[6])
return 2;
else if (square[7] == square[8] && square[8]==square[9])
return 2;

// AI** vertical win(s) {1,4,7} {2,5,8} {3,6,9}
else if (square[1] == square[4] && square[4]==square[7])
return 2;
else if (square[2] == square[5] && square[5]==square[8])
return 2;
else if (square[3] == square[6] && square[6]==square[9])
return 2;

// AI **diagonal win(s) {1,5,9} {3,5,7}
else if (square[1] == square[5] && square[5]==square[9])
return 2;
else if (square[3] == square[5] && square[5]==square[7])
return 2;



//for draw game(s)
else if (square[1] != '1' && square[2]!= '2' && square[3] != '3' && square[4]!= '4' && square[5]!= '5' && square[6]!= '6'
          && square[7]!= '7' && square[8]!= '8' && square[9]!= '9')
return 0;

else
return -1; // no winner get next opponents move
}

int checkAIWin()  {
//char ai = 'O';
// check win for AI
// for horizontal win(s) {1,2,3} {4,5,6} {7,8,9}
if (square[1] == square[2] && square[2]==square[3])
return 2;
else if (square[4] == square[5] && square[5]==square[6])
return 2;
else if (square[7] == square[8] && square[8]==square[9])
return 2;

//if (square[1] == square[2] && square[3])
//return 2;
//else if ( ai == square[4] && square[5] && square[6])
//return 2;
//else if (ai == square[7] && square[8] && square[9])
//return 2;

// for vertical win(s) {1,4,7} {2,5,8} {3,6,9}
else if (square[1] == square[4] && square[4]==square[7])
return 2;
else if (square[2] == square[5] && square[5]==square[8])
return 2;
else if (square[3] == square[6] && square[6]==square[9])
return 2;

// for diagonal win(s) {1,5,9} {3,5,7}
else if (square[1] == square[5] && square[5]==square[9])
return 2;
else if (square[3] == square[5] && square[5]==square[7])
return 2;

//else if (ai == square[1] && square[4] && square[7])
//return 2;
//else if (ai == square[2] && square[5] && square[8])
//return 2;
//else if (ai == square[3] && square[6] && square[9])
//return 2;

// for diagonal win(s) {1,5,9} {3,5,7}
//else if (ai == square[1] && square[5] && square[9])
//return 2;
//else if (ai == square[3] && square[5] && square[7])
//return 2;

//for draw game(s)
else if (square[1] != '1' && square[2]!= '2' && square[3] != '3' && square[4]!= '4' && square[5]!= '5' && square[6]!= '6'
          && square[7]!= '7' && square[8]!= '8' && square[9]!= '9')
return 0;

else
return -1; // no winner get next opponents move
}

playAgain() {
    char response;

    printf("\n\t\tWould you like to play again? (y/n): \n\t\t\t");


    do
    	{
      		response = getchar();
	}
	 while ((response != 'y') && (response != 'Y') && (response != 'n') && (response != 'N'));

  	if ((response == 'y') || (response == 'Y')){
    		return 1;
  	}else {
        printf("\n\t\tThank you for playing Tic-Tac-Toe! \n\n");
return 0;
  	}
}
