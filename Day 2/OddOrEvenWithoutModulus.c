#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number:");
    scanf("%d",&number);

    if(number&1==1){
        printf("\nThe number %d is odd",number);
    }
    else{
        printf("The number %d is Even",number);
    }

    return 0;
}