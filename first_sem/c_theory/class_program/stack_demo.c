#include <stdio.h>
#include <stdlib.h> // Needed for the exit(0) function

#define SIZE 5 // Sets the stack capacity to 5

// Global variables - accessible by all functions directly
int stack[SIZE];
int top = -1; // To represent stack top index

// Case 1: Method definition for push
void push(int newdata) {
    if (top == SIZE - 1) {
        printf("stack overflow! cannot push %d\n\n", newdata);
    } 
    else {
        top++;
        stack[top] = newdata;
        printf("%d is pushed to the top of the stack\n\n", newdata);
    }
}

// Case 2: Method definition for pop
void pop() {
    if (top == -1) {
        printf("stack underflow! No elements to pop.\n\n");
    } 
    else {
        printf("Popped element: %d\n\n", stack[top]);
        top--; // Move the top index down
    }
}

// Case 3: Method definition for display
void display() {
    if (top == -1) {
        printf("Stack is empty.\n\n");
    } 
    else {
        printf("Current stack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("| %d |\n", stack[i]);
        }
        printf("-----\n\n");
    }
}

int main() {
    int option;
    int mydata;

    do {
        printf("1.push data\n");
        printf("2.pop data\n");
        printf("3.display data\n");
        printf("4.exit\n");
        printf("enter your choice: ");
        scanf("%d", &option);
        printf("\n"); // Adds a clean line break

        switch (option) {
            case 1:
                printf("enter the stack data: ");
                scanf("%d", &mydata);
                push(mydata);
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exiting program...\n");
                exit(0); // Cleanly closes the console program
                
            default:
                printf("Invalid choice! Please select 1, 2, 3, or 4.\n\n");
                break;
        }
    } while (option != 4);

    return 0;
}