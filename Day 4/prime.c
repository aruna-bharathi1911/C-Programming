#include<stdio.h>
int main(){
    int n;
    int prime=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
           prime=1;
           break;
        }
    }
        if(prime){
            printf("\nnot prime");
        }
        else{
            printf("\n prime number");
        }
    return 0;
}