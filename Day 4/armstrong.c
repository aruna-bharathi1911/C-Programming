#include<stdio.h>
#include<math.h>
int main(){
    int n,sum,temp,digits=0,digit;
    printf("The Armstrong Number Between 1 and 999\n");
    for(n=0;n<1000;n++){
    temp=n;
    digits=0;
    sum=0;
    while(temp!=0){

        digits++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum+=(int)pow(digit,digits);
        temp/=10;
    }
    if(sum==n){
    printf("\n%d",n);
    }
}

    return 0;
}