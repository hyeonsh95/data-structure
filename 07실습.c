#include <stdio.h>
#include <string.h>

typedef struct Node {
	char data[4];
	struct Node *link;
} listNode;

typedef struct LinkedList {
	listNode *head;
}linkedList;

int main()
{
	listNode *curr;

	//���Ḯ��Ʈ �ν��Ͻ�(l1) �����ϱ�
	linkedList *l1 = (linkedList*)malloc(sizeof(linkedList));
	l1->head = NULL;

	//��� �ν��Ͻ�(n1) �����ϱ�
	listNode *n7 = (listNode *)malloc(sizeof(listNode));
	strcpy(n7->data, "��");
	n7->link = NULL;
	
	listNode *n6 = (listNode *)malloc(sizeof(listNode));
	strcpy(n6->data, "��");
	n6->link = n7;

	listNode *n5 = (listNode *)malloc(sizeof(listNode));
	strcpy(n5->data, "��");
	n5->link = n6;
	
	listNode *n4 = (listNode *)malloc(sizeof(listNode));
	strcpy(n4->data, "��");
	n4->link = n5;
	
	listNode *n3 = (listNode *)malloc(sizeof(listNode));
	strcpy(n3->data, "��");
	n3->link = n4;
	
	listNode *n2 = (listNode *)malloc(sizeof(listNode));
	strcpy(n2->data, "ȭ");
	n2->link = n3;
	
	listNode *n1 = (listNode *)malloc(sizeof(listNode));
	strcpy(n1->data, "��");
	n1->link = n2;

	// �󸮽�Ʈ(l1)�� ���(n1) ����(insert)�ϱ�
	l1->head = n1;

	//���Ḯ��Ʈ ���
	curr = l1->head;
	while (curr != NULL) {
		printf("���Ḯ��Ʈ : %p[%s, %p]\n", curr, curr->data, curr->link);
		curr = curr->link;
	}
	printf("\n");

	getchar();
	return 0;


}