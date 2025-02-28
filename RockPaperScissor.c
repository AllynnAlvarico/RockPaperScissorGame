// Libraries
#include <stdio.h>
#include <stdbool.h>

// Preprocessors
#define SIZESTRING 7

// Prototypes
bool userWin(int, int);
char *movePick(int);

// Declaration
int rock = 1;
int paper = 2;
int scissor = 3;
char move_rock[4] = "Rock";
char move_paper[] = "Paper";
char move_scissor[] = "Scissor";
int user;
int opponent = 1;
char userPick[SIZESTRING];
char compPick[SIZESTRING];

int main(){
    
    printf("Rock, Paper, Scissor Game \n");
    printf("Pick your Move!\n");
    printf("1 = Rock \n2 = Paper \n3 = Scissor\n");
    scanf("%d", &user);
    // r = (int)rand();
    
    printf("\nRock is -> %s", move_rock);
    printf("\nPaper is -> %s", move_paper);
    printf("\nScissor is -> %s\n", move_scissor);

    if(userWin(user, opponent)){
        printf("Winner!");
    }else{
        printf("Loser");
    }
    printf("\nUser move is %s and Comp move is %s", movePick(user), movePick(opponent));
    return 0;
}

bool userWin(int userPick, int random){
    if (userPick == rock && random == scissor) {
        return true;
        }
    else if (userPick == paper && random == rock) {
        return true;
        }
    else if (userPick == scissor && random == paper) {
        return true;
    }
    return false;
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