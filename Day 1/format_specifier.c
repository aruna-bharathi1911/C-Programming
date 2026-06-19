#include<stdio.h>
int main(){
    int a=12;
    float b=1234.653f;
    char c='A';
    char d[]="format specifier";
    double e=6247.85f;
    unsigned int f=63;
    long g=64367L;
    long long h=7356LL;
    int hex=36;
    printf("interger: %d\n",a);
    printf("float number: %f \n",b);
    printf("char value: %c \n",c);
    printf("string: %s \n",d);
    printf("double value: %lf",e);
    printf("unsigned int:%u \n",f);
    printf("long value : %l \n",g);
    printf("long long value: %ll \n",h);
    printf("hexdecimal lower: %x \n",hex);
    printf("hexdecimal upper: %X \n",hex);
    printf("percentage: 100 %% \n");
    printf("octal value: %o \n",hex);
    printf("memory of a: %p \n ",(void*)&a);
    return 0;

}