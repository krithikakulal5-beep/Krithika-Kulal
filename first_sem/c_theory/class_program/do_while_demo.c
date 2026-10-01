#include <stdio.h>

int main()
{
    int choice,firstnumber,secondnumber;
    do{    
    printf("\n-------------welcome to my calculator----------------------\n");
    printf("1.addition\n");
    printf("2.subtaction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.exit\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    if(choice ==1){
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int addition=firstnumber + secondnumber;
        printf("the sum is : %d\n",addition);
    }
    if(choice ==2){
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int difference=firstnumber-secondnumber;
        printf("the difference is : %d\n",difference);
    }
    if(choice ==3){
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int multiplication=firstnumber*secondnumber;
        printf("the product is : %d\n",multiplication);
    }
    if(choice ==4){
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int division=firstnumber/secondnumber;
        printf("the quotient is : %d\n",division);
    }
    if(choice ==5){
        printf("invalid choice\n");
    }}
    while(choice!=5);

    printf("-------------end-----------------------------\n");
    return 0;
}