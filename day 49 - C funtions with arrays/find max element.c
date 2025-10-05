#include <stdio.h>

int max(int arr[], int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {65, 82, 91, 47, 76};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("maximun = %d\n", max(arr, size));


    return 0;
}
