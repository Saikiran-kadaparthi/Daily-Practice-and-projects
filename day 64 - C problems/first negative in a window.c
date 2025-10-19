//first negative

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

    int queue[size];
    int front = 0, rear = -1;

    for(i = 0; i < k; i++)
    {
        if(arr[i] < 0)
        {
            rear++;
            queue[rear] = i;
        }
    }

    if(front <= rear)
    {
        printf("\nFirst negative of window 1 is : %d", arr[queue[front]]);
    }
    else
    {
        printf("\nFirst negative of window 1 is : 0");
    }

    for(i = k; i < size; i++)
    {
        if(front <= rear && queue[front] <= i - k)
        {
            front++;
        }

        if(arr[i] < 0)
        {
            rear++;
            queue[rear] = i;
        }

        if(front <= rear)
        {
            printf("\nFirst negative of window %d is : %d", i - k + 2, arr[queue[front]]);
        }
        else
        {
            printf("\nFirst negative of window %d is : 0", i - k + 2);
        }
    }

    return 0;
}

