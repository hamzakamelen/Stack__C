#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

// Checking Stack is Empty?
int isEmpty(struct Stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Checking Stack is Full?
int isFull(struct Stack *s)
{
    if (s->top == s->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct Stack *stack;
    stack->size = 80;
    stack->top = -1; //(-1)Stack Empty hai
    stack->arr = (int *)malloc(stack->size * sizeof(int));

    // Pushing Element Manually
    stack->arr[0] = 7;
    stack->top++;

    // Checking Empty And Full Function
    if (isEmpty(stack))
    {
        printf("Stack is Empty");
    }
    else if (isFull(stack))
    {
        printf("Stack is Full");
    }
    else
    {
        printf("Stack is Not Empty Not Full");
    }

    return 0;
}
