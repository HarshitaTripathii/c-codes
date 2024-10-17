#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node*top=NULL;
int isEmpty()
{
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data)
{
 struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->link=NULL;
    newNode->data=data;
    newNode->link=top;
    top=newNode;
}

int pop()
{
    struct node* temp=top;
    if (isEmpty()){
        printf("Stack Underflow\n");
    }
    else{
        int value;
        value=top->data;
        top=top->link;
        free(temp);
        temp=NULL;
        return value;
        }
}
void print()
{
    struct node *ptr=top;
    if(isEmpty())
    {
        printf("stack Underflow");
    }
    else{
        printf("elements of the stack are : \n");
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow");
    }
    else{
        return top->data;
    }
}
void main()
{
    int ch,i,n,e,item,top_value;
    while(1)
    {
        printf("PUSH : enter 1\n");
        printf("POP : enter 2\n");
        printf("PEEK : enter 3\n");
        printf("PRINT : enter 4\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            printf("enter no. of Elements to Push : ");
            scanf("%d", &n);
            for(i=0;i<n;i++)
            {
                printf("enter element no.  %d : ", i+1);
                scanf("%d", &e);
                push(e);
            }
            print();
            break;

            case 2:
            printf("enter no. of Elements to Pop : ");
            scanf("%d", &n);
            for(i=0;i<n;i++)
            {
                item=pop();
                printf("Element popped is : %d\n",item );
            }
            print();
            break;

            case 3:
            top_value=peek();
            printf("the top element is : %d\n",top_value);
            print();
            break;

            case 4:
            printf("elements of the stack are : \n");
            print();
            break;
         }
    }
}
