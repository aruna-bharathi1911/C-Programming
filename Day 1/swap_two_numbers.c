#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    printf("Before swapping\n");
    printf("Number 1:%d \nNumber 2:%d \n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After Swapping \n");
    printf("Number 1:%d \nNumber 2:%d \n",num1,num2);
    return 0;
}