#include <stdio.h>
int main()
{
	//2-5) �Է��� ���ڿ��� ���� ����ϱ�
	char str[50];
	int length;
	printf("\n  ���ڿ��� �Է��ϼ��� : ");
	gets(str);
	printf("\n �Էµ� ���ڿ��� \n \"");

	for (int i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		length++;
	}
	printf("\"\n�Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� = %d \n", length);

	getchar();
}