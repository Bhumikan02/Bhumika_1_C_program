#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char gender[10];
    char department[10];
    char college;
};

int main() {
    struct Student s1 ;
    printf("Enter name: ");
    scanf("%s",&s1.name);

    printf("Enter age: ");
    scanf("%d",&s1.age);

    printf("Enter gender:");
    scanf("%s",&s1.gender);

    printf("Enter department:");
    scanf("%s",&s1.department);
    
    printf("Enter college name:");
    scanf("%s",&s1.college);
    printf("\nStudent details\n");
    printf("Name:%s\nAge:%d\nGender:%s\nDepartment:%s\nCollege:%s\n, s1.name, s1.age, s1.gender, s1.department, s1.college");
    
    return 0;
}
