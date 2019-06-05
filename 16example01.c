// ���� Ž�� Ʈ���� ���� ���α׷� ����7-4
#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct BtreeNode
{
	//data, left, right field
	element data;
	struct treeNode *left;
	struct treeNode *right;
}Node;

typedef struct Btree
{
	struct BtreeNode *root;
}tree;

tree* createBtreeInstance()
{
	tree* T1 = (tree*)malloc(sizeof(tree));
	T1->root = NULL;
	return T1;
}
Node* createBnodeInstance(element datasize, Node *leftNode, Node *rightNode, int treeRight)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = datasize;
	node->left = leftNode;
	node->right = rightNode;
	return node;
}
// searchBST : ���� Ž��Ʈ������ Ű���� findW�� ����� ��ġ�� Ž��.
Node* searchBST(Node* root, element findW)
{
	Node *node;
	node = root;
	while (node != NULL)
	{
		if (findW < (node->data))  node = node->left;
		else if (findW == node->data) return node;
		else node = node->right;
	}
	printf("\n ã���ô� data�� �����ϴ�!");
	return node;
}
// insertNode : ������ node�� ����Ű�� ���� ���Ͽ� ��� �� �����ϴ� ����
Node* insertNode(Node* locateND, element x)
{
	Node* newnode;
	if (locateND == NULL)
	{
		newnode = (Node*)malloc(sizeof(Node));
		newnode->data = x;
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
	}
	else if (x < locateND->data) locateND->left = insertNode(locateND->left, x);
	else if (x > locateND->data) locateND->right = insertNode(locateND->right, x);
	else if (x == locateND->data) printf("\n�̹� ����Ű�� �����մϴ�\n");

	return locateND;
}
// ��Ʈ ������ Ž���Ͽ� Ű���� ���� ��带 ã�� �����ϴ� ����
void deleteNode(Node*root, element key)
{
	Node* parent, *locate, *succ, *succ_parent, *child;
	parent = NULL;
	locate = root;
	while ((locate != NULL) && (locate->data != key))
	{
		//������ ����� ��ġ Ž��
		parent = locate;
		if (key < locate->data) locate = locate->left;
		else  locate = locate->right;
	}
	// ������ ��尡 ���°��
	if (locate == NULL) {
		printf("\n ã�� Ű�� ����Ʈ���� �����ϴ�!");
		return;
	}
	//������ ��尡 �ܸ� ����ΰ��
	if ((locate->left == NULL) && (locate->right == NULL) {
		if (parent != NULL) {
			if (parent->left == parent) parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	
}

int main()
{
	
	return 0;
}

