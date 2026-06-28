#include<stdio.h>
int main(){
    int num=1,value=1;
    printf("\nUSING BREAK STATEMENT:");
    while(num<=10){
        printf("\n%d",num);
        num++;
        if(num==5){
            break;
        }
    }
    printf("\nUSING CONTINUE STATEMENT:");
    while (value<=10){
        if(value==5){
            value++;
            continue;
        }
        printf("\n%d",value);
        value++;
    }
    
    return 0;
}