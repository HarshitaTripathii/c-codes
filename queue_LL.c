#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
struct node * start=NULL;
struct node * end=NULL;

void enque(int data)
{
    struct node*newN=(struct node*)malloc(sizeof(struct node));
    newN->data=data;
    newN->link=NULL;
    if(start==NULL)
    {
       start=end=newN;
    }
    else{
        end->link=newN;
        end=newN;
    }
}

void deque()
{
    if(start==NULL)
    {
        printf("queue is already empty\n");
        return;
    }
    else{
        struct node*temp=start;
        start=start->link;
        free(temp);
        temp=NULL;
    }
}

void top()
{
    if(start==NULL)
    {
        return;
    }
    else{
        printf("%d",start->data);
    }
}

void print()
{
    if(start==NULL)
    {
        printf("queue is already empty\n");
        return;
    }
    else{
        struct node *temp=start;
        while(temp!=NULL)
        {
            printf("%d\t", temp->data);
            temp=temp->link;
        }
    }
}

void main()
{
    enque(25);
    enque(35);
    enque(45);
    enque(55);
    top();
    printf("\n");
    // print();
    deque();
    deque();
    print();
    printf("\n");
    top();


}