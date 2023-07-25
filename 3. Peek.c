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

//Peek (Find VALUE OF GIVEN POSITION)
void Peek(struct Stack*s,int position){
    int arrIndex = s->top-position+1;
    if(arrIndex<0){
        printf("Position Not Valid");
    }else{
        printf("%d is at %d postion\n",s->arr[arrIndex],position);
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
    Push(stack,51);
    Push(stack,60);
    Push(stack,50);
    Push(stack,61);
    //POP
    // Pop(stack);

    //PEEK
    // Peek(stack,3);

    //Print Whole StaCK USING peeK
    for(int i=1;i<=stack->top+1;i++){
        Peek(stack,i);
    }
    return 0;
}
