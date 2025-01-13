
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *Moving_root = NULL;
// void insertion(int data, struct node * mroot)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     if (root == NULL)
//     {
//         printf("ceating Root node : Data : %d", data);
//         ptr->left = NULL;
//         ptr->right = NULL;
//         ptr->data = data;
//         root = ptr;
//         Moving_root = root;
//     }
//     else
//     {
//         ptr->left = NULL;
//         ptr->right = NULL;
//         ptr->data = data;

//         if (Moving_root->left == NULL)
//         {
//             Moving_root->left = ptr;
//         }
//         else
//         {
//             Moving_root->right = ptr;
//         }
//         if (Moving_root->left != NULL && Moving_root->right != NULL)
//         {
//             Moving_root = ptr->left;
//         }
//     }
// }
void linkage(struct node * root_Node, struct node *left_Node, struct node *right_Node)
{
   root_Node->left=left_Node;
   root_Node->right=root_Node;
}
struct node *create(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->data = data;
    return ptr;
}

void main()
{
    struct node* root=create(2);
    struct node* l1=create(1);
    struct node* r1=create(4);
    struct node* l2=create(11);
    struct node* lr2=create(12);
    struct node* r2=create(3);

    // linking node
    linkage(root,l1,r1);
    linkage(l1,l2,lr2);
    linkage(r1,NULL,r2 );

}
