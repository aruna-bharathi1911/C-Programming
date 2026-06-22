#include<stdio.h>
int main(){
    int year,month,isleap;
    printf("THE NUMBER OF DAYS IN A MONTH(HANDLE LEAP YEAR FOR FEBRUARY)");
    printf("\n\nEnter Year:");
    scanf("%d",&year);
    printf("Enter Month(Number):");
    scanf("%d",&month);
    if(year%4==0 && year%100!=0){
      isleap=1;
    }
    else if(year%400==0){
    isleap=1;
    }
    else{
    isleap=0;
    }
    switch ((month))
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf("\nTHIS MONTH HAS 31 DAYS");
      break;
    case 4:
    case 6:
    case 9:
    case 11:
     printf("\nTHIS MONTH HAS 30 DAYS");
     break;
    case 2:
     if (isleap==1)
     {
        printf("\nTHIS MONTH HAS 29 DAYS");
     }
     else{
        printf("\nTHIS MONTH HAS 28 DAYS");
     }
    break;   
    default:
        printf("\n Month(1-12) and Year 4 digit");
        break;
    }
    return 0;
    }
