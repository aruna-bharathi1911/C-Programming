#include<stdio.h>
int main(){
    int a=1000000,b=1000000;
    int product=a*b;
    printf("%d",product);   //wrong ans because int range 2147483647

    long long product2= (long long)a*b;  //typecasting
    printf("\n%lld",product2);

    long long product3=a*b;        //takes int datatype and multiple with range of int
    printf("\n%lld",product3);     

    return 0;
}