#include<stdio.h>
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    while(n!=0){
        printf("THE NUMBER IS NOT ZERO");
        printf("\nValue:");
        scanf("%d",&n);
    }
    printf("YOU ENTERED ZERO");
    return 0;
}