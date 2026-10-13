#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="krithika";
    char name[30];
    printf("enter your name:");
    fgets(name,sizeof(name),stdin);
    printf("%29s\n",name);
    printf("my name is %19s",s1);
    for(int i=0;s1[i]!='\0';i++){
        printf("word[%d]=%c\n",i,s1[i]);
    }
} 