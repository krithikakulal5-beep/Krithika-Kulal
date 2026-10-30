#include <stdio.h> 
#include<stdlib.h>

#define SIZE 5

// Global variables 
int queue[SIZE];
int front= -1,rear=-1; 

int isfull(){
    if(rear==SIZE-1){
        printf("queue is full...cant store further data");
        return 1;
    }
    return 0;

}
int isempty(){
    if (front==-1 && rear==-1) {
        printf("queue underflow! No elements to dequeue.\n");
        return 1;

    }
    return 0;
    
}
// Case 1: Method definition for push

void enqueue(int newdata) {
    if (isfull()) {
        printf("cannot add further");
        
    } 
    else {
        //insert new data
        rear++;
        queue[rear] = newdata;
        printf("%d is added to the front of the queue\n", newdata);
    }
}

// Case 2: Method definition for pop
void dequeue() {
    if (isempty()){
        printf("underflow");
        } 
    else{
        front++;
        int retrived_data=queue[front]; 
        printf("dequeue element: %d\n",retrived_data);
    }
    
}

// Case 3: Method definition for display
void display() {
    if (front == -1) {
        printf("queue is empty.\n");
    } 
    else {
        printf("Current queue elements (top to bottom):\n");
        for (int i = rear; i >= 0; i--) {
            printf("| %d |", queue[i]);
        }
        
    }
}
int main() {
    int option;
    int mydata;
    do {
        printf("1.enqueue data\n");
        printf("2.dequeue data\n");
        printf("3.display data\n");
        printf("4.exit\n");
        printf("enter your choice: ");
        scanf("%d", &option);
        printf("\n"); 

        switch (option) {
            case 1:
                printf("enter the queue data: ");
                scanf("%d", &mydata);
                enqueue(mydata);
                break;
                
            case 2:
                dequeue();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exiting program...\n");
                exit(0); 
                
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (option != 4);

    return 0;
}