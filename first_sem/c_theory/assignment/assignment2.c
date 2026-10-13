#include <stdio.h>

void get_details(char name[][20], int roll[], int marks[][5], int n);
int calculate_total(int marks[], int n);
float calculate_percentage(int total);
int check_result(int marks[]);
void show_report(char name[][20], int roll[], int marks[][5], int n);

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char name[n][20];
    int roll[n];
    int marks[n][5];
    get_details(name, roll, marks, n);
    show_report(name, roll, marks, n);
    return 0;
}
void get_details(char name[][20], int roll[], int marks[][5], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter Student %d Details\n", i + 1);
        printf("Enter Name: ");
        scanf("%19s",name[i]);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter 5 Subject Marks:\n");
        for(int j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}
int calculate_total(int marks[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    return sum;
}

float calculate_percentage(int total)
{
    return total / 500.0 * 100;
}

int check_result(int marks[])
{
    for(int i = 0; i < 5; i++)
    {
        if(marks[i] < 35)
        {
            return 0;
        }
    }
    return 1;
}
void show_report(char name[][20], int roll[], int marks[][5], int n)
{
    printf("\n----- STUDENT REPORT -----\n");

    for(int i = 0; i < n; i++)
    {
        int t = calculate_total(marks[i], 5);
        float p = calculate_percentage(t);
        int r = check_result(marks[i]);
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", name[i]);
        printf("Roll Number: %d\n", roll[i]);
        printf("Total: %d / 500\n", t);
        printf("Percentage: %.2f%%\n", p);
        if(r == 1)
        {
            printf("Result: PASS\n");
        }
        else
        {
            printf("Result: FAIL\n");
        }
    }
}
    