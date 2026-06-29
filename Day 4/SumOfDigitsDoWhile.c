#include<stdio.h>
int main(){
    int sum=0,n;
    printf("Enter the Number:");
    scanf("%d",&n);
    do{
        
        sum+=n%10;
        n/=10;
    }
    while(n!=0);
    printf("THE SUM OF DIGITS IS %d",sum);
    return 0;
}