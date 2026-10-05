#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;
int size = 0;

// ENQUEUE operation
void ENQUEUE(int x)
{
    if (size == MAX)
    {
        printf("Queue is Full\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear = (rear + 1) % MAX;
    queue[rear] = x;
    size++;

    printf("%d inserted into queue\n", x);
}

// DEQUEUE operation
void DEQUEUE()
{
    if (size == 0)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("%d deleted from queue\n", queue[front]);

    front = (front + 1) % MAX;
    size--;

    if (size == 0)
    {
        front = -1;
        rear = -1;
    }
}

// FRONT operation
void FRONT()
{
    if (size == 0)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}

// DISPLAY operation
void DISPLAY()
{
    if (size == 0)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements: ");

    int i = front;

    for (int count = 0; count < size; count++)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    ENQUEUE(10);
    ENQUEUE(20);
    ENQUEUE(30);
    ENQUEUE(40);
    ENQUEUE(50);

    DISPLAY();

    FRONT();

    DEQUEUE();
    DEQUEUE();

    DISPLAY();

    ENQUEUE(60);
    ENQUEUE(70);

    DISPLAY();

    return 0;
}
