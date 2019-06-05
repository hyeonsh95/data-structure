#include <stdio.h>
#include <stdlib.h>
#define MAX_DEGREE 100
#define MAX(a,b)  ((a>b)?a:b)
#define COMPARE(x, y) ((x>y)?+1:(x==y)?0:-1)

typedef struct Polynomial {
	int degree;
	double coef[MAX_DEGREE];
}polynomial;

polynomial addPolynomial(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree, C_degree = MAX(A.degree, B.degree);
	while (A_index <= A.degree && B_index <= B.degree) {
		// case 1: 다항식 A의 지수 >  다항식 B의 지수
		if (COMPARE(A_degree, B_degree)>0)
		{	
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}
		else if (COMPARE(A_degree, B_degree)==0)
		{
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--;
			B_degree--;
		}
		else 
		{
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}
	}
	return C;
}
void PrintPolynomial(polynomial P) {
	int degree;
	degree = P.degree;

	for (int i = 0; i <= P.degree; i++)                                                                                                                                                                                                      
	{
		printf("%3.1fx^%d ", P.coef[i], degree--);
		if (i < P.degree) printf("+ ");
	}
	printf("\n");
}
int main()
{
	polynomial A = { 3,{4,3,5,0} };
	polynomial B = { 4, {3,1,0,2,1} };

	polynomial C;
	C = addPolynomial(A, B), C.degree = MAX(A.degree, B.degree);

	printf("\n A(x) = "); PrintPolynomial(A);
	printf("\n B(x) = "); PrintPolynomial(B);
	printf("\n C(x) = "); PrintPolynomial(C);
	return 0;
}