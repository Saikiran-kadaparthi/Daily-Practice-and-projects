#include <stdio.h>
#define size 100

int queue[size];
int front = -1, rear = -1;

int enqueue(int value)
{
    if (rear == size - 1)
    {
        return -1;
    }
    if (front == -1)
    {
        front = 0;
    }

    queue[rear++] = value;

    return 0;
}

int dequeue()
{
    if (front == -1 || front > rear)
    {
        return -1;
    }

    return queue[front++];
}

int empty() 
{
    return (front == -1 || front > rear);
}

int peek()
{
    if (empty())
    {
        return -1;
    }
    
       return queue[front];
}

int display()
{
    if (empty())
    {
        return -1;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("dequeued: %d\n", dequeue());
    display();

    return 0;
}
