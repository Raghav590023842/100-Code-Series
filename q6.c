// Q6: Write a program to swap two numbers using a third variable.

// /*
// Sample Test Cases:
// Input 1:
// 3 5
// Output 1:
// After swap: 5 3

// Input 2:
// -1 1
// Output 2:
// After swap: 1 -1

// */



#include <stdio.h>
int main()
{
    int first=
    printf("Enter the First Number %d",first);
    scanf("%d",&first);
    
    int second=
    printf("Enter the Second Number %d",second);
    scanf("%d",&second);
    
    int third=(first);
    first=(second);
    second=(third);
    
    printf("First Number is %d",first);
    printf("Second Number is %d",second);
    return 0;
}