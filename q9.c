// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

// /*
// Sample Test Cases:
// Input 1:
// 1000 5 2
// Output 1:
// Simple Interest=100, Compound Interest=102.5

// Input 2:
// 5000 7 3
// Output 2:
// Simple Interest=1050, Compound Interest=1125.76

// */



#include<stdio.h>
int main()
{
    int P=
    printf("Enter the loan amount %d",P);
    scanf("%d",&P);

    int T=
    printf("Enter the Number of Months you need loan for %d",T);
    scanf("%d",&T);
    
    int R=
    printf("Enter the Rate %d",R);
    scanf("%d",&R);

    int SI=(P*T*R/100);
    printf("Simple Interest is %d",SI);

    int CI=(P+SI);
    printf("Compound Interest is %d",CI);
    return 0;
}