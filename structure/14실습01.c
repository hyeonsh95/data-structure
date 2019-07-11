// Tree Instance
#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct BtreeNode 
{
	//data, left, right field
	element data;
	struct BtreeNode *left;				// 자기참조구조체
	struct BtreeNode *right;
}bnode;

typedef struct Btree
{
	struct BtreeNode *root;
}btree;

btree* createBtreeInstance()
{
   btree* T1 = (btree*)malloc(sizeof(btree));
   T1->root = NULL;
   return T1;
}
bnode* createBnodeInstance(element item, bnode *leftNode, bnode *rightNode)
{
	bnode *node = (bnode*)malloc(sizeof(bnode));
	node->data = item;
	node->left = leftNode;
	node->right = rightNode;
	return node;
}

void inorder(bnode *root)
{
	if (root)
	{
		inorder(root->left);
		printf("%c ", root->data);
		inorder(root->right);
	}
}
void preorder(bnode *root)		// 전위순위
{
	if (root)
	{
		printf("%c ", root->data);
		inorder(root->left);
		inorder(root->right);
	}
}
void postorder(bnode *root)		//후위순위
{
	if (root)
	{
		inorder(root->left);
		inorder(root->right);
		printf("%c ", root->data);
	}
}
int main()
{
	btree *bt1;
	bt1 = createBtreeInstance();
	bnode *n1, *n2, *n0;
	n1 = createBnodeInstance('A', NULL, NULL);
	n2 = createBnodeInstance('B', NULL, NULL);
	n0 = createBnodeInstance('+',n1, n2);

	bt1->root = n0;
	printf("중위순위법 : ");
	inorder(bt1->root);
	printf("\n전위순위법 : ");
	preorder(bt1->root);
	printf("\n후위순위법 : ");
	postorder(bt1->root);
	/*
	bt1 = (btree*)malloc(sizeof(btree));
	bt1->root = NULL;				// Definition : empty tree
	
	bnode *n1, *n2, *n0;
	n1 = (bnode*)malloc(sizeof(bnode));
	n2 = (bnode*)malloc(sizeof(bnode));
	n0 = (bnode*)malloc(sizeof(bnode));
	n1->data = 'A';
	n1->left = NULL;	n1->right = NULL;

	n2->data = 'B';
	n2->left = NULL;	n2->right = NULL;

	n0->data = '+';
	n0->left =n1;	n0->right = n2;
	bt1->root = n0;
	

	//print
	printf("%c ", bt1->root->left->data);
	printf("%c ", bt1->root->data);
	printf("%c ", bt1->root->right->data);
	*/
	return 0;
}
