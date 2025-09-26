//Find the maximum and minimum element in an array using pointers.

#include<stdio.h>
int main()
{
	int max, min, size, i;
	
	printf("Give the size of the array : ");
	scanf("%d", &size);
	
	int arr[size];
	for(i=0; i<size; i++)
	{
		printf("Enter Element %d : ", i+1);
		scanf("%d",&arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	int *p = arr;
	for(i=0; i<size; i++)
	{
		if(*(p+i) > max)
		{
			max = *(p+i);
		}
		
		
		if(*(p+i) < min)
		{
			min = *(p+i);
		}
	}
	
	printf("Max element in the array : %d \nMin element in the array : %d", max, min);
	
	return 0;
	
}
