#include<stdio.h>

int binarysearch(int arr[], int left, int right, int key)
{
	if(left>right)
	{
		return -1;
	}
	
	int mid = (left+right) / 2;
	
	if(arr[mid]==key)
	{
		return mid;
	}
	
	else if(arr[mid] > key)
	{
		return binarysearch(arr, left, mid - 1, key);
	}
	
	else
	{
		return binarysearch(arr, mid + 1, right, key);
	}
	
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
	
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter array element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int key;
	printf("Enter the element to search : ");
	scanf("%d", &key);
	
	int result = binarysearch(arr, 0, size-1, key);
	
	if(result== -1)
		printf("Element not found.");
	else
		printf("Element found at index %d", result);
		
	return 0;
}

