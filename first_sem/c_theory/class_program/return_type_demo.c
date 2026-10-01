#include<stdio.h>
int rollno,sub1,sub2,sub3,sub4,sub5,total;
float average,cgpa;
void getstudentdata(){
    printf("enter roll no");
    scanf("%d",&rollno);
    printf("enter the subject1 marks");
    scanf("%d",&sub1);
    printf("enter the subject2 marks");
    scanf("%d",&sub2);
    printf("enter the subject3 marks");
    scanf("%d",&sub3);
    printf("enter the suject4 marks");
    scanf("%d",&sub4);
    printf("enter the subject5 marks");
    scanf("%d",&sub5);
}
int gettotal(){
    total=sub1+sub2+sub3+sub4+sub5;
    return total;
}
float getaverage(){
    average=total/5;
    return average;
}
float getcgpa(){
    cgpa=average/9.5;
    return cgpa;
}
int main(){
    //declaration
    //user defined functions
    getstudentdata();
    float total=gettotal();
    float average=getaverage();
    float cgpa=getcgpa();
    printf("total:%.2f\n",total);
    printf("average:%.2f\n",average);
    printf("cgpa:%.2f\n",cgpa);

}