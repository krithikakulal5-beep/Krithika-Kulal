#include<stdio.h>
int rollno,sub1,sub2,sub3,sub4,sub5,total,average,cgpa;
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
void gettotal(){
    total=sub1+sub2+sub3+sub4+sub5;
}
void getaverage(){
    average=total/5;
}
void getcgpa(){
    cgpa=average/9.5;
}
void displaystudentdetails(){
    printf("roll no:%d\n",rollno);
    printf("toatl:%d\n",total);
    printf("average:%d",average);
    printf("cgpa:%d",cgpa);
}
int main(){
    //declaration
    //user defined functions
    getstudentdata();
    gettotal();
    getaverage();
    getcgpa();
    displaystudentdetails();

    

}