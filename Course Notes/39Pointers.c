#include <stdio.h>

//03:28:00

//A pointer is a "variable-like" reference that holds the memory address to another variable.
// (*) = indirection operator (value at address)

//I could print the value of age straight up, or I could dereference its pointer to get value.

void printAge(int age){

    printf("Age is: %d\n", age);
}

//OR 

void printAge_Pointer(int *pAge){

    printf("Age is: %d\n", *pAge); //Pointer dereferenced.
}

int main(){

    int age = 21;
    int *pAge = NULL; //Good practice to assign null when declaring, to reduce usage of (*) operator.
    pAge = &age;

    //printf("address of age is: %p\n", &age);
    //printf("value of age is: %d\n",age);
    //printf("Value stored at address: %d\n",*pAge); //this is known as dereferencing.
    printf("Value of pAge is: %p\n",pAge);

    //printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge)); //Prints 4 bytes, IDK WHY.

    //printAge(age);
    printAge_Pointer(pAge); //Do not send dereferenced pAge as pointer. mistake was printAge_Pointer(*pAge);

    return 0;
}

//Return to this, was a bit confusing.
//Note: Yeah this shit ass