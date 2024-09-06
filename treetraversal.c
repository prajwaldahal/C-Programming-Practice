#include<stdio.h>
#include<stdlib.h>
struct tree{
	int info;
	struct tree *left,*right;
};
struct tree* maketree(struct tree *root,int el){
	if(root==NULL)
	{
		root=(struct tree*)malloc(sizeof(struct tree));
		root->info=el;
		root->left=NULL;
		root->right=NULL;
	}
	else if(root->info>el)
	{
		root->left=maketree(root->left,el);
	}
	else if((root)->info<el)
	{
		root->right=maketree(root->right,el);
	}
	else
	{
		printf("no duplicate data");
	}
	return root;
}
void inorder(struct tree *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%4d",root->info);
		inorder(root->right);
	}	
}
void preorder(struct tree *root)
{
	if (root != NULL)
	{
		printf("%4d",root->info);
		preorder(root->left);
		preorder(root->right);
	}	
}
void postorder(struct tree *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%4d",root->info);
	}	
}
int main()
{
	struct tree *root=NULL;
	int a;
	root=maketree(root,45);
	root=maketree(root,5);
	root=maketree(root,78);
	root=maketree(root,6);
	root=maketree(root,56);
	root=maketree(root,65);
	root=maketree(root,34);
	root=maketree(root,10);
	root=maketree(root,2);
	printf("inorder traversal: ");
	inorder(root);
	printf("\npreorder traversal: ");
	preorder(root);
	printf("\npostorder traversal: ");
	postorder(root);
	return 0;
}

