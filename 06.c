#include <stdio.h>
#include <math.h>
struct polynomial {
	int Max_expo;    // expo : ����
	int coef[];	// coef : ���
};
int main()
{
	printf("�Է� �Ͻ� ���׽��� aX^n + bX^n-1 + ..... yX^1 + zX^0 �Դϴ�.\n");
	printf("***********************************************************\n");

	struct polynomial poly = { (3.3),(1,1) };

	printf("%d", poly.Max_expo);
	for (int i = (poly.Max_expo); i >= 0; i--)
	{
		printf("%d", (poly.coef)[i]);
		printf("\n");
	}

}