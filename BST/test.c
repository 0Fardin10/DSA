#include <stdio.h>
#include <stdlib.h>
struct node {
 int data; //node will store some data
 struct node *right_child; // right child
 struct node *left_child; // left child
};
//function to create a node
struct node* new_node(int x) {
 struct node *temp;
 temp = malloc(sizeof(struct node));
 temp -> data = x;
 temp -> left_child = NULL;
 temp -> right_child = NULL;
 return temp;
}
// insertion
struct node* insert(struct node * root, int x) {
 //searching for the place to insert
 if (root == NULL)
 return new_node(x);
 else if (x > root -> data) // x is greater. Should be inserted
to the right
 root -> right_child = insert(root -> right_child, x);
 else // x is smaller and should be inserted to left
 root -> left_child = insert(root -> left_child, x);
Left_chilld Data Right_chilld
node
Null x Null
*temp
v
 return root;
}
// Inorder Traversal
void inorder(struct node *root) {
 if (root != NULL) // checking if the root is not null
 {
 inorder(root -> left_child); // traversing left child
 printf(" %d ", root -> data); // printing data at root
 inorder(root -> right_child); // traversing right child
 }
}
int main() {
 struct node *root;
 root = new_node(45);
 insert(root, 68);
 insert(root, 35);
 insert(root, 42);
 insert(root, 15);
 insert(root, 64);
 insert(root, 78);
printf("Binary search tree after insertion: \n");
 inorder(root);
 printf("\n");
 return 0;
}