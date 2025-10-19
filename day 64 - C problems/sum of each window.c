//Sliding window Optimized to O(n)
//sum of each window

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

    printf("\nSum of window 1 is : %d", sum);

    for(i = k; i < size; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        printf("\nSum of window %d is : %d", i - k + 2, sum);
    }

    return 0;
}

