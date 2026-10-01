#include<stdio.h>
int main(){
    int accountno=1000;
    float balance=500;
    int choice;
    float amount;
    do{
    printf("-------wecome to my bank---------\n");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
    printf("enter your option");
    scanf("%d",&choice);
    if (choice==1){
        printf("enter the deposit amount");
        scanf("%f",&amount);
        balance=balance+amount;
        printf("the balance after deposit: %f",balance);      
    }
    if(choice==2){
        printf("enter the withdrawal amount");
        scanf("%f",&amount);
        balance=balance-amount;
        printf("the balance after withdrawal: %f",balance);
    }
    if(choice==3){
        printf("the current balance %f",balance);
    }if(choice==4){
        printf("exit");
    }
}
    while(choice!=4);
    return 0;
}