#include <stdio.h>
#include <time.h>
#define  MAX_SIZE	20000
#define  ITERATIONS 30	// irerations : 반복
#define	 SWAP(x,y,t)	((t)=(x), (x)=(y), (y)=(t))
void sort(int ar[], int n);
int main()
{
	int list[MAX_SIZE];
	int timelist[] = { 0,10,20,30,40,50,60,70,80,90,
					100,200,300,400,500,600,700,800,900,
					1000,2000,3000,4000,5000,6000,7000,8000,9000,
					10000,20000 };
	clock_t start, stop;		// 이거 뭐지 clock_t
	double duration;
		
	printf("     n		 time\n");
	for (int i = 0; i < ITERATIONS; i++) {
		for (int j = 0; j < timelist[i]; j++)
			list[j] = timelist[i] - j;
		start = clock();
		sort(list, timelist[i]);
		stop = clock();
				
		duration = ((double)(stop - start)) / CLK_TCK;		// 초당 틱톡수 : CLK_TCK
		printf("%6d		%10.7lf\n", timelist[i], duration);
	}
	getchar();
	return 0;
}
void sort(int ar[], int n) {
	int tmp, min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++)
			if (ar[j] < ar[min])
				min = j;
		SWAP(ar[i], ar[min], tmp);
	}
}
