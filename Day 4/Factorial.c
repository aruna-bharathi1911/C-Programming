#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter n value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    printf("FACTORIAL OF %d IS :%d",n,factorial);
    return 0;

}