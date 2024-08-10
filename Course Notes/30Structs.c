#include <stdio.h>
#include <string.h>

//Structs = collection of related members (variables)
//          can be of different data type
//          listed under one name in a memory block
//          VERY SIMILAR to classes in other languages (can't contain methods).
//          can be used to mimic real world objects

struct Player{

    char name[16];
    int score;
};

int main(){

    struct Player player1; //1 and 2 are in different blocks of memory, which contain their own unique members related to Player.
    struct Player player2;

    strcpy(player1.name, "Aidan"); //Dot is the member access operator.
    player1.score = 2;

    strcpy(player2.name, "Alex");
    player2.score = 2;

    printf("%s: %d points\n",player1.name, player1.score);
    printf("%s: %d points\n",player2.name, player2.score);

    return 0;
}
//2:43:00