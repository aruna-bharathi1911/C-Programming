#include<stdio.h>
int main(){
    int day;
    printf("\nTO FIND THE DAY OF WEEK WITH NUMBER");
    printf("\nEnter the number(1-7) :");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("\nThe Day is MONDAY");
        break;
        case 2:
        printf("\nThe Day is TUESDAY");
        break;
        case 3:
        printf("\nThe Day is WEDNESDAY");
        break;
        case 4:
        printf("\nThe Day is THURSADAY");
        break;
        case 5:
        printf("\nThe Day is FRIDAY");
        break;
        case 6:
        printf("\nThe Day is SATURDAY");
        break;
        case 7:
        printf("\nThe Day is SUNDAY");
        break;
        default:
        printf("\nThe Number is invalid");
        break;
    }

        return 0;
    }