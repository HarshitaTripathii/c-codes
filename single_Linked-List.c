#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void add_pos(struct node *head, int data1, int pos)
{
    struct node *ptr = NULL;
    ptr = head;
    struct node *ptr2 = NULL;
    ptr2 = (struct node *)malloc(sizeof(struct node *));

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
    ptr2->data = data1;
}
void delete_pos(struct node **head, int pos)
{
    struct node *ptr1 = *head;
    struct node *ptr2 = *head;
    if (*head == NULL)
    {
        printf("empty node)");
    }
    else if (pos == 1)
    {
        *head = ptr1->link;
        free(ptr1);
        ptr1 = NULL;
    }
    else
    {
        while (pos != 1)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->link;
            pos--;
        }
        ptr2->link = ptr1->link;
        free(ptr1);
        ptr1 = NULL;
    }
}
struct node *delete1(struct node *head)
{
    struct node *temp = NULL;
    temp = head;
    head = temp->link;
    free(temp);
    temp = NULL;
    return head;
}
void deleteEnd2Ptr(struct node *head)
{
    struct node *ptr = head;
    struct node *ptr1 = head;
    while ((ptr1->link != NULL))
    {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }
    ptr->link = NULL;
    free(ptr1);
    ptr1 = NULL;
}
void delelteEnd1Ptr(struct node *head)
{
    struct node *ptr = head;
    while (ptr->link->link != NULL)
    {
        ptr = ptr->link;
    }
    free(ptr->link);
    ptr->link = NULL;
}

void print(struct node *head)
{
    if (head == NULL)
    {
        printf("EMPTY NODE");
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
        }
    }
}
void insertionE(struct node *head)
{
    if (head == NULL)
    {
        printf("empty node");
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        struct node *newNode = (struct node *)malloc(sizeof(struct node *));
        newNode->data = 95;
        newNode->link = NULL;
        ptr->link = newNode;
    }
}
struct node *insertionB(struct node *head, int data)
{
    struct node *newN = NULL;
    newN = (struct node *)malloc(sizeof(struct node));
    newN->data = data;
    newN->link = NULL;
    newN->link = head;
    head = newN;
    return head;
}

int countNode(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("emplty node");
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        while ((ptr != NULL))
        {
            count++;
            ptr = ptr->link;
        }
        return count;
    }
}
struct node *deleteAll(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("empty node");
    }
    else
    {
        while (temp != NULL)
        {
            temp = temp->link;
            free(head);
            head = temp;
        }
    }
    return head;
}

void main()
{
    // node creation
    struct node *head = NULL;
    head = (struct node *)malloc((sizeof(struct node)));
    head->data = 65;
    head->link = NULL;

    // creating single linked list using another pointer current
    struct node *current = NULL;
    current = (struct node *)malloc((sizeof(struct node)));
    current->data = 75;
    current->link = NULL;
    head->link = current; // 2 nodes have been created
    // printf("%d\n", head->data);
    // printf("%d\n", current->data);

    // creating 3rd node
    current = (struct node *)malloc((sizeof(struct node)));
    current->data = 85;
    current->link = NULL;
    head->link->link = current;

    // counting no.of nodes present, expected output is 3.

    //   added new node at the end
    insertionE(head);
    head = insertionB(head, 55);
    // printf("%d\n", head->data);

    add_pos(head, 90, 4);
    head = delete1(head);
    //   deleteEnd2Ptr(head);
    delelteEnd1Ptr(head);
    delete_pos(&head, 3);
    // head = deleteAll(head);
    int countN = countNode(head);
    printf("%d\n", countN);

    //   printing all the data of nodes
    print(head);
}
