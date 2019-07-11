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

	//연결리스트 인스턴스(l1) 생성하기
	linkedList *l1 = (linkedList*)malloc(sizeof(linkedList));
	l1->head = NULL;

	//노드 인스턴스(n1) 생성하기
	listNode *n7 = (listNode *)malloc(sizeof(listNode));
	strcpy(n7->data, "일");
	n7->link = NULL;
	
	listNode *n6 = (listNode *)malloc(sizeof(listNode));
	strcpy(n6->data, "토");
	n6->link = n7;

	listNode *n5 = (listNode *)malloc(sizeof(listNode));
	strcpy(n5->data, "금");
	n5->link = n6;
	
	listNode *n4 = (listNode *)malloc(sizeof(listNode));
	strcpy(n4->data, "목");
	n4->link = n5;
	
	listNode *n3 = (listNode *)malloc(sizeof(listNode));
	strcpy(n3->data, "수");
	n3->link = n4;
	
	listNode *n2 = (listNode *)malloc(sizeof(listNode));
	strcpy(n2->data, "화");
	n2->link = n3;
	
	listNode *n1 = (listNode *)malloc(sizeof(listNode));
	strcpy(n1->data, "월");
	n1->link = n2;

	// 빈리스트(l1)에 노드(n1) 삽입(insert)하기
	l1->head = n1;

	//연결리스트 출력
	curr = l1->head;
	while (curr != NULL) {
		printf("연결리스트 : %p[%s, %p]\n", curr, curr->data, curr->link);
		curr = curr->link;
	}
	printf("\n");

	getchar();
	return 0;


}
