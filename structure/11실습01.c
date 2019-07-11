//¿¬°á¸®½ºÆ®_°ýÈ£°Ë»ç.c
#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef char element;
typedef struct LinkedNode {
	element data;
	struct LinkedNode *link;
}StackNode;

typedef struct LinkedStack {
	StackNode *top;
}Stack;

Stack *createLinkedStack() {
	Stack *S;
	S = (Stack*)malloc(sizeof(Stack));
	S->top = NULL;
	return S;
}

StackNode *createStackNode(element data) {
	StackNode *N;
	N = (StackNode *)malloc(sizeof(StackNode));
	N->data = data;
	N->link = NULL;
	return N;
}

void push(Stack *S, element symbol) {				 // insertFirstNode
	StackNode *newN;
	newN = createStackNode(symbol);
	newN->link = S->top;
	S->top = newN;
}

element pop(Stack *S) {								 // deleteFirstNode
	StackNode *tempN;
	if (S->top == NULL) {
		return (element)NULL;
	}
	else {
		tempN = S->top;
		S->top = S->top->link;
		return tempN->data;
	}
}

int testPair(Stack *S, char *E) {
	char symbol, open_pair;
	int i, len = strlen(E);

	for (i = 0; i < len; i++) {
		symbol = E[i];
		switch (symbol) {
		case '(':
		case '[':
		case '{':
			push(S, symbol);
			break;
		case ')':
		case ']':
		case '}':
			if (S->top == NULL) return 0;
			else {
				open_pair = pop(S);
				if ((open_pair == '(' && symbol != ')') || (open_pair == '[' && symbol != ']') || (open_pair == '{' && symbol != '}'))
					return 0;
				else
					break;
			}
		}
	}
	if (S->top == NULL)
		return 1;
	else
		return 0;
}

int main() {
	char *expression = "{(A+B)-3}*5+[{cos(x+y)+7}-1]*4";
	Stack *S = createLinkedStack();

	printf("%s", expression);
	if (testPair(S, expression) == 1)
		printf("\nExpression's OK");
	else
		printf("\nExpression's Not OK");
	printf("\n\n\n");
	return 0;
}
