#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	
	if (num>=0)
	{
		if (num==0)
			printf("Number is ZERO");
		else 
			printf("Number is Positive");
}
	else
		printf("Number is Negative");
	
	return 0;
}
