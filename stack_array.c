#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if(top==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data)
{
    if(isFull())
    {
        printf("stack Overflow\n");
        return;
    }
    else{
        top=top+1;
        stack_arr[top]=data;
    }
    
}
int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    else{
        int element;
        element=stack_arr[top];
        top=top-1;
        return element;
    }
    
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1); 
    }
    else
    {
        return stack_arr[top];
    }
    
}
void print()
{
    if (isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        printf(" Stack elements are :\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack_arr[i] );
        }
    }
}
void main()
{
    //int stack_arr[MAX];

while(1)
{
   int n,e,ch,i,value;
    printf("enter 1 to PUSH\n enter 2 to POP\n enter 3 to print all elements\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("enter number of elements to be inserted \n");
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
            printf("enter element %d\n",i+1);
            scanf("%d",&e);
            push(e); 
        }
        print();
        printf("the top element is %d\n",peek());
        break;

        case 2:
        printf("enter number of elements to pop\n");
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            value=pop();
            printf("Element Popped is %d\n", value);
        }
        print();
        printf("the top element is %d\n",peek());
        break;
    }
}}
