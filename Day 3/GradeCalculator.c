#include<stdio.h>
int main(){
    int mark;
    printf("TO CALCULATE GRADE(A/B/C/D/F)");
    printf("\nEnter The Mark:");
    scanf("%d",&mark);
    printf("\nYou Scored:%d",mark);
       if(mark>=90 && mark<=100){
        printf("\n\nA");
       }
       else if(mark>=80 && mark>70){
        printf("\n\nB");
       }
       else if(mark>=70 && mark>60){
        printf("\n\nC");
       }
       else if(mark>=50 && mark>=60){
        printf("\n\nD");
       }
       else if(mark<50 && mark>=0){
        printf("\n\nFAIL");
       }
       else{
        printf("\n\nEnter a value above 0 or Zero");
       }

    return 0;
}