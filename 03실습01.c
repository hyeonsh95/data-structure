#include <stdio.h>
int getLeng(int *ar,int size) {
	int leng;
	leng = sizeof(*ar)*size;
	return leng;
}
int getMax(int ar[], int size)
{
	int temp = ar[0];
	for (int i = 1; i < size; i++) {
		if (temp < ar[i])
			temp = ar[i];
	}
	return temp;
}
int getMin(int ar[], int size)
{
	int temp = ar[0];
	for (int i = 1; i < size; i++) {
		if (temp > ar[i])
			temp = ar[i];
	}
	return temp;
}
int main()
{
	int score[10] = {99,89,98,97,94,97,96,79,89};
	int max, min, length;
	max = getMax(score,10);
	min = getMin(score,10);
	length = getLeng(score,10);
	printf("ÃÖ´ë : %d\n  ÃÖ¼Ò: %d\n  ±æÀÌ: %d\n", max, min, length);
}
