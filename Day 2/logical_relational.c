#include<stdio.h>
int main(){
    int a=7,b=17;
    printf("RELATIONAL OPERATORS");
    printf("\ngreater: %d",a>b);
    printf("\nless: %d",a<b);
    printf("\ngreater than or equal to: %d",a>=b);
    printf("\nless than or equal to: %d",a<=b);
    printf("\nequal to: %d",a==b);
    printf("\nnot equal to: %d",a!=b);

    printf("\n\nLOGICAL OPERATOR");
    int c=10;
    printf("\nlogical AND:",(a>b)&&(a>c));
    printf("\nlogical OR: %d",(a>b)||(a>b));
    printf("\nlogical NOT: %d",!c);
}