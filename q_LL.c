#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}queue;
queue*front=NULL;
queue*rear=NULL;
void enqueue(){
    int n,i;
    queue*ptr;
    if(ptr==NULL)
       printf("Overflow\n");
    else{
        printf("Enter the number of elements to be inserted:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            ptr=(queue*)malloc(sizeof(queue));
            printf("Enter the element to be inserted:");
            scanf("%d",&ptr->data);
            if(front==NULL){
                front=ptr;
                rear=ptr;
                rear->next=NULL;
            }
            else{
                rear->next=ptr;
                rear=ptr;
                ptr->next=NULL;
            }
        }
    }
}
void dequeue(){
    int n,i;
    queue*ptr;
    if(front==NULL)
       printf("Empty");
    else{
    printf("Enter the number of elements to be deleted:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("The deleted element is %d\n",front->data);
        ptr=front;
        front=front->next;
        free(ptr);}
    }
}
void display(){
    queue*ptr=NULL;
    if(rear==NULL)
       printf("empty");
    else{
        printf("Printing the elements of the queue\n");
        ptr=front;
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main(){
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}