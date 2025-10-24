// printing numbers from n to 1 using recursion
#include<stdio.h>

void printNumbers(int n)
{
	if (n==0)
	{
		return;
	}
	
	printf("%d\n", n);
	n = n-1;
	
	printNumbers(n);
	
}

int main()
{
	int n;
	printf("Give a number : ");
	scanf("%d",&n);
	
	printNumbers(n);
	return 0;
	
}
