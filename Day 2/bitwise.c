#include<stdio.h>
int main(){
    int a=10,b=5;     //10=1010  5=0101
    printf("bitwise AND:%d",a&b);
    printf("\nbitwise OR:%d",a|b);
    printf("\nbitwise XOR:%d",a^b);
    printf("\nbitwise NOT:%d",~a);
    printf("\nbitwise NOT:%d",~b);
    printf("\nLeftshift:%d",a<<1);
    printf("\nrightshift:%d",2>>a);

return 0;
}