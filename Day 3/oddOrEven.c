#include<stdio.h>
int main(){
    int number;
    printf("\nTO FIND ODD OR EVEN");
    printf("\nEnter a Number:");
    scanf("%d",&number);

    if(number>=0){
       if(number==0){
        printf("\nThe Given Number is Zero");
       }
       else if(number%2==0){
        printf("\nThe number %d is an EVEN NUMBER",number);
       }
       else{
        printf("\nThe number %d is a ODD NUMBER",number);
       }
    }
    else{
        printf("\nThe given Number is less than 0(Negative numver)");
     }


    return 0;
}