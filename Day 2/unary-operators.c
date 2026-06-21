#include<stdio.h>
int main(){
    int a=5,b=4;
    a++;                //uses a and then a stores and prints 6
    printf("%d",a);

    int c=a++;      //post increment
    printf("\n%d",c); //prints a value c=6,a=7

    int d=++b;
    printf("\n%d",d);

    int e=--b;
    printf("\n%d",e);

    int n1=5,n2=5;
    printf("\n%d",n1++);    //prints 5 stores n1=6
    printf("\n%d",++n2);    //prints 6 stores n2=6

    int new=5;
    int result=new++ + ++new;      //combined expression 
    printf("\n%d",result);

    return 0;
}