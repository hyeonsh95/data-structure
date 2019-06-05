#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedEntry {
	int i_Row, j_Col, entryValue;
	struct LinkedEntry *nextEntry;
}linkedEntry;

typedef struct LinkedMatrix {
	int n_Row, n_Col, n_NZero;
	struct LinkedEntry *head;
}linkedMatrix;

linkedMatrix *createMatrixInstance(int nR, int nC)
{
	linkedMatrix *mat1;
	mat1 = (linkedMatrix *)malloc(sizeof(linkedMatrix));
	mat1->n_Row = nR, mat1->n_Col = nC, mat1->n_NZero = 0;
	mat1->head = (linkedEntry *)NULL;
	return mat1;
}

linkedEntry *createEntryInstance(int r, int c, int v)
{
	linkedEntry *entry1;
	entry1 = (linkedEntry *)malloc(sizeof(linkedEntry));
	entry1->i_Row = r, entry1->j_Col = c, entry1->entryValue = v;
	entry1->nextEntry = (linkedEntry *)NULL;
	return entry1;
}

void insertLastEntry(linkedMatrix *M, linkedEntry *E) {
	linkedEntry *temp;

	if (M->head == NULL) M->head = E;
	else {
		temp = M->head;
		while (temp->nextEntry != NULL) temp = temp->nextEntry;
		temp->nextEntry = E;
	}
	M->n_NZero++;
}

void printMatrix(linkedMatrix *M) {
	linkedEntry *temp;
	int i = 0;

	printf("매트릭스 : %d %d %d\n", M->n_Row, M->n_Col, M->n_NZero);
	temp = M->head;
	for (; temp;) {
		printf("엔트리 %d %d %d %d\n", ++i, temp->i_Row, temp->j_Col, temp->entryValue);
		temp = temp->nextEntry;
	}
	printf("\n");
}

int main()
{
	linkedMatrix *matrixInstance1;
	linkedEntry *entryInstance1, *entryInstance2;

	matrixInstance1 = createMatrixInstance(3, 3);

	entryInstance1 = createEntryInstance(0, 2, 2);
	insertLastEntry(matrixInstance1, entryInstance1);
	printMatrix(matrixInstance1);
	printf("\n");

	entryInstance2 = createEntryInstance(2, 0, 23);
	insertLastEntry(matrixInstance1, entryInstance2);
	printMatrix(matrixInstance1);
	printf("\n");
	
	getchar();
	return 0;
}