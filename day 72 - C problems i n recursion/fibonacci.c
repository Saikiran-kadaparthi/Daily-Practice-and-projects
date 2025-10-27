//fibonacci

#include<stdio.h>
int f = 0, s = 1;

int fibonacci(int n)
{
	if (n==1 || n==0)
	{
		return n;
	}
	
	return fibonacci (n-1) + fibonacci (n-2);
	
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	printf("%d", fibonacci(n));
	return 0;
}
