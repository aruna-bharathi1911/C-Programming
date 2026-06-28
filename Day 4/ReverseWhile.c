#include<stdio.h>
int main(){
    int a,rev=0,last;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    while(a!=0){
        last=a%10;
        rev=rev*10+last;
        a/=10;

    }
    printf("THE REVERSE IS:%d",rev);
    return 0;
}