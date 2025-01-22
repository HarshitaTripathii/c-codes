#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *p1 = NULL;
// void PreOrder(struct node *root);
// struct node *root = NULL;
// void insertion(int data, int choice)
// {
//     if (root == NULL)
//     {
//         root->left = NULL;
//         root->right = NULL;
//         root->data = data;
//     }
//     else if (choice == 1)
//     {
//     }
// }

struct node *create(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->data = data;
    return ptr;
};
void PreOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
};

void PostOrder(struct node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d\t", root->data);
    }
};

void Inorder(struct node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d\t", root->data);
        Inorder(root->right);
    }
}

int searching(struct node *root, int item)
{
    if (root != NULL)
    {
        if (root->data == item)
        {
            printf("element found\n");
            return 1;
        }
        else
        {
            if (item > root->data)
            {
                searching(root->right, item);
            }
            else
            {
                searching(root->left, item);
            }
        }
    }
    else
    {
        printf("elemnt not found\n");
        return 0;
    }
};

void insertion(struct node *root, int item)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (item == root->data)
        {
            printf("elemtn cant be inserted\n");
            return;
        }
        else if (item > root->data)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    struct node *newN = create(item);
    if (item > prev->data)
    {
        prev->right = newN;
    }
    else
    {
        prev->left = newN;
    }
}
void searchIter(struct node *root, int item)
{
    while (root != NULL)
    {
        if (item == root->data)
        {
            printf("elemnt found\n");
            return;
        }
        else if (item > root->data)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    printf("elemnt not found\n");
}
struct node *inorderPred(struct node *root_Node)
{
    if (root_Node == NULL || root_Node->left == NULL)
    {
        return NULL;
    }
    root_Node = root_Node->left;
    while (root_Node->right != NULL)
    {
        root_Node = root_Node->right;
    }
    return root_Node;
}

struct node *deletion(struct node *root_Node, int key)
{
    if (root_Node == NULL)
    {
        return NULL;
    }
    if (key > root_Node->data)
    {
        root_Node->right=deletion(root_Node->right, key);
    }
    else if (key < root_Node->data)
    {
        root_Node->left=deletion(root_Node->left, key);
    }
    // if no above is true, it means root is the key to be deleted
    else
    {
        if (root_Node->left == NULL && root_Node->right == NULL)
        {
            free(root_Node);
            return NULL;
        }
        else if (root_Node->left == NULL)
        {
            struct node *temp = root_Node->right;
            free(root_Node);
            return temp;
        }
        else if (root_Node->right == NULL)
        {
            struct node *temp = root_Node->left;
            free(root_Node);
            return temp;
        }

        else
        {
            struct node *inPre;
            inPre = inorderPred(root_Node);
            root_Node->data = inPre->data;
            root_Node->left=deletion(root_Node->left, inPre->data);
        }
    }
    return root_Node;
}

void main()
{
    int i;
    // printf("enter item\n");
    // scanf("%d", &i);
    // insertion(1, ch);
    // creating nodes using fxn
    struct node *p1 = create(55);
    struct node *p2 = create(32);
    struct node *p3 = create(61);
    struct node *p4 = create(22);
    struct node *p5 = create(41);

    // linking all these 5 nodes
    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;

    // printing in pre order
    // here p1 is root node
    // PreOrder(p1);
    // printf("post order is \n ");
    // PostOrder(p1);
    // printf("In order is \n ");
    // Inorder(p1);
    // searching(p1,i);
    // searchIter(p1,8);
    // searchIter(p1,7);
    insertion(p1, 56);
    Inorder(p1);
    struct node * node=deletion(p1, 41);
    printf("\n");
    Inorder(p1);
}