#include<stdio.h>
int main(){
    int marks;
    int maths_marks;
    int dbms_marks;
    int python_marks,total,percentage;
    for(int i=1;i<=3;i++){
        printf("student %d\n",i);
        printf("enter maths_marks\n");
        scanf("%d",&maths_marks);
        printf("enter dbms_marks\n");
        scanf("%d",&dbms_marks);
        printf("enter python marks\n");
        scanf("%d",&python_marks);
        total=maths_marks+dbms_marks+python_marks;
        percentage=total/3;
    }
        printf("\nstudent\tmaths\tdbms\tpython\ttotal\tprcentage\n");
    for(int i=1;i<=3;i++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i,maths_marks,dbms_marks,python_marks,total,percentage);
    }       
    return 0;
}