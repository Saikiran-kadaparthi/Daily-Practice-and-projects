//1. Two Sum

#include <stdio.h>

int twosum(int arr[], int target, int size)
{
    int i, j;
    for (i = 0; i<size-1; i++)
    {
        for (j=i+1; j<size; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("\nBelow indices add up to given target : \n%d , %d", i, j);
                return -1;
            }
        }
    }
    
    printf("No pairs found!!");
}

int main()
{

    int size, i, target;
    
    printf("Give array size : ");
    scanf("%d", &size);
    
    int arr[size];
    for(i=0; i<size; i++)
    {
        printf("Give %d element : ", i);
        scanf("%d", &arr[i]);
        
    }
    
    printf("\nGive a target element : ");
    scanf("%d", &target);
    
    
    twosum(arr, target, size);
    
    
    
    return 0;
}
