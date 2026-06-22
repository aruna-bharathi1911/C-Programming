#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,total;
    float average;
    printf("\nMARKS OF 5 SUBJECTS AND AVERAGE WITH GRADE");
    printf("\n\nEnter mark 1:");
    scanf("%d",&m1);
    printf("\nEnter mark 2:");
    scanf("%d",&m2);
    printf("\nEnter mark 3:");
    scanf("%d",&m3);
    printf("\nEnter mark 4:");
    scanf("%d",&m4);
    printf("\nEnter mark 5:");
    scanf("%d",&m5);
    printf("\n\nTHE MARKS OF 5 SUBJECTS ARE %d %d %d %d %d",m1,m2,m3,m4,m5);
    total=m1+m2+m3+m4+m5;
    average=total/5;
    printf("\n TOTAL OF 5 SUBJECTS :%d",total);
    printf("\n AVERAGE OF 5 SUBJECTS :%f",average);
    if(average>=75 && average<=100){
        printf("\nDistinction");
    }
    else if(average>=60 && average<75){
        printf("\nFirst");
    }
    else if(average>=50 && average<40 ){
        printf("\nSecond");
    }
    else if(average>=40 && average<30){
        printf("\nPass");
    }
    else {
        printf("\nFail");
    }
return 0;

}