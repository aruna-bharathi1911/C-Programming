#include<stdio.h>
int main(){
    char name[50];
    int age;
    float CGPA;
    char name2[50];
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter Age:");
    scanf("%d",&age);
    printf("Enter CGPA:");
    scanf("%f",&CGPA);
    printf("Name: %s\nAge: %d\nCGPA:%.2f",name,age,CGPA);

    //In string/array whitespace is omitted,stops and returns till whitespace
    printf("\nenter name:");
    scanf("%s",name2);
    printf("name:%s",name2);
    return 0;
}