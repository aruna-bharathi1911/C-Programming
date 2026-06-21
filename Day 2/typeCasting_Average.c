#include<stdio.h>
int main(){
    int mark1,mark2,mark3;
    float average;
    printf("Enter marks Of 3 Subjects:");
    scanf("%d %d %d",&mark1,&mark2,&mark3);

    int total = mark1+mark2+mark3;
    printf("\nTotal Score: %d",total);

    average=(float)total/3;           //average in float
    printf("\nThe average (Float): %f",average);

    average=total/3;      //truncated value not roundoff
    printf("\nThe average (Truncated to int): %d",(int)average);

    return 0;

}