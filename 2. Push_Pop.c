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

//Push Element in Stack
void Push(struct Stack*s,int value){
    if(isFull(s)){
        printf("Oh! Stack Overflow\n Cannot Push %d to Stack",value);
    }else{
        s->top++;
        s->arr[s->top]=value; 
    }
}

//Remove Element from Stack
void Pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack Empty\n");
    }else{
        int value = s->arr[s->top]; 
        s->top--;
        printf("%d Popped",value);
    }
}
int main()
{
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack ->size = 10;
    stack->top=-1;
    stack ->arr = (int *)malloc(stack->size*sizeof(int));
    //PUSH
    Push(stack,56);
    Push(stack,6);
    Push(stack,6);
    Push(stack,56);
    Push(stack,5);
    Push(stack,56);
    Push(stack,5);
    Push(stack,15);
    //POP
    Pop(stack);
    return 0;
}
