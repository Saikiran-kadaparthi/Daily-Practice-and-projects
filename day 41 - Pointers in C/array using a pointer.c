//Print all elements of an array using a pointer (instead of indexing).

#include<stdio.h>
int main()
{
	int size;
	
	//array size input
	printf("Give length of the array : ");
	scanf("%d", &size);
	int arr[size];
	
	//array elements input
	int i;
	for(i=0; i<size; i++)
	{
		printf("Give element %d : ", i);
		scanf("%d", &arr[i]);
	}
	
	// printing elements of the array using pointer;
	
	int *p;
	p = &arr;
	printf("\n\nArray elements using pointer: ");
	for(i=0; i<size; i++)
	{
		printf("\nelement %d : %d", i, *(p+i));
	}
	
	return 0;
}
