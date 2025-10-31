//Hashing

#include<stdio.h>

int main()
{
	int arr[10] = {42, 44, 89, 153, 66, 71, 100, 425, 87, 198};
	int arr2[10];
	int i;
	
	//Hashing
	for(i=0; i<10; i++)
	{
		int temp = arr[i] % 10;
		arr2[temp] = arr[i];
	}
	
	//Print hash Table.
	for(i=0; i<10; i++)
	{
		printf("%d  ", arr2[i]);
	}
	
	//searching key.
	
	int key = 42;
	int temp2 = key % 10;
	
	if (arr2[temp2] == key)
	{
		printf("\n\n Found %d at index %d", arr2[temp2], temp2);
	}
	else
	{
		printf("\n\nKey (%d) not Found!", key);
	}
	
	return 0;
}
