#include<stdio.h>

struct address {
    char city[50];
    int pin;
};
 struct Person {
     char name[50];
     struct address addr;
 };
 int main() {
     struct Person p;
     printf("Enter name:");
     scanf("%s",p.name);
     printf("Enter city:");
     scanf("%s",p.addr.city);
     printf("Enter pin:");
     scanf("%s",p.addr.pin);
     printf("\nPerson details\n");
     printf("Name:%s\nCity:%s\nPin:%d\n",p.name,p.addr.city,p.addr.pin);
     return 0;
}
