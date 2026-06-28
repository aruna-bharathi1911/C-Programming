#include<stdio.h>
int main(){
    int num1,num2,choice;
    do{
        printf("\n=========================");
        printf("\nMENU DRIVEN CALCULATOR");
        printf("\n=========================");
        printf("\n1. ADDITION");
        printf("\n2.SUBTRACTION");
        printf("\n3.MULTIPLICATION");
        printf("\n4.DIVISION");
        printf("\n5.MODULUS");
        printf("\n6.EXIT");
        printf("\nEnter a number(1 to 6):");
        scanf("%d",&choice);
        switch (choice){
           case 1:
              printf("\nEnter two numbers: ");
              scanf("%d %d", &num1, &num2);
              printf("\nRESULT:%d+%d=%d",num1,num2,num1+num2);
              break;
           case 2:
              printf("\nEnter two numbers: ");
              scanf("%d %d", &num1, &num2);
              printf("\nRESULT:%d-%d=%d",num1,num2,num1-num2);
              break;
           case 3:
              printf("\nEnter two numbers: ");
              scanf("%d %d", &num1, &num2);
              printf("\nRESULT:%d*%d=%d",num1,num2,num1*num2);
              break;
           case 4:
              printf("\nEnter two numbers: ");
              scanf("%d %d", &num1, &num2);
              if(num2==0){
                printf("\nDIVISON INVALID");
             }
             else{
                printf("\nRESULT:%d/%d=%d",num1,num2,num1/num2);
             }
              break;
           case 5:
    printf("\nEnter two numbers: ");

    if(scanf("%d %d",&num1,&num2)!=2){
        printf("\nInvalid Input");
        break;
    }

    if(num2==0)
        printf("\nMODULUS INVALID");
    else
        printf("\nRESULT:%d%%%d=%d",
               num1,num2,num1%num2);

    break;
          case 6:
              printf("\nEXISTING....");
              break;
        default:
            printf("\nINVALID CHOICE");
            break;
        }
    }
    while(choice!=6);
   return 0; 
}