#include<stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int m=20;
    int n=10;
    printf("before swap: m=%d,n=%d",m,n);
    swap(&m,&n);
    printf("\nafter swap: m=%d,n=%d",m,n);
    return 0;
}