#include<stdio.h>
int main(){
    int year;
    printf("\nTO FIND LEAP YEAR OR NOT");
    printf("\nEnter the year:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100!=0){
            printf("\n The year %d is leap year",year);
        }
        else{
            printf("\n The year %d is not a leap year",year);
        }
    }
    else if(year%400==0){
        printf("\n The year %d is a leap year",year);

    }
    else{
        printf("\n The year %d is not a leap year",year);
    }
    return 0;
}
