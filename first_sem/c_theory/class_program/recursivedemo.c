#include<stdio.h>
int factorial(int number){
    if(number==0){
        return 1;
    }
    return number*factorial(number-1);
}
int main(){
    int number=0;
    printf("enter the number");
    scanf("%d",&number);
    printf("%d!=%d",number,factorial(number));
}
