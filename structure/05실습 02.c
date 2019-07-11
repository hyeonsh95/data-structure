#include <stdio.h>
int main()
{
	//2-5) 입력한 문자열의 길이 계산하기
	char str[50];
	int length;
	printf("\n  문자열을 입력하세요 : ");
	gets(str);
	printf("\n 입력된 문자열은 \n \"");

	for (int i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		length++;
	}
	printf("\"\n입니다.");
	printf("\n\n입력된 문자열의 길이 = %d \n", length);

	getchar();
}
