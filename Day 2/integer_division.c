// int to float



#include<stdio.h>
int main(){
    int a=7,b=2;
    float res1= a/b;   //int div and then stores as float
    printf("%f",res1);

    float res2=(float)a/b;     //converts to float and then divide
    printf("\n%f",res2);   
    
    float res3=(float)(a/b);     //divides the int values and then converts to float
    printf("\n%f",res3);

    return 0;
}