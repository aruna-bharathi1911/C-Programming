#include<stdio.h>
int main(){
    int i=0,count=0;
    char name[50];
    printf("Enter The Name:");
    fgets(name,sizeof(name),stdin);
    while(name[i]!='\0'){
        if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='o'||name[i]=='O'||name[i]=='u'||name[i]=='U'||name[i]=='i'||name[i]=='I'){
            count++;
        }
        i++;
    }
    printf("Number of Vowels is %d",count);
    return 0;
}