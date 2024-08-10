#include <stdio.h>
#include <string.h>

struct Student{

    char name[16];
    float grade;

};

int main(){

    struct Student s1 = {"Spongebob", 3.2};
    struct Student s2 = {"Patrick", 2.1};
    struct Student s3 = {"Aidan", 3.5};
    struct Student s4 = {"Skibidi Toilet", 4.0};
    
    struct Student students[] = {s1, s2, s3, s4};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++){

        printf("%s has GPA: %.1f\n",students[i].name, students[i].grade);

    }

    return 0;
}