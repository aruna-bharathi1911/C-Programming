#include<stdio.h>
int main(){
    char name[10]="aruna";
    int num,rev=0,last,original=num;
    printf("NAME:%s",name);
    printf("\nEnter the number:");
    scanf("%d",&num);
    while(num!=0){
        last=num%10;
        rev=rev*10+last;
        num/=10;
    }
    printf("THE REVERSE IS:%d",rev);
    if(original==rev){
        printf("\nTHE NUMBER IS A PALINDROME");
    }
    else{
        printf("\nTHE NUMBER IS NOT A PALINDROME");
    }
    
return 0;
}