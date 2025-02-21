#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *tail=NULL;
void createNode_InsertE(int data)
{
    if(tail==NULL)
    {
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->link=ptr; 
        tail=ptr;
    }
    
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=ptr;
    
}

void insertionB(int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=
}