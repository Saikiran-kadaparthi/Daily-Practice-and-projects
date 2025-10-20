// PRinting a number using recursion from user input

#include<stdio.h>

int fun(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return 1 + fun(n-1);
	}
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("\n You entered %d, Printed using recursion.", fun(n));
	return 0;
}
