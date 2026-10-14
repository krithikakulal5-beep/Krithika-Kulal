#include<stdio.h>
int main(){
    int x=10;  //declaring a value to a variable
    int*p;     //declaring a pointer
    p=&x;      //stores value of pointer(address of variable x is stored in p pointer)

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
}