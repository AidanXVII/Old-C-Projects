#include <stdio.h>

int main(){
    // to read a file, must create pointer.

    printf("\n//File Reading Program//\n");
    printf("\nInsert file location: ");

    char userinput[128];
    scanf("%s", userinput);

    FILE *pFile = fopen(userinput,"r");
    char buffer[256];//Holds one line at a time

    if(pFile == NULL){

        printf("Unrecognized file");
    }

    while(fgets(buffer,256,pFile) != NULL){
        
        printf("%s",buffer);
    }

    fclose(pFile);

    return 0;
}