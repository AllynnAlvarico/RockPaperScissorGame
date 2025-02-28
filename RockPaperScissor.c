
// Libraries
#include <stdio.h>
#include <stdbool.h>

// Preprocessors
#define SIZESTRING 7

// Prototypes
int gameCondition(int, int);
char *movePick(int);

// Declaration
int rock = 1;
int paper = 2;
int scissor = 3;
char move_rock[5] = "Rock";
char move_paper[6] = "Paper";
char move_scissor[8] = "Scissor";
int user;
int opponent = 1;
bool play = false;
char start = 'y';

int main(){

    play = true;

    do{
        printf("Rock, Paper, Scissor Game \n");
        printf("Pick your Move!\n");
        printf("1 = Rock \n2 = Paper \n3 = Scissor\n");
        scanf("%d", &user);

        switch (gameCondition(user, opponent))
        {
        case 1:
            printf("Winner!");
            break;
        case 2:
            printf("Draw");
            break;
        default:
            printf("Loser");
            break;
        }
        printf("\nUser move is %s and Comp move is %s", movePick(user), movePick(opponent));
        getchar();

        printf("\n\nPlay again?\n");
        scanf("%c", &start);
        getchar();

        if(start == 'n'){
            play = false;
        }else if(start != 'n' || start != 'y') {
            printf("Enter n for stop and y for play again\n");
        }
    }while(play);

    
    return 0;
}

int gameCondition(int userPick, int random){
    if(userPick == random){
       return 2;
    } else {
        if (userPick == rock && random == scissor) {
            return 1;
            }
        else if (userPick == paper && random == rock) {
            return 1;
            }
        else if (userPick == scissor && random == paper) {
            return 1;
        }
    }
    return 0;
}

char *movePick(int pick){
    switch (pick)
    {
    case 1:
        return move_rock;
    case 2:
        return move_paper;
    case 3:
        return move_scissor;
    default:
        return NULL;
    }
}