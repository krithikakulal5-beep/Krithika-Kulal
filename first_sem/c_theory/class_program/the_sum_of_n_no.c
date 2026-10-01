#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the n value");
    scanf("%d",&n);
    if(n<5){
        printf("please enter n greater than 5");
    }else{
        for(int i=5;i<=n;i++){
            sum+=i;
        }
        printf("sum of numbers from 5 to%d is:%d\n:",n,sum);
    }
    return 0;
}






















































































































