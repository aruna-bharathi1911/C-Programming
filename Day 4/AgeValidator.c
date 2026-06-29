#include<stdio.h>
int main(){
    int age;
    do{
        printf("Enter the age:");
        scanf("%d",&age);
        if(age<1 || age>120){
            printf("%d is invalid age\n",age);
        }
    }
        while (age<1 || age>120);
        printf("%d is a valid age",age);

    return 0;
}