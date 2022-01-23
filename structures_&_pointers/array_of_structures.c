//Display the details of two students using structure

#include <stdio.h>

struct Student {
    char name[30];
    int age;
    float mark;
}student[10];

void getStudentInfo() {
    register int idx;
    int studentCount, count = 0;
    printf("Enter the number of students :");
    scanf("%d", &studentCount);
    for(idx = 0; idx < studentCount; idx++) {
        count++;
        printf("Enter the Name, age and Mark of Student %d: \n", count);
        getchar();
        fgets(student[idx].name, 30, stdin);
        scanf("%d%f", &student[idx].age, &student[idx].mark);
    }
    for(idx = 0; idx < studentCount; idx++) {
        printf("\nName : %s", student[idx].name);
        printf("Age : %d\n", student[idx].age);
        printf("Mark : %f\n", student[idx].mark);
    }
}

int main() {
    getStudentInfo();
    return 0;
}