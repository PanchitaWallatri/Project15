#include<stdio.h>
int main()
{
	int num, i;
	printf("enter number : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) printf("*");
	printf("\n");
	return 0;
}