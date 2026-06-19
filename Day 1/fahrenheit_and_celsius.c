#include<stdio.h>
int main(){
    float fahrenheit,celsius;
    printf("Enter Fahrenheit :");
    scanf("%f",&fahrenheit);
    printf("Enter Celsius :");
    scanf("%f",&celsius);

    //fahrenheit to celsius
    celsius=(fahrenheit-32)*5.0/9.0;
    printf("Celsius: %.2f",celsius);

    //celsius to fahrenhiet
    fahrenheit=celsius*9.0/5.0+32;
    printf("Fahrenheit: %.2f",fahrenheit);
    return 0;
}