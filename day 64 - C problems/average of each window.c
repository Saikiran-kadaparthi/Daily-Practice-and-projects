//average of each window

#include <stdio.h>

int main()
{
    int i, size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size];

    for(i = 1; i <= size; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &arr[i - 1]);
    }

    int k;
    printf("Enter window Size : ");
    scanf("%d", &k);

    int sum = 0;

    for(i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    printf("\nAverage of window 1 is : %.2f", (float)sum / k);

    for(i = k; i < size; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        printf("\nAverage of window %d is : %.2f", i - k + 2, (float)sum / k);
    }

    return 0;
}

