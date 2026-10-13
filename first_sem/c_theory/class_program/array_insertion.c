#include<stdio.h>
int main(){
    int number[5];
    int newdata;
    int indexvalue;
    for(int i=0;i<4;i++){
        printf("input %d array element",i+1);
        scanf("%d",&number[i]);
    }
    printf("enter the new element");
    scanf("%d",&newdata);
    printf("enter the index value");
    scanf("%d",&indexvalue);
    //insertion process to insert 'newdata' at index 'index'
    number[4]=number[3];
    number[3]=number[2];
    number[2]=newdata;
    for (int j=0;j<=4;j++){
        printf("\n %d",number[j]);
    }

}