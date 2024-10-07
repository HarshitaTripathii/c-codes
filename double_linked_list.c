#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node * add_Node_to_empty(struct node*head, int data)
{
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;
   head=temp;
   return head;
}
struct node* addB(struct node*head, int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    //now  linking 
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
void insertionE(struct node*head,int data)
{
    struct node*ptr=head;
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newNode;
    newNode->prev=ptr;

}
void insertPos(struct node*head,int data,int pos)
{
    struct node*ptr=head;
    pos--;
    while(pos!=1)
    {
        ptr=ptr->next;
        pos--;
    }
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    newNode->next=ptr->next;
    ptr->next=newNode;
}
void print(struct node *head)
{
  struct node*ptr=head;
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}
void main()
{
    struct node* head=NULL;
    head=add_Node_to_empty(head,12);
    head=addB(head,24);
    insertionE(head,36);
    insertPos(head,48,2);
    insertPos(head,48,4);
    insertPos(head,1,2);
    print(head);
    // printf("%d\n", head->next->next->data);
}
