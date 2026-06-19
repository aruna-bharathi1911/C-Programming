#include<stdio.h>
int main(){
    float num1=1442.7647;
    int num2=1911;
    printf("decimal values precision : %.2f \n",num1);
    printf("width with right aligned : %5d \n", num2);
    printf("width with left aligned : %-5d \n",num2);
    printf("with zero padding : %05d \n",num2);
    printf("with decimal and width : %8.2lf \n",num1);
    return 0;
}