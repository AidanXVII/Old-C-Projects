#include <stdio.h>

//03:36:00

int main(){

    /*
    FILE *pFile = fopen("40WritingFiles.txt", "w");     //'w'rite into file 40.txt
    fprintf(pFile, "Riley is a nonce");

    fopen("40WritingFiles.txt", "a"); //append onto file 40.txt
    fprintf(pFile, "\nRiley is a kid");

    fclose(pFile); //good practice to close file afterwards. This closes the file at given address.
    */

    /*if(remove("40WritingFiles.txt") == 0){        //Deletes the given file

        printf("\nSuccessfully Removed");
    }else{

        printf("\nFailed");
    }*/

    FILE *pFile = fopen("C:\\Users\\aidan\\Onedrive\\Desktop\\test1.txt", "w"); //Absolute filepath
    fprintf(pFile, "Riley is a nonce");

    return 0;
}