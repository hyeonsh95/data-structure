// 이진 탐색 트리의 연산 프로그램 예제7-4
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
// searchBST : 이진 탐색트리에서 키값이 findW인 노드의 위치를 탐색.
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
	printf("\n 찾으시는 data가 없습니다!");
	return node;
}
// insertNode : 포인터 node가 가리키는 노드와 비교하여 노드 를 삽입하는 연산
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
	else if (x == locateND->data) printf("\n이미 같은키가 존재합니다\n");

	return locateND;
}
// 루트 노드부터 탐색하여 키값과 같은 노드를 찾아 삭제하는 연산
void deleteNode(Node*root, element key)
{
	Node* parent, *locate, *succ, *succ_parent, *child;
	parent = NULL;
	locate = root;
	while ((locate != NULL) && (locate->data != key))
	{
		//삭제할 노드의 위치 탐색
		parent = locate;
		if (key < locate->data) locate = locate->left;
		else  locate = locate->right;
	}
	// 삭제할 노드가 없는경우
	if (locate == NULL) {
		printf("\n 찾는 키가 이진트리에 없습니다!");
		return;
	}
	//삭제할 노드가 단말 노드인경우
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

