#include <stdio.h>
#include <string.h>

//A typedef is a reserved keyword that gives an existing datatype a nickname.
//Writing syntax can become tedious, hence inclusion of typedef in the code.

typedef struct{

    char name;
    char password[32];
    int id;
}user; //nicknames the struct as user.

//Instead of:
//              struct user{
//
//                  ...
//                  ...
//              };


int main(){

    user user1 = {"Aidan","Skibidi",97059093405}; //By doing this, it removes the need to write struct before calling user.

    return 0;
}