#include<stdio.h>
int MAXSIZE = 4;
int stack[4];
int top = -1;

int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}
int push(int data)
{
    if(!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("r jaigai nai, ki push korbo");
    }
}
int pop()
{
    int data;
    if(!isempty())
    {
        data = stack[top];
        top = top -1;
        return 0;
    }
    else
    {
        printf("nai kisu ki pop korbo");
    }
}
int peek()
{
    return stack[top];
}
int main()
{
    push(44);
    printf("%d",peek());
    printf("\n");
        push(33);
    printf("%d",peek());
    printf("\n");
        push(22);
    printf("%d",peek());
    printf("\n");

    while(!isempty)
    {
        int data = pop();
    }
    printf("%d", isfull());

    return 0;
}
