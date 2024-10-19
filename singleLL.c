#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;

void insertion(int data)
{
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->link = NULL;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->link = NULL;
        ptr->link = newNode;
    }
}
void deletion()
{
    struct node *ptr1 = head;
    struct node *ptr2 = head;
    while (ptr1->link != NULL)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->link;
    }
    ptr2->link = NULL;
    free(ptr1);
    ptr1 = NULL;
}

void print()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
void reverse()
{
    struct node *temp = NULL;
    struct node *temp2 = head->link;
    while (temp2 != NULL)
    {
        head->link = temp;
        temp = head;
        head = temp2;
        temp2 = temp2->link;
    }
    head->link = temp;
}
void main()
{
    insertion(45);
    insertion(55);
    insertion(65);
    print();
    printf("head data is %d\n", head->data);
    printf("reversed linked list is below\n");
    reverse();
    print();
    printf("head data is %d\n", head->data);
}
