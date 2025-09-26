//Reverse an array using pointers.
#include<stdio.h>
int main()
{
	int i, size;
	
	printf("Size of Array : ");
	scanf("%d", &size);
	
	int arr[size], rev_arr[size];
	int *p = arr, *p_rev = rev_arr;

	for(i=0; i<size; i++)
	{
		printf("Element %d : ", i+1);
		scanf("%d", &*(p+i));
	}
	
	
	for(i =0; i<size; i++)
	{
		*(p_rev+i) = *(p+size-i-1);
	}
	
	printf("\n Given array : \n");
	for(i=0; i<size; i++)
	{
		printf("%d ", *(p+i));
	}
	
	
	printf("\n\n Reverese array using pointers : \n");
	for(i=0; i<size; i++)
	{
		printf("%d ", *(p_rev+i));
	}
	printf("\n");
	
	return 0;
}
