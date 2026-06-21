#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("TO FIND GREATEST OF THREE NUMBERS USING TERNARY OPERATOR");
    printf("\nEnter Number 1: ");
    scanf("%d",&num1);
    printf("\nEnter Number 2: ");
    scanf("%d",&num2);
    printf("\nEnter Number 3: ");
    scanf("%d",&num3);

    int greatest=(num1 > num2)? ((num1>num3)? num1:num3):((num2 >num3)? num2:num3);
    printf("The greatest of three numbers is %d",greatest);

    return 0;

}