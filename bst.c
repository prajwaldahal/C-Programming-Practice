#include<stdio.h>
struct tree{
	int key;
	struct tree *left;
	struct tree *right;
};
struct tree* newNode(int item)
{
    struct tree* temp = (struct tree*)malloc(sizeof(struct tree));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct tree* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
struct tree* insert(struct tree* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    /* return the (unchanged) node pointer */
    return node;
}
int main()
{
	struct tree* root = NULL;
    root = insert(root, 8);
    root=insert(root, 10);
    root=insert(root, 3);
    root=insert(root, 1);
    root=insert(root, 6);
    root=insert(root, 4);
    root=insert(root, 7);
	root=insert(root,14);
	root=insert(root,13);
	inorder(root);	
}
