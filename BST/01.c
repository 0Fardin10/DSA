#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*left;
  struct Node*right;
};
struct Node*newNode(int data){
  struct Node*node=(struct Node*)malloc(sizeof(struct Node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
return node;
};
void in_order(struct Node*node){
  if (node==NULL)return;
  in_order(node->left);
  printf("%d\n",node->data);
  in_order(node->right);
};
int main(){
struct Node *root = newNode(10);
  root->left= newNode(20);
  root->right=newNode(30);
 root->left->left=newNode(40);
  root->left->right=newNode(50);
  printf("Traversal of a b t: \n");
 in_order(root);
  return 0;
}
