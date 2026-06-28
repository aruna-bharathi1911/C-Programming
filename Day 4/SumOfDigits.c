#include<stdio.h>
int main(){
    int num,last,sum=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    while(num!=0){
        last=num%10;
        sum+=last;
        num/=10;
    }
    printf("THE NUMBER OF THE DIGITS:%d",sum);
    return 0;
}