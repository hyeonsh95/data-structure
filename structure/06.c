#include <stdio.h>
#include <math.h>
struct polynomial {
	int Max_expo;    // expo : 지수
	int coef[];	// coef : 계수
};
int main()
{
	printf("입력 하실 다항식은 aX^n + bX^n-1 + ..... yX^1 + zX^0 입니다.\n");
	printf("***********************************************************\n");

	struct polynomial poly = { (3.3),(1,1) };

	printf("%d", poly.Max_expo);
	for (int i = (poly.Max_expo); i >= 0; i--)
	{
		printf("%d", (poly.coef)[i]);
		printf("\n");
	}

}
