#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH operation
void PUSH(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = x;

    printf("%d pushed into stack\n", x);
}

// POP operation
void POP()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack\n", stack[top]);
    top--;
}

// PEEK operation
void PEEK()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

// DISPLAY operation
void DISPLAY()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    PUSH(50);

    DISPLAY();

    PEEK();

    POP();
    POP();

    DISPLAY();

    return 0;
}
