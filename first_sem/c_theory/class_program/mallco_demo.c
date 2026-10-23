#include <stdio.h>      
#include <stdlib.h>     
int main()
{
    int *ptr;           // Declares an integer pointer
    int i, sum = 0;     // Declares i and initializes sum to 0
    ptr = (int *)malloc(10 * sizeof(int)); // Allocates memory for 10 integers
    if (ptr == NULL){    // Checks whether memory allocation failed
        printf("Memory allocation failed"); // Displays an error message
        return 1;       // Terminates the program
    }
    printf("Enter 10 integers:\n"); // Asks the user to enter 10 integers
    for (i = 0; i < 10; i++){ // Repeats the loop 10 times
        scanf("%d", &ptr[i]); // Reads each integer into allocated memory
    }
    for (i = 0; i < 10; i++){ // Repeats the loop to calculate the sum
        sum = sum + ptr[i]; // Adds each integer to sum
    }
    printf("Sum = %d\n", sum); // Displays the total sum
    free(ptr);          // Releases the dynamically allocated memory
    return 0;           // Ends the program successfully
}