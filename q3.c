// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

// /*
// Sample Test Cases:
// Input 1:
// 5 10
// Output 1:
// Area=50, Perimeter=30

// Input 2:
// 3 7
// Output 2:
// Area=21, Perimeter=20

// */



#include <stdio.h>

int main() {
    int len=
    printf("Enter the Length %d",len);
    scanf("%d",&len);
    
    int bre=
    printf("Enter the Breadth %d",bre);
    scanf("%d",&bre);
    
    int area=(len*bre);
    int perimeter=(2*(len+bre));
    
    printf("The Area is %d",area);
    printf("The Perimeter is %d",perimeter);

    return 0;
}