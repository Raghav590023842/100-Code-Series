// Q4: Write a program to calculate the area and circumference of a circle given its radius.

// /*
// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// Area=153.94, Circumference=43.96

// Input 2:
// 3
// Output 2:
// Area=28.27, Circumference=18.85

// */



#include <stdio.h>

int main() {
    int rad=
    printf("Enter the Radius %d",rad);
    scanf("%d",&rad);
    
    int area=(3.14*(rad*rad));
    int cir=(2*3.14*rad);
    
    printf("The Area is %d",area);
    printf("The Circumference is %d",cir);

    return 0;
}