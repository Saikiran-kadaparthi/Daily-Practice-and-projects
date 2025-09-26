//Swap two numbers using pointers (no return function).

#include<stdio.h>
int main()
{
	int n1, n2, temp;
	int *p1, *p2;
	
	printf("Enter Value of n1 : ");
	scanf("%d", &n1);
	
	printf("Enter value of n2 : ");
	scanf("%d", &n2);
	
	p1 = &n1; p2 = &n2;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	
	printf("\n\nAfter swapping")
	;printf("\n\nvalue of n1 : %d, adress of n1 : %d", n1, p1);
	printf("\nvalue of n2 : %d, adress of n2 : %d", n2, p2);
	
	return 0;
	
}
