#include <stdio.h>
#include <memory.h>

//memory = an array of bytes within RAM
//memory block = a single byte within memory, holds value
//memory address = address of where a memory block is located

//Hexadecimal notation is important.
//Hexadecimal: 0-9 + A-F == (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)

int main(){

    char a = 'A'; //0061FECF
    printf("\n%d",sizeof(a));
    printf("\n%p",&a); //printing memory address of 'a'. format spec. is %p

    return 0;
}

//3:21:00