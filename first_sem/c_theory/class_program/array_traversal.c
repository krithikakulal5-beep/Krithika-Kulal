#include<stdio.h>

int main(){
    int arraysize=read_array_size();   //calling method &stores returned values
    int isvalid=validate_array_size(arraysize);     //passing 'arraysize';int array_size=arraysize

}
//read array size from keyboard
int read_array_size(){
    int size;
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}
int validate_array_size(int array_size){
    if (array_size>4){
        return 1;    
    }
    return 0;
}
