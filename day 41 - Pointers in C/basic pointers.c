//Declare an integer variable, assign a value, use a pointer to print its address and value.

#include<stdio.h>
int main()
{
	int n = 50;
	int *p = &n;
	
	
	printf("Value of n : %d ", *p);
	printf("\n\nAddress of n : %d", p);
	
	return 0;
}
