#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct BtreeNode
{
	//data, left, right field
	element data;
	struct BtreeNode *left;				
	struct BtreeNode *right;
	int treeRight;			// thread에 추가됨
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
bnode* createBnodeInstance(element datasize, bnode *leftNode, bnode *rightNode, int treeRight)
{
	bnode *node = (bnode*)malloc(sizeof(bnode));
	node->data = datasize;
	node->left = leftNode;
	node->right = rightNode;
	node->treeRight = treeRight;
	return node;
}

bnode *findTreadSuccessor(bnode* N)
{
	bnode *FindN = N->right;
	if (FindN == NULL) return FindN;
	if (N->treeRight == 1) return FindN;
	while (FindN->left != NULL) FindN = FindN->left;
	return FindN;
}

void TreadInorder(btree *root)
{
	bnode *FindN;
	FindN = root;
	while (FindN->left) FindN = FindN->left;
	do {
		printf("%3c", FindN->data);
		FindN = findTreadSuccessor(FindN);
	} while (FindN);
}

int main()
{
	//(A*B-C/D) 수식 이진트리 만들기
	bnode *N07 = createBnodeInstance('D', NULL, NULL, 0);
	bnode *N06 = createBnodeInstance('C', NULL, NULL, 1);
	bnode *N05 = createBnodeInstance('B', NULL, NULL, 1);
	bnode *N04 = createBnodeInstance('A', NULL, NULL, 1);
	bnode *N03 = createBnodeInstance('/', N06, N07, 0);
	bnode *N02 = createBnodeInstance('*', N04, N05, 0);
	bnode *N01 = createBnodeInstance('-', N02, N03, 0);

	N04->right = N02;
	N05->right = N01;
	N06->right = N03;

	printf("\n스레드 이진트리의 중위순회 : ");
	TreadInorder(N01);
	printf("\n");
	return 0;
}
