#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedTerm {
	float coef;
	int expo;
	struct LinkedTerm *link;
} linkedTerm;

typedef struct LinkedPolynomial {	
	struct LinkedTerm *head;
}linkedPolynomial;

linkedPolynomial *createLinkedPolynomial(void) {
	linkedPolynomial *L;
	L = (linkedPolynomial *)malloc(sizeof(linkedPolynomial));
	L->head = NULL;
	return L;
}
void appendTerm(linkedPolynomial *L, float coef, int expo)
{
	linkedTerm *newTerm, *p;
	newTerm = (linkedTerm*)malloc(sizeof(linkedTerm));
	newTerm->coef = coef, newTerm->expo = expo, newTerm->link = NULL;

	if (L->head == NULL) {
		L->head = newTerm;
		return;
	}
	else {
		p = L->head;
		while (p->link != NULL)
			p = p->link;
		p->link = newTerm;
	}
}
void addPolynomial(linkedPolynomial *A, linkedPolynomial *B, linkedPolynomial *C) {
	linkedTerm *a = A->head;
	linkedTerm *b = B->head;
	float sum;

	while (a && b) {
		if (a->expo == b->expo) {
			sum = a->coef + b->coef;
			appendTerm(C, sum, a->expo);
			a = a->link; b = b->link;
		}
		else if (a->expo > b->expo) {
			appendTerm(C, a->coef, a->expo);
			a = a->link;
		}
		else
		{
			appendTerm(C, b->coef, a->expo);
			b = b->link;
		}
	}
}

void printPolynomial(linkedPolynomial *L) {
	linkedTerm *p;

	p = L->head;
	for (; p; p->link) {
		printf("%3.0fx^%d", p->coef, p->expo);
		if (p->link != NULL) printf(" + ");
	}
}

int main()
{
	linkedPolynomial *A, *B, *C;

	A = createLinkedPolynomial();
	B = createLinkedPolynomial();
	C = createLinkedPolynomial();

	appendTerm(A, 4, 3), appendTerm(A, 3, 2), appendTerm(A, 5, 1);
	printf("\n A(x) =");
	printPolynomial(A);
	printf("\n\n");

	appendTerm(B, 3, 4), appendTerm(B, 1, 3), appendTerm(B, 2, 1), appendTerm(B, 1, 0);
	printf("\n B(x) =");
    printPolynomial(B);
	printf("\n\n");

	//addPolynomial(A, B, C);
	//printf("\n C(x) =");
	//printPolynomial(C);

	return 0;
}
