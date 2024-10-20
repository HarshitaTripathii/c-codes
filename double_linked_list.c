#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node *head=NULL;
void add_Node_to_empty(int data)
{
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;
   head=temp;
   
}
void addB(int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    //now  linking 
    temp->next=head;
    head->prev=temp;
    head=temp;
   
}
void insertionE(int data)
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
void insertPos(int data,int pos)
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
void deleteB(){
    struct node *ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
    ptr=NULL;
}
void deleteE(){
    struct node*ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
}
void deletePos(int pos)
{
    if(pos==1)
    {
        deleteB();
    }
    struct node *ptr1=head;
    // ptr1=head;
    // pos--;
    while(pos!=1)
    {
        ptr1=ptr1->next;
        pos--;
    }
    if(ptr1->next==NULL){
        deleteE();
    }
    else
    {
    struct node*ptr=NULL; 
    ptr=ptr1->prev; 
    // linking the end nodes
    ptr->next=ptr1->next;
    ptr1->next->prev=ptr;
    free(ptr1);
    ptr1=NULL;
    }
}
void print()
{
  struct node*ptr=head;
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}
void main()
{int element,i;
    for(i=0;i<5;i++)
    {
        if(head==NULL)
        {
            printf("enter first element\n");
            scanf("%d",&element);
            add_Node_to_empty(element);
        }
        
        printf("enter first element\n");
        scanf("%d",&element);
        insertionE(element);

        
    }
    // add_Node_to_empty(12);
    // addB(24);
    // insertionE(36);
    // // deleteB();
    // insertPos(48,2);
    // insertPos(98,4);
    // insertPos(1,2);
    // deleteE();
    deletePos(1);
    // printf("\n%d",head->data);

    print();
}
