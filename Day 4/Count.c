#include<stdio.h>
int main(){
    int num,count=0,last;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    while(num!=0){
        last=num%10;
        count+=1;
        num/=10;
    }
    printf("THE COUNT=%d",count);
    return 0;

}