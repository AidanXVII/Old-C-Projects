#include <stdio.h>
#include <string.h>

void sortArray(int array[],int size){

    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - i - 1; j++){

            if(array[j] > array[j+1]){
                
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }    
}

void printArray(int array[],int size){
    
    for(int i = 0; i < size; i++){

        printf("%d ",array[i]);
    }
}

void sortCharArray(char chararray[], int charsize){

    for(int i = 0; i < charsize - 1; i++){

        for(int j = 0; j < charsize - i - 1; j++){

            if(chararray[j] > chararray[j+1]){
                
                char temp = chararray[j];
                chararray[j] = chararray[j+1];
                chararray[j+1] = temp;
            }
        }
    } 
}

void printCharArray(char chararray[], int charsize){

    for(int i = 0; i < charsize; i++){

        printf("%c ",chararray[i]);
    }

}

int main(){

    int array[] = {1,3,2,7,4,5,9,1};
    int size = sizeof(array) / sizeof(array[0]);

    sortArray(array,size);
    printArray(array,size);

    char chararray[] = {'D','B','A','E','F'};
    int charsize = sizeof(chararray) / sizeof(chararray[0]);

    printf("\n");

    sortCharArray(chararray,charsize);
    printCharArray(chararray,charsize);

    return 0; 
}

//Note: These are called bubble sorts. 
//+Note: Come back to optimize :).
//++Note: When optimizing, try to merge the sort functions. Not sure if this is possible since they invoke two diff data types.
