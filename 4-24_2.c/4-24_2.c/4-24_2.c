#include<stdio.h>

int main()
{

	int data = 100;
	int *ptrint;

	ptrint = &data;

	printf("십진수 주소값: %d\n", ptrint);
	printf("포인터 변수의 크기 : %d\n", sizeof(ptrint));

	return 0;

}