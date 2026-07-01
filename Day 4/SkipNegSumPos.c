#include<stdio.h>
int main(){
    int arr[]={2,6,4,8,-3,4,7,-6,4,3,6},i,n=11,sum=0;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            continue;
        }
        sum+=arr[i];
        
    }
        printf("%d",sum);

    return 0;

}