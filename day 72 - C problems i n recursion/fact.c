//fact using recursion.
#include<stdio.h>


long long int callfact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		
		return n * callfact(n-1);
	}
	
}

int main()
{
	long long int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	if (n < 0)
	{
		printf("Factorial of a Negative number is undefined");
		return 0;
	}
	
	printf("%lld",callfact(n));
	return 0;
}
