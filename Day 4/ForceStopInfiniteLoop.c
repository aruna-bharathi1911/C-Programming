#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
   
    while(1){
     scanf("%d",&n);
    if(n==0)
      exit(0);
    if(n==-1)
      break;
    if(n<0)
      continue;
    printf("YOU ENTERED %d",n);
}

return 0;
      
}