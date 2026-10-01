//prog to store and display 5 sub marks
#include<stdio.h>
int main(){
    int my_marks[5];
    int sub_marks[5];    //declares an array subject aks with size 5 of int //storing data/array intialisation - array_name[index]=data/value
    sub_marks[0]=80;    //stores 80 in an array position whoes index is 0
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;     //static array intialisation
    printf("first subject marks:%d\n",sub_marks[0]);//fetch first array element from first subject marks
    printf("second subject marks:%d\n",sub_marks[1]);//fetch first array element from first subject marks
    printf("third subject marks:%d\n",sub_marks[2]);
    printf("fourth subject marks:%d\n",sub_marks[3]);
    printf("fifth subject marks:%d\n",sub_marks[4]);
    for(int i=0;i<5;i++){
        printf("enter the %d subject marks:[int data]",i+1);
        scanf("%d",&my_marks[i]);
    }
    /*printf("enter the first subject mark:[int data]");
    scanf("%d",&my_marks[0]);
    printf("enter the second subject mark:[int data]");
    scanf("%d",&my_marks[1]);
    printf("enter the third subject mark:[int data]");
    scanf("%d",&my_marks[2]);
    printf("enter the fourth subject mark:[int data]");
    scanf("%d",&my_marks[3]);
    printf("enter the fifth subject mark:[int data]");
    scanf("%d",&my_marks[4]);
    printf("my subject1 mark:%d",my_marks[0]);
    printf("my subject2 mark:%d",my_marks[1]);
    printf("my subject3 mark:%d",my_marks[2]);
    printf("my subject4 mark:%d",my_marks[3]);
    printf("my subject5 mark:%d",my_marks[4]);*/

}