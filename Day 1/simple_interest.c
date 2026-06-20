#include<stdio.h>
int main(){
    float Principal,Time,Rate,simple_interest;

    printf("CALCULATING SIMPLE INTEREST");
    printf("\nEnter Principal Amount:",Principal);
    scanf("%f",&Principal);

    printf("Enter Time Period:",Time);
    scanf("%f",&Time);

    printf("Enter Rate of Interest:",Rate);
    scanf("%f",&Rate);

    simple_interest=(Principal*Time*Rate)/100;
    printf("The simple interest : %.4f",simple_interest);

    return 0;

}