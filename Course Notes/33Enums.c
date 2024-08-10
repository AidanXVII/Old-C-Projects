#include <stdio.h>
#include <string.h>

//enum = user defined type of named integer id.
//makes a program more readable.

enum day{mon=1, tue=2, wed=3, thu=4, fri=5, sat=6, sun=7}; //enums not strings, treated as integers.

int main(){

    enum day today;

    printf("What day is it? (numerical input)");
    scanf("%d",&today);

    if(today == sat || today == sun){
        
        printf("%dth day of the week, its the weekend!",today);
    }
    else{

        printf("Best wake up early, its during the week.");
    }

    return 0;
}