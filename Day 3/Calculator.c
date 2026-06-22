#include<stdio.h>
int main(){
    float num1,num2;
    char operator;
    printf("\nCALCULATOR");
    printf("\n\nEnter the expression(eg:3+3): ");
    scanf("%f%c%f",&num1,&operator,&num2);
    switch (operator)
    {
    case '+':
        printf("RESULT:%.2f",num1+num2);
        break;
    case '-':
        printf("RESULT:%.2f",num1-num2);
        break;
    case '*':
        printf("RESULT:%.2f",num1*num2);
        break;
    case '/':
        if(num2==0){
            printf("ZERO DIVISON INVALID");
        }
        else{
            printf("RESULT:%.2f",num1/num2);
        }
        break;
    default:
        printf("INVALID OPERATOR");
        break;
    }
    return 0;
}