#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(j==2){
                break;
            }
            printf("\ni=%d j=%d\n",i,j);
           
        }
         printf("\nStill Running");

    }
    return 0;
}