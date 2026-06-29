#include<stdio.h>
int main(){
    int arr[]={1,3,47,75,2,26,44},i;
    int n=7;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("\nTHE FIRST EVEN NUMBER %d at index %d",arr[i],i);
            break;
        }
    }
    return 0;
}