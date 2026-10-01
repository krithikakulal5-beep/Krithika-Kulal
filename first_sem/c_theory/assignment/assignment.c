#include<stdio.h>
int main(){
    int n,choice;
    int bill=0,regular=0,premium=0,recliner=0;
    float discount=0 ,finalbill=0;
    printf("Enter the number of tickets");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("enter category of ticket %d (1/2/3)",i);
        scanf("%d",&choice);
        if (choice==1) 
        {
            regular++;
            bill=bill+150;        
        }
        else if (choice==2)
        {
            premium++;
            bill=bill+250;
        }    
        else if (choice==3)
        {
            recliner++;
            bill=bill+400;
        }
        else
        {
            printf("Invalid category!\n");
            i--;
        }    
    }
    printf("--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular);
    printf("Premium tickets: %d\n", premium);
    printf("Recliner tickets: %d\n", recliner);
    printf("Total (before discount): %d\n", bill);
        if (n>=5)
        {
            discount=bill*0.10;
            finalbill=bill-discount;
            printf("discount applied: Yes%.2f\n",discount);
        }
        else
        {
            finalbill = bill;
            printf("discount applied: No\n");
        }
        printf("Final amount:%.2f\n",finalbill);
        return 0;

    }


