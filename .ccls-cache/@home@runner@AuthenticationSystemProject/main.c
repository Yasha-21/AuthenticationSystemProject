#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// struct for binary tree
struct node
{
  int item;
  struct node* left;
  struct node* right;
};
// norder traversal
void traversal(struct node* root)
{
  if (root == NULL) return;
  traversal(root->left);
  printf("%d ->", root->item);
  traversal(root->right);
}
// Create a new Node
struct node* createNode(value)
{
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
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