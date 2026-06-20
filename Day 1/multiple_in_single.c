#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter three Numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("The three numbers entered are:%d,%d and %d",n1,n2,n3);

    //multiple data types

    char name[20];
    int age;
    float weight,height;
    printf("\n\n\nMULTIPLE DATA TYPES IN SIMPLE LINE");
    printf("\nEnter your name,age,weight,height:");
    scanf("%s %d %f %f",&name,&age,&weight,&height);
    printf("\nThe details entered are:");
    printf("\n\nNAME:%s ||AGE:%d ||WEIGHT:%f ||HEIGHT:%f",name,age,weight,height);

    return 0;

}