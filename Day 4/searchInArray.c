#include<stdio.h>
int main(){
    int arr[]={23,54,10,54,10,85,2},n=6,target=10,found=0,i;
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==target){
          printf("%d at index %d",target,i);
          found=1;
          break;  //stops at index 2 without break prints 2 and 4
    }
}
    if(found!=1)
      printf("\nNUMBER NOT FOUND");
    return 0;
    
}