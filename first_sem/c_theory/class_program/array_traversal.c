#include<stdio.h>
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
int main(){
    int isvalid=1;
    int arraysize=0;
    //calling method &stores returned values
    //passing 'arraysize';int array_size=arraysize
    while(isvalid==1){
        arraysize=read_array_size();
        int validated=validate_array_size(arraysize);   
        if(validated==1){
            break;
        }
        else{
            printf("array size is invalid.plz retry\n");
        }
    }
    int myarray[arraysize];
    for(int i;i<arraysize;i++){
        printf()
    }
}
