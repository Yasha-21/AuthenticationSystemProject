#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// struct for binary tree
struct node
{
  char data[20];
  struct node* left;
  struct node* right;
};
// inorder traversal
void traversal(struct node* root)
{
  if (root == NULL) return;
  traversal(root->left);
  printf("%s ->", root->data);
  traversal(root->right);
}
// creating a new Node
struct node* newNode(char data[])
{
    // allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
    // assign data to this node
    strcpy(node->data, data);
    // initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}
struct node *insert(struct node *node, char data[])
{
  // return a new node if the tree is empty
  if (node == NULL) return newNode(data);
  // traverse to the right place and insert the node
  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);
  return node;
}
// function for login
int login(char Username[], char Password[])
{
    // declare variables for test
    char R_username[] = "admin";
    char R_password[] = "admin";
    // comparing user input with test
    if(strcmp(Username, R_username) == 0 && strcmp(Password, R_password) == 0)
        return 1; // successfull login 
    else
        return 0; // incorrect login
}

int main(void)
{
    
    return 0;
}