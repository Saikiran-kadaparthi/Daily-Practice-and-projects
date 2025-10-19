//minmum of each window

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

    int deque[size];
    int front = 0, rear = -1;

    for(i = 0; i < size; i++)
    {
        if(front <= rear && deque[front] <= i - k)
        {
            front++;
        }

        while(front <= rear && arr[deque[rear]] >= arr[i])
        {
            rear--;
        }

        rear++;
        deque[rear] = i;

        if(i >= k - 1)
        {
            printf("\nMinimum of window %d is : %d", i - k + 2, arr[deque[front]]);
        }
    }

    return 0;
}

