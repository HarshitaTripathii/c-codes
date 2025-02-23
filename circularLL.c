#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *tail=NULL;

void AddtoEmpty(int data)
{
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=ptr;
    tail=ptr;
}
void insertEnd(int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=tail->link;
    tail->link=ptr;
    tail=ptr;
    
}
void insertionBegin(int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=tail->link;
    tail->link=ptr;
}
void insertionAtPos(int data,int pos)
{
    struct node*newN=(struct node *)malloc(sizeof(struct node));
    newN->data=data;
    newN->link=NULL;

    struct node *ptr=NULL;
    ptr=tail->link;
    pos--;
    while(pos!=1)
    {
       ptr=ptr->link;
       pos--;
    }

    if(ptr==tail)
    {
        newN->link=tail->link;
        tail->link=newN;
        tail=newN;
    }
    else{
        newN->link=ptr->link;
        ptr->link=newN;
    }
}

void deletionBegin()
{
    struct node*ptr=NULL;
    ptr=tail->link;
    tail->link=ptr->link;
    free(ptr);
    ptr=NULL;
}

void deletionEnd()
{
    struct node*ptr=NULL;
    ptr=tail->link;
    while(ptr->link!=tail)
    {
        ptr=ptr->link;
    }
    ptr->link=tail->link;
    free(tail);
    tail=ptr;
}

void deletionAtPos(int pos)
{
    struct node*ptr=NULL;
    struct node*ptr2=NULL;  // node to be deleted
    ptr=tail->link;
    pos--;
    while(pos!=1)
    {
     ptr=ptr->link;
     pos--;
    }
    ptr2=ptr->link;  // node to be deleted
    ptr->link=ptr2->link;
    free(ptr2);
    ptr2=NULL;
}
void print()
{
    struct node *ptr=NULL;
    ptr=tail->link;
    do{
        printf("%d\n", ptr->data);
        ptr=ptr->link;

    }
    while(ptr!=tail->link);
}
void main()
{
    AddtoEmpty(75);
    insertionBegin(70);
    insertEnd(80);
    deletionBegin();
    insertionBegin(70);
    deletionEnd();
    print();
}