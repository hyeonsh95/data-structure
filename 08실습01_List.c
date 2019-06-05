#include <stdio.h>
#include <string.h>
typedef struct Node {
	char data[4];
	struct Node *link;
}linkedNode;

typedef struct LinkedList {
	linkedNode *head;
}linkedList;

linkedList *createLinkedList() {
	linkedList *listInstance;
	listInstance = (linkedList *)malloc(sizeof(linkedList));
	listInstance->head = NULL;

	return listInstance;
}

linkedNode *createListNode(char s[]) {
	linkedNode *nodeInstance;
	nodeInstance = (linkedNode *)malloc(sizeof(linkedNode));
	strcpy_s(nodeInstance->data, (strlen(s) + 1), s);
	nodeInstance->link = NULL;

	return nodeInstance;
}

void insertFirstNode(linkedList *L, char s[]) {}

void insertLastNode(linkedList *L, char s[]) {
	linkedNode *lastN;
	linkedNode *n = (linkedNode *)malloc(sizeof(linkedNode));
	strcpy_s(n->data, (strlen(s) + 1), s);
	n->link = NULL;

	if (L->head == NULL)
		L->head = n;
	else {
		lastN = L->head;
		while (lastN->link != NULL) lastN = lastN->link;
		lastN->link = n;
	}

	void deleteFirstNode(linkedList *L) {}

	void deleteLastNode(linkedList *L) {
		linkedNode *preN, *lastN;

		if (L->head == NULL)
			printf("Empty List\n");
		else if (L->head->link == NULL)
			L->head = NULL;
		else {
			preN = L->head, lastN = preN->link;
			while (lastN->link != NULL)
				preN = preN->link, lastN = preN->link;
			preN->link = NULL;
		}
	}
}

void printLinkedList(linkedList *L) {
	linkedNode *curr;
	curr = L->head;
	while (curr != NULL) {
		printf("연결리스트 : %p[%s, %p]\n", curr, curr->data, curr->link);
		curr = curr->link;
	}
	printf("\n");
}

int main() {
	//연결리스트 인스턴스(list1) 생성하기
	linkedList *list1 = createLinkedList();

	//리스트(list1)에 노드 (n1,n2,n3)삽입하기
	insertLastNode(list1, "월");
	insertLastNode(list1, "화");
	insertLastNode(list1, "수");
	insertLastNode(list1, "목");
	insertLastNode(list1, "금");
	insertLastNode(list1, "토");
	insertLastNode(list1, "일");

	printLinkedList(list1);

	//연결리스트 삭제하기->출력하기
	for (; list1->head;) {
		deleteLastNode(list1);
		printLinkedList(list1);
	}

	getchar();
	return 0;
}