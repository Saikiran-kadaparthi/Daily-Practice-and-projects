//funtion to add two numbers.
#include <stdio.h>
int add(int a, int b)
{
  	return a + b;
}
	
	
int main()
{
	int x, y;
	printf("Enter first value : ");
	scanf("%d", &x);
	
	printf("Enter second value : ");
	scanf("%d", &y);
	
 	int sum = add(x, y);
 	printf("sum: %d", sum);
	return 0;
}

