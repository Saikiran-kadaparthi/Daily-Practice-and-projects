#include<stdio.h>

int sorted(int arr[], int size)
{
	if(size<=1)
	{
		return 1;
	}
	
	if(arr[size-1] < arr[size-2])
	{
		return 0;
	}
	
	return sorted(arr, size-1);

}

int main()
{
	int size;
	printf("Give The size of array : ");
	scanf("%d", &size);
	
	int arr[size];
	
	if(size <= 0)
	{
		printf("Invalid!");
		return 0;
	}
	else if(size==1)
	{
		printf("array is sorted.");
		return 0;
	}
	else
	{
		int i;
		for(i=0; i<size; i++)
		{
			printf("Enter array element %d : ", i+1);
			scanf("%d", &arr[i]);	
		}
	}
	
	if(sorted(arr, size))
		printf("array is sorted order");
	else
		printf("array is not sorted");
			
	return 0;
}

