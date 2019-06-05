#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE	100

typedef char element;
typedef struct ArrayStack {

	element stck[MAX_STACK_SIZE];
	int top;
}Stack;

void push(Stack *S, element symbol) {
	if (S->top == MAX_STACK_SIZE) { return; }
	else {
		S->stck[++(S->top)] = symbol;
	}
}

element pop(Stack *S) {
	if (S->top == -1) { return (element)NULL; }
	else
		return S->stck[(S->top)--];
}

int testPair(Stack *S, char *E) {
	char symbol, open_pair;
	int len = strlen(E);
	S->top = -1;

	for (int i = 0; i < len; i++) {
		symbol = E[i];
		switch (symbol) {
		case '(':
		case '[':
		case '{':
			push(S, symbol); break;
		case ')':
		case ']':
		case '}':
			if (S->top == -1) return 0;
			else {
				open_pair = pop(S);
				if ((open_pair == '(' && symbol != ')') ||
					(open_pair == '[' && symbol != ']') ||
					(open_pair == '{' && symbol != '}'))
					return 0;
				else
					break;
			}
		}
	}
	if (S->top == -1)
		return 1;
	else return 0;
}

int main() {
	char *expression = "{(A+B)-3}*5+[{cos(x+y)+7}-1]*4";
	Stack *S = (Stack *)malloc(sizeof(Stack));

	printf("%s", expression);
	if (testPair(S, expression) == 1)
		printf("\n expression's OK");
	else
		printf("\n expression's not OK");
	printf("\n\n\n");

	return 0;
}