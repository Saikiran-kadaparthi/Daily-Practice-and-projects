#include <stdio.h>
int flag(int arr[], int size) 
{
    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    if (flag(arr, size))
        printf("Array is sorted\n");
    else
        printf("Array is NOT sorted\n");

    return 0;
}
