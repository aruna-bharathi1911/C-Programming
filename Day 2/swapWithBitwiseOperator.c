#include<stdio.h>
int main(){
    int a=10,b=5;
    printf("BEFORE SWAPPING");
    printf("\nThe value of a and b : %d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n\n\nAFTER SWAPPING");
    printf("\nThe value of a and b: %d %d",a,b);

    return 0;
}